#include <iostream>

using lli = long long int;
using namespace std;

lli calcProfit(lli coins){
	if(coins%12 != 0 || coins == 0){
		return 0;
	}else{
		lli sum = coins/12;
		sum += calcProfit(coins/4);
		sum += calcProfit(coins/3);
		sum += calcProfit(coins/2);
		return sum;
	}
}

lli calcSum(lli coins){

	int sum = 0;
	if(coins < 12){
		return coins;
	}else{
		sum += calcSum(coins/4);
		sum += calcSum(coins/3);
		sum += calcSum(coins/2);
		return sum;
	}
	

}

int main(){

	lli coins;
	while(cin >> coins){
		cout << calcSum(coins) << endl;
	}
	

	return 0;

}
