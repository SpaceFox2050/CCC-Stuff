#include <iostream>
using namespace std;

int main(){
    int ins;
    cin >> ins;
    unordered_map<int, int> friends;
    unordered_map<int, bool> lock;
    vector<int> index;
    //loop ins times to get inputs and calculate wait times
    for(int n = 0; n < ins; n++){
        char type;
        int fnum;
        cin >> type >> fnum;
        if(type == 'R'){
            if(friends.count(fnum) == 0) {
                friends[fnum] = 0;
                index.push_back(fnum);
            }
            lock[fnum] = false;
        }else if(type == 'W'){
            for(int x = 0; x < friends.size(); x++){
                if(!lock[index[x]]){
                    friends[index[x]] = friends[index[x]] + fnum;
                }
            }
        }else{
            lock[fnum] = true;
        }
    }
    //sort vector index so we can print out wait times in ascending order
    for(int x = 0; x < index.size(); x++){
        for(int y = x; y < index.size(); y++){
            if(index[x] > index[y]){
                int temp = index[x];
                index[x] = index[y];
                index[y] = temp;
            }
        }
    }
    //loop through index and print out wait times
    for(int x = 0; x < index.size(); x++){
        cout << index[x] << " ";
        if(friends[index[x]] == 0 || !lock[index[x]]) {
            cout << "-1";
        }else{
            cout << friends[index[x]];
        }
        cout << endl;
    }  
    return 0;
}  
  
