#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    

    int len = x.length() - 1; 

    if (x[len] == '0'){ // 這裡是字元比較，不能用雙引號，要用單引號
        for(int i=len - 1; i>=0; i--){
            cout << x[i];
        }
    }else{
        for (int i=len; i>=0; i--){
            cout << x[i];        
        }    
    }
}

