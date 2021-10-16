#include <iostream>
using namespace std;

int main(){
    string word;
    int happy = 0, sad = 0;
    cin >> word;
    if(word.length() >= 2)
        cout << "none";
    for(int index = 0; index < word.length()-2; index++){
        if(word[index] == ':' && word[index+1] == '-'){
            if(word[index+2] == ')')
                happy++;
            if(word[index+2] == '(')
                sad++;
        }
    }
    if(happy == 0 && sad == 0){
        cout << "none";
    }else if(happy == sad){
        cout << "unsure";
    }else if(happy > sad){
        cout << "happy";
    }else{
        cout << "sad";
    }
    return 0;
}  
