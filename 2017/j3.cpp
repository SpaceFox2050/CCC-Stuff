#include <iostream>
using namespace std;

void elec(){
    int xa, ya, xb, yb, moves;
    cin >> xa >> ya >> xb >> yb >> moves;
    int total = abs(xa - xb) + abs(ya - yb);
    if(total%2 == moves%2 && total <= moves){
        cout << "Y";
    }else{
        cout << "N";
    }
}

int main(){
    elec();
    return 0;
}