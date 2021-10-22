#include <iostream>
using namespace std;

bool strsub(string child, string main, int childlen, int mainlen){
    for(int x = 0; x < mainlen; x++){
        if(child[0] == main[x]){
            int counter = 1;
            for(int z = x+1; z < x+childlen; z++){
                if(child[counter] != main[z]){
                    break;
                }
                if(z == x+childlen-1){
                    return true;
                }
                counter++;
            }
        }
    }
    return false;
}

void shifts(string main, string child){
    for(int x = 0; x < child.length(); x++){
        char temp = child[0];
        for(int y = 0; y < child.length()-1; y++){
            child[y] = child[y+1];
        }
        child[child.length()-1] = temp;
        if(strsub(child, main, child.length(), main.length())){
            cout << "yes" << endl;
            return;
        }
    }
    cout << "no" << endl;
}

int main(){
    string main, child;
    cin >> main >> child;
    shifts(main, child);
    return 0;
}