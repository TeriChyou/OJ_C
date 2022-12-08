#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *s, *d;
	int temp_s, temp_d;
	scanf("%d", &n);
	
	s = (int *)malloc(sizeof(int) * n);
	d = (int *)malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", s + i, d + i);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < *(s + i); j++){
			temp_s = *(s + i) - j;
			temp_d = j;
			if(temp_s - temp_d == *(d + i)){
				printf("%d %d\n", temp_s, temp_d);
				break;
			}
			else if(temp_s - temp_d < *(d + i)){
				printf("impossible\n");
				break;	
			}
		}
	}
	
	return 0;
}
