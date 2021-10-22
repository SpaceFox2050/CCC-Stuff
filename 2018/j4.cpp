#include <iostream>
using namespace std;

void rotate(int **table, int len){
    for (int x = 0; x < len / 2; x++) {
        for (int y = x; y < len - x - 1; y++) {
            //store var
            int temp = table[x][y];
            // Move values from right to top
            table[x][y] = table[y][len - 1 - x];
            // Move values from bottom to right
            table[y][len - 1 - x] = table[len - 1 - x][len - 1 - y];
            // Move values from left to bottom
            table[len - 1 - x][len - 1 - y] = table[len - 1 - y][x];
            // Assign temp to left
            table[len - 1 - y][x] = temp;
        }
    }
}

void sunflowers(){
    int rc, temp;
    cin >> rc;
    int **table;
    table = new int *[rc];
    for(int x = 0; x < rc; x++){
        table[x] = new int [rc];
        for(int y = 0; y < rc; y++){
            cin >> temp;
            table[x][y] = temp;
        }
    }
    for(int x = 0; x < 4; x++){
        bool ret = true;
        for(int y = 0; y < rc; y++){
            temp = table[y][0];
            for(int o = 1; o < rc; o++){
                if(table[y][o] > temp) {
                    temp = table[y][o];
                }else{
                    ret = false;
                    break;
                }
            }
            if(!ret)
                break;
        }
        temp = table[0][0];
        for(int y = 0; y < rc; y++){
            if(temp > table[y][0]){
                ret = false;
                break;
            }
        }
        if(ret)
            break;
        rotate(table, rc);
    }
    for(int x = 0; x < rc; x++){
        for(int y = 0; y < rc; y++)
            cout << table[x][y] << " ";
        cout << endl;
    }

}

int main(){
    sunflowers();
    return 0;
}