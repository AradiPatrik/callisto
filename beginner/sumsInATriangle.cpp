#include <iostream>
 
using std::cin; using std::cout; using std::endl;
 
inline unsigned max(unsigned x, unsigned y){
	return (x > y) ? x : y;
}
 
int main(){
 
	unsigned cases;
	unsigned triangle[100][100];
	unsigned rows;
	
	cin >> cases;
	for(int k = 0; k < cases; ++k){
		cin >> rows;
		for(unsigned i = 0; i < rows; ++i){
			for(unsigned j =0; j <= i; ++j){
				cin >> triangle[i][j];
			}
		}
 
		for(unsigned i = 1; i < rows; ++i){
			for(unsigned j = 0; j <= i; ++j){
				if(j == 0){
					triangle[i][j] += triangle[i-1][j];		
				}else if(j == i){
					triangle[i][j] += triangle[i-1][j-1];
				}else{
					triangle[i][j] += max(triangle[i-1][j], triangle[i-1][j-1]);
				}
			}
		}
 
		unsigned best = 0;
		for(unsigned i = 0; i < rows; ++i){
			if(triangle[rows - 1][i] > best)
				best = triangle[rows - 1][i];
		}
		cout << best << endl;
	}
	
	return 0;
 
}
