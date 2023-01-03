#include <stdio.h>

int main(){
	int N, result;
	while(scanf("%d", &N) && (N >= 0 && N <= 210000000)){
		while(N != 0){
			result += N;
			N--;
		}
		printf("%d\n", result + 1);
		result = 0;
	}
	return 0;
}
