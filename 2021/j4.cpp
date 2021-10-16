#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string books;
    cin >> books;
    unordered_map<char, int> key;
    key['L'] = 3; key['M'] = 2; key['S'] = 1;
    int moves = 0, highest = 0, place;
    for(int x = 0; x < books.length(); x++){ //MSLL 1, 0, 2, 3
        for(int y = x; y < books.length(); y++){
            if(key[books[y]] >= highest){
                highest = key[books[y]];
                place = y;
            }
        }
        if(key[books[x]] < highest){
            moves++;
            char temp = books[x];
            books[x] = books[place];
            books[place] = temp;
        }
        highest = 0;
    }
    cout << moves << endl;
    return 0;
}