#include <stdio.h>

int rev(int n){
	int r = 0; // most important!!
	while(n > 0){
		r = r * 10 + n % 10;
		n = n / 10;
	}
	return r;
}

void get_solved(int n){
	int count, r;
	count = 1;
	r = rev(n);
	while(1){
		n = r + n;
		r = rev(n);
		if(r == n) break;
		count ++;
	}
	
	printf("%d %d\n", count, n);
}

int main(){
	int t, n, p, c;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		get_solved(n);
	}
	
	return 0;
}
