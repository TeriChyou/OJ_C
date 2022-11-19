#include <stdio.h>

int t;
int a, b, c;
int result;

int main(){
	scanf("%d", &t);
	
	if(t > 20)return 0;
	
	for(int i = 0; i < t; i++){
		scanf("%d %d %d", &a, &b, &c);
		if((a > b && b > c) || (c > b && b > a)){
			printf("Case %d: %d\n", i + 1, b);
		}
		else if((b > a && a > c) || (c > a && a > b)){
			printf("Case %d: %d\n", i +  1, a);
		}
		else if((a > c && c > b) || (b > c && c > a)){
			printf("Case %d: %d\n", i + 1, c);
		}
		else{
			return 0;
		}
	}
	
	return 0;
}
