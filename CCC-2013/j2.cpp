#include <iostream>
using namespace std;

int main(){
    string sign;
    string rotate = "IOSHZXN";
    cin >> sign;
    for(int x = 0; x < sign.size(); x++){
        for(int y = 0; y < rotate.size(); y++){
            if(sign[x] == rotate[y]){
                break;
            }else if(y == rotate.size()-1){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
