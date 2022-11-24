#include <stdio.h>

int main(){
	char sen[10000];
	int count, total;
	while(gets(sen)){
		count = 0, total = 0;
		for(int i = 0; sen[i]; i++){ // sen[i] for the limit
			if( sen[i] >= 'a' && sen[i] <= 'z' || sen[i] >= 'A' && sen[i] <= 'Z'){
				count = 1;
			}
			else{
				total += count;
				count = 0;
			}
		}
		printf("%d\n", count + total);
	}
	
	return 0;
}
