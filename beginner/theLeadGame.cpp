#include <iostream>
 
using std::cin; using std::cout; using std::endl;
 
int abs(int x){
 
	return (x < 0) ? -x : x;
 
}
 
int main(){
 
	int rounds = 0;
	int maxDiff = 0;
	int currDiff = 0;
	int p1 = 0;
	int p2 = 0;
 
	cin >> rounds;
	for(int i = 0; i < rounds; ++i){
 
		cin >> p1 >> p2;
		currDiff += p1 - p2;
		if(abs(currDiff) > abs(maxDiff)){
			maxDiff = currDiff;
		}
	}
	
	if(maxDiff > 0){
		cout << 1 << " " << abs(maxDiff) << endl;
	}else{
		cout << 2 << " " << abs(maxDiff) << endl;
	}
 
	return 0;
}
