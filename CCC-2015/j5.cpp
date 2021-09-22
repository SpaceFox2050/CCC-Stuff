#include <iostream>
using namespace std;

int recur(int*** searched, int pieces, int ppl, int min){
    //searched[pieces][ppl][min] has not been searched yet
    if(searched[pieces][ppl][min] == 0){
        if(pieces == ppl && min == 1){
            //if pieces == ppl, everyone gets 1 piece, pie is split only one way
            searched[pieces][ppl][min] = 1;
        }else if(ppl == 1){
            //if there is only 1 person, pie can only be split one way
            searched[pieces][ppl][min] = 1;
        }else{
            int temp = 0;
            //sum of the ways (pieces-x, ppl-1, x)
            //runs from min to (pieces/ppl)+1 because max start pieces do not surpass (pieces/ppl)
            for(int x = min; x < (pieces/ppl)+1; x++){
                temp+=recur(searched, pieces-x, ppl-1, x);
            }
            searched[pieces][ppl][min] = temp;
        }
    }
    return searched[pieces][ppl][min];
}

int main(){
    int pieces, ppl;
    cin >> pieces >> ppl;
    //initialize searched[][][] with 0s
    int*** searched;
    searched = new int** [pieces+1];
    for(int x = 0; x < pieces+1; x++){
        searched[x] = new int* [ppl+1];
        for(int y = 0; y < ppl+1; y++){
            searched[x][y] = new int [pieces+1];
            for(int z = 0; z < pieces+1; z++){
                searched[x][y][z] = 0;
            }
        }
    }
    //call recursive func to find max distributions
    cout << recur(searched, pieces, ppl, 1);
    return 0;
}  
