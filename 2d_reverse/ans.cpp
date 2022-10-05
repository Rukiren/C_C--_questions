#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int x[a][b];

    for (int i=0; i<a; i++){
        for (int j=0; j<b;j++){
            cin >> x[i][j];
        }
    } // 輸入

    for (int i=0; i<b; i++){
        for (int j=0; j<a;j++){
            cout << x[j][i] << " ";
        }
        cout << endl;
    } // 輸出
}