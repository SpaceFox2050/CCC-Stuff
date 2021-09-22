#include <iostream>
using namespace std;

int main(){
    int votes, a = 0, b = 0;
    cin >> votes;
    for(int x = 0; x < votes; x++){
        char temp;
        cin >> temp;
        if(temp == 'A'){
            a++;
        }else{
            b++;
        }
    }
    if(a == b){
        cout << "Tie";
    }else if(a > b){
        cout << "A";
    }else{
        cout << "B";
    }
    return 0;
}
