#include <iostream>
using namespace std;

void tan(){
    int q, bikes, total = 0;
    cin >> q >> bikes;
    int dmo [bikes];
    int peg [bikes];
    for(int& x:dmo)
        cin >> x;
    for(int& x:peg)
        cin >> x;
    for(int x = 0; x < bikes; x++){
        for(int y = x; y < bikes; y++){
            if(q == 1){
                if(dmo[x] > dmo[y]){
                    int temp = dmo[x];
                    dmo[x] = dmo[y];
                    dmo[y] = temp;
                }
                if(peg[x] > peg[y]){
                    int temp = peg[x];
                    peg[x] = peg[y];
                    peg[y] = temp;
                }
                continue;
            }
            if(dmo[x] < dmo[y]){
                int temp = dmo[x];
                dmo[x] = dmo[y];
                dmo[y] = temp;
            }
            if(peg[x] > peg[y]){
                int temp = peg[x];
                peg[x] = peg[y];
                peg[y] = temp;
            }
        }
    }
    for(int x = 0; x < bikes; x++)
        total+=max(dmo[x], peg[x]);
    cout << total;
}

int main(){
    tan();
    return 0;
}