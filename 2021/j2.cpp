#include <iostream>
using namespace std;

int main(){
    int high, ppl, bid = 0;
    cin >> ppl;
    string name, highname;
    for(int x = 0; x < ppl; x++){
        cin >> name >> high;
        if(high > bid){
            bid = high;
            highname = name;
        }
    }
    cout << highname << endl;
    return 0;
}