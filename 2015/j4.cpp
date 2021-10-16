#include <iostream>
#include <vector>
using namespace std;

int main(){
    int moves, time = 0, num;
    cin >> moves;
    //store friend wait times cant be bigger than 101
    vector<int> friends (101);
    //set lock if message has been replied to
    vector<int> lock (101);
    //store the time message was received from friend num
    vector<int> last (101);
    //loop moves times to get all inputs and calculate wait times
    for(int n = 0; n < moves; n++){
        char type;
        cin >> type >> num;
        if(type == 'S'){
            //add time difference from last message to final[num]; set lock as replied
            friends[num] += time - last[num];
            lock[num] = 1;
        }else if(type == 'R'){
            //turn off lock and update last time message was sent for friend num
            lock[num] = -1;
            last[num] = time;
        }else{ //meaning type == 'W' (wait)
            //increase time by num - 2 because wait only occurs after every consecutive pair (2 time)
            time += num - 2;
        }
        time++;
    }
    //loop through friends and print out wait time; friend numbers can only range from 1 - 100
    for(int x = 0; x < 101; x++){
        //check if lock[x] exists
        if(lock[x]){
            //lock is off (has replied to friend message)
            if(lock[x] > 0){
                cout << x << " " << friends[x];
            }else{ //lock is on and message has not been replied to
                cout << x << " -1";
            }
            cout << endl;
        }
    }
    return 0;
}  
  
