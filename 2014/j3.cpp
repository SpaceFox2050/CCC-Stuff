#include <iostream>
using namespace std;

int main(){
    int ant = 100, dav = 100, rolls, a, d;
    cin >> rolls;
    for(int x = 0; x < rolls; x++){
        cin >> a >> d;
        if(a > d){
            dav-=a;
        }else if(d > a){
            ant-=d;
        }
    }
    cout << ant << endl << dav;
    return 0;
}
