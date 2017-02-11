#include <iostream>
#include <string>

using namespace std;

int main(){

	int cases;
	cin >> cases;
	for(int i = 0; i < cases; ++i){

		string numStr;
		cin >> numStr;

		int total = 0;
		for(auto e : numStr){
			total += (e - '0');
		}
		
		cout << total << endl;
	}

	return 0;
}
