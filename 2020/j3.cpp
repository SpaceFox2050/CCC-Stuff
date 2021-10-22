#include <iostream>
using namespace std;

void art(int points){
    int bigx = -1, smallx = 101, bigy = -1, smally = 101;
    for(int z = 0; z < points; z++){
        int x, y;
        string temp;
        cin >> x >> temp;
        y = stoi(temp.substr(1, temp.length()));
        bigx = max(bigx, x);
        smallx = min(smallx, x);
        bigy = max(bigy, y);
        smally = min(smally, y);
    }
    cout << smallx-1 << "," << smally-1 << endl;
    cout << bigx+1 << "," << bigy+1 << endl;
}

int main(){
    int points;
    cin >> points;
    art(points);
    return 0;
}