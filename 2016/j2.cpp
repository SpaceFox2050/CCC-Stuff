#include <iostream>
using namespace std;

void magic(){
    int sq[4][4];
    int temp, len = 0;
    for(auto & x : sq){
        for(auto & y : x){
            cin >> y;
        }
    }
    for(int x = 0; x < 4; x++)
        len+=sq[0][x];
    for(int x = 0; x < 4; x++){
        temp = 0;
        for(int y = 0; y < 4; y++)
            temp+=sq[x][y];
        if(temp != len){
            cout << "not magic";
            return;
        }
        temp = 0;
        for(int y = 0; y < 4; y++)
            temp+=sq[y][x];
        if(temp != len){
            cout << "not magic";
            return;
        }
    }
    cout << "magic";
}

int main(){
    magic();
    return 0;
}