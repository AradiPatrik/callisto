#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){

	int cases = 0;
	constexpr int MENU_SIZE = 12;
	constexpr int MAX_PRICE = 2048;
	cin >> cases;
	int menu[MENU_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
	for(int i = 0; i < cases; ++i){
		
		int p = 0;
		cin >> p;
		
		int counter = 0;
		while(p > 0){
			if(p >= MAX_PRICE){
				p -= MAX_PRICE;
				++counter;
			}else{
				for(int j = 0; j < MENU_SIZE; ++j){
					if(menu[j] > p){
						p -= menu[j-1];
						++counter;
						break;
					}
				}
			}
		}
		
		cout << counter << endl;
		
	}

	return 0;

}
