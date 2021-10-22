#include <iostream>
using namespace std;

void park(){
    int spaces, both = 0;
    char temp;
    cin >> spaces;
    char first[spaces];
    for(int x = 0; x < spaces; x++){
        cin >> temp;
        first[x] = temp;
    }
    for(int x = 0; x < spaces; x++){
        cin >> temp;
        if(first[x] == temp && temp == 'C')
            both++;
    }
    cout << both << endl;
}

int main(){
    park();
    return 0;
}