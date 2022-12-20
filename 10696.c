#include <stdio.h>

int f91(int n){
	int result;
	if(n <= 100){
		result = f91(f91(n + 11));
	}
	else if(n >= 101){
		result = n - 10;
	}
	
	return result;
}


int main(){
	int N = 0;
	while(scanf("%d", &N)){
		if(N == 0) break;
		printf("f91(%d) = %d\n", N, f91(N));
	}
	
	return 0;
}
