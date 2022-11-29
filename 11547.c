#include <stdio.h>
#include <math.h>

int main(){
	int t, n;
	
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		printf("%d\n", abs((n * 567 / 9 + 7492) * 235 / 47 - 498) / 10 % 10);
	}
	
	return 0;
}
