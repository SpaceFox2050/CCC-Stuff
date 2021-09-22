#include <iostream>
using namespace std;

int main(){
    int ppl;
    cin >> ppl;
    string part[2][ppl];
    for(int x = 0; x < ppl; x++){
        string one, two;
        cin >> one >> two;
        part[0][x] = one;
        part[1][x] = two;
    }
    for(int x = 0; x < ppl; x++){
        if(part[0][x] == part[1][x]){
            cout << "bad";
            return 0;
        }
        for(int y = 0; y < ppl; y++){
            if(x != y){
                if(part[0][x] == part[1][y] && part[1][x] != part[0][y]){
                    cout << "bad";
                    return 0;
                }
            }
        }
    }
    cout << "good";
    return 0;
}
