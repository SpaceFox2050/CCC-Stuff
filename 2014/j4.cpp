#include <iostream>
#include <vector>
using namespace std;

int main(){
    int friends, removals, temp;
    cin >> friends >> removals;
    vector<int> nums;
    for(int x = 1; x < friends+1; x++)
        nums.push_back(x);
    for(int x = 0; x < removals; x++){
        cin >> temp;
        for(int y = temp-1; y < nums.size(); y+=temp-1){
            nums.erase(nums.begin()+y);
        }
    }
    for(int num : nums)
        cout << num << endl;
    return 0;
}  
