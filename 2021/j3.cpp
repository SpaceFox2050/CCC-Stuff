#include <iostream>
using namespace std;

int main(){
    int x;
    string last;
    while(true){
        cin >> x;
        if(x == 99999){
            break;
        }
        //56931
        int y = x/10000;
        int z = x/1000 - y*10;
        if((y+z)%2 == 1){
            cout << "left" << endl;
            last = "left";
            cout << x%1000 << endl;
        }else if(y+z == 0){
            cout << last;
            cout << x%1000 << endl;
        }else {
            cout << "right" << endl;
            last = "right";
            cout << x % 1000 << endl;
        }
    }
    return 0;
}