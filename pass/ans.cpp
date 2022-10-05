#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n)
    {
        double all = 0;
        for (int i = 0; i<n; i++){
            int temp;
            cin >> temp;
            all += temp;
        }
        if ((all/n) > 59){
            cout <<"no";
        }else{
            cout << "yes";
        }
        cout << endl;
    }    
}
