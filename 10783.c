#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i;
	int a[100], b[100], sum[100];
	
	scanf("%d", &i);
	if(i > 100) return 0;
	for(int j = 0; j < i; j ++){
		scanf("%d", &a[j]);
		scanf("%d", &b[j]);
	}
	
	for(int j = 0; j < i; j ++){
		sum[j] = 0;
		while(a[j] <= b[j]){
			if(a[j] % 2 != 0){
				sum[j] = sum[j] + a[j];
				a[j] ++;
			}
			else{
				a[j] ++;
			}
		}
	}
	
	for(int j = 0; j < i; j ++){
		printf("Case %d: %d\n", j + 1, sum[j]);
	}
	
	return 0;
}
