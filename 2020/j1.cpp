#include <iostream>
using namespace std;

void treats(int a, int b, int c){
    if((a+b*2+c*3) < 10){
        cout << "sad" << endl;
    }else{
        cout << "happy" << endl;
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    treats(a, b, c);
    return 0;
}