#include <iostream>
#include <fstream>
#include <vector>
 
using namespace std;
 
void h_sort(vector<int> &vec, int h){
	for(decltype(vec.size()) i = h; i < vec.size(); ++i){
		for(auto j = i; j >= h && (vec[j] < vec[j-h]); j-=h){
			auto swap = vec[j];
			vec[j] = vec[j-h];
			vec[j-h] = swap;
		}
	}
 
}
 
void shell_sort(vector<int> &vec){
 
	int h = 1;
	while (h < (vec.size() / 3)) h = h*3 + 1;
	while (h > 0){
		h_sort(vec, h);
		h = h/3;
	}
}
 
int main(){
 
	vector<int> vec;
 
	int count;
	cin >> count;
	
	int buff;
	for(int i = 0; i < count; ++i){
		cin >> buff;
		vec.push_back(buff);
	}
 
	shell_sort(vec);
	for(auto it = vec.begin(); it != vec.end(); ++it){
		cout << *it << endl;
	}
 
	return 0;
}
