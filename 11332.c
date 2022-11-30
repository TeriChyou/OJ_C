#include <stdio.h>

int main(){
	int n;
	while(scanf("%d", &n)){
		if(n == 0 || n > 2000000000) break;
		printf("%d\n", get_result(n));
	}
	
	return 0;
}

int result(int n){
	
	int sum = 0;
	
	while(n != 0){
		sum = sum + n % 10;
		n /= 10;
	}
	
	return sum;
}

int get_result(int n){
	
	while(n / 10) n = result(n);
	
	return n;
}
