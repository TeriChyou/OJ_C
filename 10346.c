#include <stdio.h>

int main(){
	
	int n, k;
	int r; // r for result;
	
	while(scanf("%d %d", &n, &k) != EOF){
		r = n;
		while(n / k){
			r += n / k;
			n = n / k + n % k;
		}
		
		printf("%d\n", r);
	}
	
	return 0;
}
