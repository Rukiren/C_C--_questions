#include <iostream>
#include <string>`
using namespace std;

int main(){
	string x;
	cin >> x;
	
	for (int i =0; i < x.length(); i++){
		x[i] = x[i] - 7;
	} // 直接將 ascii code - 7
	cout << x;
	
}