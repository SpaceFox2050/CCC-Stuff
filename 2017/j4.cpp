#include <iostream>
using namespace std;

void timeup(int time[]){
    time[3]++;
    if(time[3] == 10){
        time[2]++;
        time[3] = 0;
    }
    if(time[2] == 6){
        if(time[1] < 10){
            time[1]++;
        }
        time[2] = 0;
    }
    if(time[1] == 10 && time[0] == 0){
        time[1] = 1;
        time[0]++;
    }
    if(time[1] == 3 && time[0] == 1){
        time[0] = 0;
        time[1] = 1;
    }
}

void fav(){
    int mins, total = 0;
    int time[4];
    time[0] = 1, time[1] = 2, time[2] = 0, time[3] = 0;
    cin >> mins;
    for(int x = 0; x < mins; x++){
        timeup(time);
        int dif = time[1]-time[0];
        int dif2 = time[2]-time[1];
        int dif3 = time[3]-time[2];
        if((dif == dif2 && dif == dif3) || (dif2 == dif3 && time[0] == 0)){
            total++;
        }
    }
    cout << total;
}

int main(){
    fav();
    return 0;
}