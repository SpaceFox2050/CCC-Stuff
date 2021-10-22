#include <iostream>
using namespace std;

void cities(){
    int temp = 0;
    int city[5];
    city[0] = 0;
    for(int x = 1; x < 5; x++){
        cin >> temp;
        city[x] = temp;
    }
    temp = 0;
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            if(x > y){
                for(int z = y+1; z < x+1; z++)
                    temp+=city[z];
            }else{
                for(int z = x+1; z < y+1; z++)
                    temp+=city[z];
            }
            cout << temp << " ";
            temp = 0;
        }
        cout << endl;
    }
}

int main(){
    cities();
    return 0;
}