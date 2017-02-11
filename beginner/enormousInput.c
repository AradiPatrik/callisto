#include <stdio.h>
 
int main(){
 
	int sorokSzama = 0;
	int oszto = 0;
	
	int osztando = 0;
	
	int oszthatokSzama = 0;
	
	scanf("%d %d", &sorokSzama, &oszto);
	
	for(int i = 0; i < sorokSzama; i++){
		scanf("%d", &osztando);
		if(osztando % oszto == 0){
			oszthatokSzama++;
		}
	}
	
	printf("%d",oszthatokSzama);
	
	return 0;
} 
