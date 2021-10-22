#include <iostream>
using namespace std;

void tele(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a == 8 || a == 9) && (d == 8 || d == 9) && b == c){
        cout << "ignore" << endl;
    }else{
        cout << "answer" << endl;
    }
}

int main(){
    tele();
    return 0;
}