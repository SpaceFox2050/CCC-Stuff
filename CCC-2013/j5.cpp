#include <iostream>
using namespace std;

int main(){
    int fav, played, fwin = 0, temp = 0;
    cin >> fav >> played;
    vector<int> notfav;
    int points[4];
    int tplayed[2][played];
    int tleft[2][6-played];
    int wleft[6-played];
    for(int & point : points)
        point = 0;
    for(int x = 1; x < 5; x++){
        if(x != fav)
            notfav.push_back(x-1);
    }
    int t1, t2, p1, p2;
    for(int x = 0; x < played; x++){
        cin >> t1 >> t2 >> p1 >> p2;
        tplayed[0][x] = t1;
        tplayed[1][x] = t2;
        if(p1 > p2){
            points[t1-1]+=3;
        }else if(p2 > p1){
            points[t2-1]+=3;
        }else{
            points[t1-1]++;
            points[t2-1]++;
        }
    }
    for(int x = 1; x < 4; x++){
        for(int y = x+1; y < 5; y++){
            for(int z = 0; z < played; z++){
                if(x == tplayed[0][z] && y == tplayed[1][z]){
                    break;
                }else if(z == played-1){
                    tleft[0][temp] = x;
                    tleft[1][temp] = y;
                    temp++;
                }
            }
        }
    }
    for(int x = 0; x < 6-played; x++)
        wleft[x] = 0;
    while(wleft[0] != 3){
        int tpoints[4];
        for(int x = 0; x < 4; x++){
            tpoints[x] = points[x];
        }
        for(int x = 0; x < 6-played; x++){
            if(wleft[x]%3 == 0){
                tpoints[tleft[0][x]-1]+=3;
            }else if(wleft[x]%3 == 1){
                tpoints[tleft[1][x]-1]+=3;
            }else{
                tpoints[tleft[0][x]-1]++;
                tpoints[tleft[1][x]-1]++;
            }
        }
        if(tpoints[fav-1] > tpoints[notfav[0]-1] && tpoints[fav-1] > tpoints[notfav[1]] && tpoints[fav-1] > tpoints[notfav[2]]){
            fwin++;
        }
        wleft[5-played]++;
        for(int x = 5-played; x > 0; x--){
            if(wleft[x]%3 == 0 && wleft[x] != 0)
                wleft[x-1]++;
        }
    }
    cout << fwin;
    return 0;
}
