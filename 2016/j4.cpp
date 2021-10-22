#include <iostream>
using namespace std;

void time(){
    string time;
    cin >> time;
    int hr = (int) time[0] - 48;
    hr *= 10;
    hr += (int) time[1] - 48;
    int mins = (int) time[3]-48;
    mins *= 10;
    for(int n = 0; n < 120; n++){
        mins++;
        if((hr >= 7 && hr < 10) || (hr >= 15 && hr < 19))
            mins++;
        if(mins >= 60){
            mins-=60;
            hr++;
            if(hr == 25){
                hr = 1;
            }
        }
    }
    if(hr < 10)
        cout << "0";
    cout << hr << ":";
    if(mins < 10)
        cout << "0";
    cout << mins;
}

int main(){
    time();
    return 0;
}