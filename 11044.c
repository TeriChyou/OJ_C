#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int t, check = 0;
	scanf("%d", &t);
	int *n, *m, *result;
	
	n = (int *)malloc(sizeof(int) * t);
	m = (int *)malloc(sizeof(int) * t);
	result = (int *)malloc(sizeof(int) * t);
	
	for(int i = 0; i < t; i++){
		scanf("%d %d", n + i, m + i);
		if(*(n + i) < 6 || *(n + i) > 10000 || *(m + i) < 6 || *(m + i) > 10000){
			check = 1;
			break;
		}
	}
	
	if(check == 0){
		for(int i = 0; i < t; i++){
			result = (*(n + i) / 3) * (*(m + i) / 3);
			printf("%d\n", result);
		}
	}
	
	return 0;
}
