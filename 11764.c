#include <stdio.h>
#include <stdlib.h>

int main(){
	int T; // test cases
	scanf("%d", &T);
	
	int *N, **num;
	int *hj, *lj; // low jumps, high jumps
	
	N = (int *)malloc(sizeof(int) * T);
	hj = (int *)malloc(sizeof(int) * T);
	lj = (int *)malloc(sizeof(int) * T);
	num = (int **)malloc(sizeof(int) * T); // int 2D
	
	for(int i = 0; i < T; i++){
		scanf("%d", N + i);
		*(num + i) = (int*)malloc(sizeof(int) * *(N + i)); // int 1D
		for(int j = 0; j < *(N + i); j++){
			scanf("%d", (*(num + i) + j));
		}
	}
	
	for(int i = 0; i < T; i++){
		
		*(hj + i) = 0;
		*(lj + i) = 0;
		
		for(int j = 0; j < *(N + i); j++){
			if(j != 0){
				if(*(*(num + i) + j - 1) < *(*(num + i) + j)){
					int temp_h = 0;
					temp_h = *(hj + i) + 1;
					*(hj + i) = temp_h;
				}
				else if(*(*(num + i) + j - 1) > *(*(num + i) + j)){
					int temp_l = 0;
					temp_l = *(lj + i) + 1;
					*(lj + i) = temp_l;
				}
			}
		}
	}
	
	for(int i = 0; i < T; i++){
		printf("Case %d: %d %d\n", i + 1, *(hj + i), *(lj + i));
	}
	
	for(int i = 0; i < T; i++){
		free(*(num + i));
	}
	
	free(num);
	free(N);
	free(hj);
	free(lj);
	

	return 0;
}
