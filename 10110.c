#include <stdio.h>
#include <math.h>

// for any integers, when n can be sqrt(n), then it will have odd number of factors, else not.

int main(){
	int n;
	int i;
	while(scanf("%d", &n) != EOF){
		if(n == 0) break;
		i = sqrt(n);
		if(i * i == n) printf("yes\n");
		else printf("no\n");
	}
	
	return 0;
}
