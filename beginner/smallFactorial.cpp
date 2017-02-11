#include <iostream>
using namespace std;
 
void multiply(unsigned short (&a)[1000], const unsigned &n, unsigned &digits){
 
	unsigned tmp = 0;
	for(unsigned i = 0; i < digits; ++i){
		unsigned x = a[i]*n + tmp;
		a[i] = x % 10;
		tmp = x / 10;
	}
	
	while(tmp > 0){
		a[digits] = tmp % 10;
		tmp /= 10;
		++digits;		
	}
}
 
int main(){
 
	unsigned short testCases;
	cin >> testCases;
	unsigned short bigInteger[1000];
	unsigned digits;
	
	for(int i = 0; i < testCases; ++i){
		bigInteger[0] = 1;
		unsigned n;
		digits = 1;
		cin >> n;
		while(n > 1){
			multiply(bigInteger, n, digits);
			--n;
		}
		for(int i = digits-1; i >= 0; --i){
			cout << bigInteger[i];
		}
		cout << endl;
	}		
	
	return 0;
}
 
