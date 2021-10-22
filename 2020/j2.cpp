#include <iostream>
using namespace std;

int epid(int final, int start, int infects){
    int current = start, day = 0;
    while(current <= final){
        start*=infects;
        current+=start;
        day++;
    }
    return day;
}

int main(){
    int final, start, infects;
    cin >> final >> start >> infects;
    cout << epid(final, start, infects) << endl;
    return 0;
}