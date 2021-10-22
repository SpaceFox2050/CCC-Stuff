#include <iostream>
#include <vector>
using namespace std;

void path(){
    int pages, temp, sec, moves = 1;
    vector <vector<int>> book;
    vector <int> next;
    cin >> pages;
    bool check[pages];
    for(int x = 0; x < pages; x++){
        book.push_back(vector<int>());
        cin >> temp;
        book[x].push_back(temp);
        for(int y = 0; y < temp; y++){
            cin >> sec;
            book[x].push_back(sec);
        }
        check[x] = false;
    }
    for(int x = 1; x < book[0][0]+1; x++)
        next.push_back(book[0][x]);
    for(auto& row:book){
        temp = row[0];
        for(int x = 1; x < temp+1; x++){
            if(!check[row[x]-1])
                check[row[x]-1] = true;
        }
    }
    for(int x = 1; x < pages; x++){
        if(!check[x]){
            cout << "N" << endl;
            break;
        }else if(x == pages-1){
            cout << "Y" << endl;
        }
    }
    while(true){
        moves++;
        temp = next.size();
        for(int x = 0; x < temp; x++){
            if(book[next[0]-1][0] == 0){
                cout << moves << endl;
                return;
            }
            for(int y = 1; y < book[next[0]-1][0]+1; y++)
                next.push_back(book[next[0]-1][y]);
            book.erase(book.begin());
        }
    }
}

int main(){
    path();
    return 0;
}