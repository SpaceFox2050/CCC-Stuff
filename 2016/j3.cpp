#include <iostream>
using namespace std;

void palin(){
    string word;
    cin >> word;
    int max = 1;
    for(int x = 0; x < word.length(); x++){
        for(int y = x; y < word.length(); y++){
            string forw, back;
            for(int a = x; a < y+1; a++)
                forw+=word[a];
            for(int a = y; a > x-1; a--)
                back+=word[a];
            if(forw == back){
                if(forw.length() > max)
                    max = forw.length();
            }
        }
    }
    cout << max;
}

int main(){
    palin();
    return 0;
}