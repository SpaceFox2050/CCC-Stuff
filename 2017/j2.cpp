#include <iostream>
using namespace std;

void shift(){
    int num, shifts;
    cin >> num >> shifts;
    int temp = num;
    for(int x = 0; x < shifts; x++){
        num*=10;
        temp+=num;
    }
    cout << temp;
}

int main(){
    shift();
    return 0;
}