#include <iostream>
using namespace std;

int main(){
    int mins, tasks, complete = 0;
    cin >> mins >> tasks;
    int jobs[tasks];
    for(int& x:jobs)
        cin >> x;
    for(int x = 0; x < tasks; x++){
        for(int y = x; y < tasks; y++){
            if(jobs[x] > jobs[y]){
                jobs[x]+=jobs[y];
                jobs[y] = jobs[x] - jobs[y];
                jobs[x]-=jobs[y];
            }
        }
    }
    while(mins >= 0){
        mins-=jobs[complete];
        complete++;
    }
    if(tasks == 0){
        cout << complete;
    }else{
        cout << complete-1;
    }
    return 0;
}
