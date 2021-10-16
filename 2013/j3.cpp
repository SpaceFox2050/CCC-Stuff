#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    if(year <= 10){
        cout << year+1;
        return 0;
    }
    int consyr;
    while(true){
        year++;
        consyr = year;
        int digits = log10(year)+1;
        int nums [digits];
        bool found = true;
        for(int x = 0; x < digits; x++){
            nums[x] = consyr%10;
            consyr/=10;
        }
        for(int x = 0; x < digits; x++){
            for(int y = x+1; y < digits; y++){
                if(nums[x] == nums[y]){
                    found = false;
                    break;
                }
            }
            if(!found){
                break;
            }
        }
        if(found){
            cout << year;
            return 0;
        }

    }
    return 0;
}
