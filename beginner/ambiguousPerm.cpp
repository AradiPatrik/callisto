#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){

	int constexpr MAX_LENGTH = 100000;
	int permLength = 0;
	
	while(true){
		int perm[MAX_LENGTH];
		int inversPerm[MAX_LENGTH];
		bool isAmbig = true;
		cin >> permLength;
		if(permLength == 0) break;

		for(int i = 0; i < permLength; ++i){
			int currentNum = 0;
			cin >> currentNum;
			perm[i] = currentNum;
			inversPerm[currentNum-1] = i + 1;
		}
		
		for(int i = 0; i<permLength; ++i){
			if(perm[i] != inversPerm[i]){
				isAmbig = false;
				break;
			}
		}

		cout << (isAmbig ? "ambiguous" : "not ambiguous")
			 << endl;

	}

	return 0;
}
