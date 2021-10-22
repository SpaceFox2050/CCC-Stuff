#include <iostream>
using namespace std;

void escape(int rows, int cols, int**room){
    int xi = rows, yi = cols, lastx = rows, lasty = cols;
    bool ret = false;
    while(true){
        for(int x = 0; x < rows; x++){
            for(int y = 0; y < cols; y++){
                if(xi*yi == room[x][y]){
                    xi = x; yi = y;
                    xi++; yi++; ret = true;
                    break;
                }
            }
            if(ret)
                break;
        }
        ret = false;
        cout << xi << " " << yi << endl;
        if(xi == rows && yi == cols){
            cout << "no" << endl;
            return;
        }else if(xi == 1 && yi == 1){
            cout << "yes" << endl;
            return;
        }else if(xi == lastx && yi == lasty){
            int tempx = xi, tempy = yi;
            tempx--; tempy--;
            room[tempx][tempy] = 0;
            xi = rows; yi = cols; lastx = rows; lasty = cols;
        }else{
            lastx = xi; lasty = yi;
        }
    }
}

int main(){
    int rows, cols, temp;
    cin >> rows >> cols;
    int **room;
    room = new int *[cols];
    for(int x = 0; x < rows; x++){
        room[x] = new int[rows];
        for(int y = 0; y < cols; y++){
            cin >> temp;
            room[x][y] = temp;
        }
    }
    escape(rows, cols, room);
    return 0;
}
