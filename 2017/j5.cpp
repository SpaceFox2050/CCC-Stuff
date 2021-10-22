#include <iostream>
#include <unordered_set>
using namespace std;

int lenmax(int arr[], int curmax, int height, int boards){
    int temp [boards];
    int curlen = 0;
    bool bk = false;
    for(int x = 0; x < boards; x++)
        temp[x] = arr[x];
    for(int x = 0; x < boards-1; x++){
        for(int o = x+1; o < boards; o++){
            if(arr[x]+arr[o] == height){
                temp[x] = 0;
                temp[o] = 0;
                curlen++;
                bk = true;
                break;
            }
        }
        if(bk)
            break;
    }
    for(int x = 0; x < boards-1; x++){
        for(int y = x+1; y < boards; y++){
            if(temp[x]+temp[y] == height && temp[x] != 0 && temp[y] != 0){
                temp[x] = 0;
                temp[y] = 0;
                curlen++;
            }
        }
    }
    if(curlen > curmax)
        return curlen;
    return curmax;
}

void nail(){
    int boards, temp, maxlen = 0, diffs = 0;
    cin >> boards;
    int lens [boards];
    unordered_set<int> heights;
    for(int& x:lens)
        cin >> x;
    for(int x = 0; x < boards-1; x++){
        for(int y = x+1; y < boards; y++)
            heights.insert(lens[x]+lens[y]);
    }
    for(int x:heights)
        maxlen = lenmax(lens, maxlen, x, boards);
    for(int x:heights){
        temp = lenmax(lens, 0, x, boards);
        if(temp >= maxlen)
            diffs++;
    }
    cout << maxlen << " " << diffs;
    
}

int main(){
    nail();
    return 0;
}