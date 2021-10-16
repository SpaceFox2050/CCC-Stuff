#include <iostream>
using namespace std;

int main(){
    int rows, cols, moves, num, total = 0;
    char temp;
    cin >> rows >> cols >> moves;
    char canva[rows][cols];
    for(int x = 0; x < moves; x++){
        cin >> temp >> num;
        if(temp == 'R'){
            for(int y = 0; y < cols; y++){
                if(canva[num][y] != 'G'){
                    canva[num][y] = 'G';
                }else{
                    canva[num][y] = 'B';
                }
            }
        }else{
            for(int y = 0; y < rows; y++){
                if(canva[y][num] != 'G'){
                    canva[y][num] = 'G';
                }else{
                    canva[num][y] = 'B';
                }
            }
        }
    }
    for(int x = 0; x < rows; x++){
        for(int y = 0; y < cols; y++){
            if(canva[x][y] == 'G'){
                total++;
            }
        }
    }
    cout << total << endl;
    return 0;
}