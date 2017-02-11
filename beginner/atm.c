#include <stdio.h>

int main(){

	int withDrawAmount = 0;
	float balance = 0.0f;

	scanf("%d %f", &withDrawAmount, &balance);

	if((withDrawAmount % 5 == 0) && (withDrawAmount + 0.5 <= balance) ){
	
		balance -= (withDrawAmount+0.5);
	
	}

	printf("%.2f", balance);


	return 0;
} 
