#include <iostream>
using namespace std;

void tour(){
    int wins;
    char wl;
    for(int x = 0; x < 6; x++){
        cin >> wl;
        if(wl == 'W')
            wins++;
    }
    if(wins == 6 || wins == 5){
        cout << "1";
    }else if(wins == 4 || wins == 3){
        cout << "2";
    }else if(wins == 0){
        cout << "-1";
    }else{
        cout << "3";
    }
}

int main(){
    tour();
    return 0;
}