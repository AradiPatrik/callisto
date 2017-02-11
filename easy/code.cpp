#include <iostream>

using lli = long long int;
using namespace std;

lli F(const int N, const int K, int Answer, const string& oper, lli (&A)[1000]){
	if(K == 0) return Answer;
	
	for(int j = 0; j < N; ++j){
		if(oper[0] == 'A'){
			Answer &= A[j];
		}else if(oper[0] == 'O'){
			Answer |= A[j];
		}else{
			if(K%2 == 0){
				return Answer;
			}else{
				Answer ^= A[j];
			}
		}
	}
	
	return Answer;
}

int main(){

	int cases = 0;
	cin >> cases;
	for(int i = 0; i < cases; ++i){
		int N, K, Answer;
		cin >> N >> K >> Answer;
		lli A[1000];
		for(int j = 0; j < N; ++j){
			cin >> A[j];
		}
		string oper;
		cin >> oper;
		cout << F(N, K, Answer, oper, A) << endl;
	}

}
