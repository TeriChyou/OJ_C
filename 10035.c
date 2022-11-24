#include <stdio.h>

// carry: 5 + 4 = 9 -> not carry ; 5 + 5 = 10 -> carry (in decimal)

int a, b;
int carry[100];
int j = 0, k = 0;
int l = 1000000000;

int main(){
	while(scanf("%d %d", &a, &b) != EOF ){
		if(a == 0 && b == 0) break;
		carry[j] = 0;
		for(int i = 1; i < 11; i++){
			if((int)(a / l) + (int)(b / l) >= 10){
				carry[j]++;
			}
			a = a - (int)(a / l) * l;
			b = b - (int)(b / l) * l;
			l = l / 10;
		}
		l = 1000000000;
		j++;
		k++;
	}
	for(j = 0; j < k; j++){
		if(carry[j] == 0){
			printf("No carry operation.\n");
		}
		else if(carry[j] == 1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n", carry[j]);
		}
	}
	
	return 0;
}

// DONE!!!
