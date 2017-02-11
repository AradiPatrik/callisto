#include <iostream>
 
using std::cin; using std::cout; using std::endl;
 
int main(){
 
	int count;
	int numOfCakes;
 
	cin >> count;
	
	for(int i = 0; i < count; ++i){
		cin >> numOfCakes;
		cout << numOfCakes/2 + 1 << endl;
	}
	
 
	return 0;
 
}
