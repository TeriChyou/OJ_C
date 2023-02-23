#include <stdio.h>
#include <stdlib.h>
#include <math.h> //requires math.h to get the floor num

struct sortMaxMin{
	float max, min;
};

typedef struct sortMaxMin Struct;

Struct sort(float a, float b){
	Struct s;
	if (a > b){
		s.max = a;
		s.min = b;
	}
	else{
		s.max = b;
		s.min = a;
	}
	
	return s;
}

int main(){
	int i = 0;
	Struct result;
	float *a, sum = 0;
	a = (float*)malloc(sizeof(float));
	
	while(scanf("%f", (a + i)) != EOF){
		if(i == 0){
			printf("%.0f\n", *(a + i));
		}
		else if((i + 1) % 2 != 0){
			for(int j = 0; j < i; j++){
				for(int k = 0; k < i - j; k++){
					result = sort(*(a + k), *(a + k + 1));
					*(a + k) = result.min;
					*(a + k + 1) = result.max;
				}
			}
		
			sum = floor(*(a + ((i + 1) / 2)));
			printf("%.0f\n", sum);
		}
		else if((i + 1) % 2 == 0){
			for(int j = 0; j < i; j++){
				for(int k = 0; k < i - j; k++){
					result = sort(*(a + k), *(a + k + 1));
					*(a + k) = result.min;
					*(a + k + 1) = result.max;
				}
			}
		
			sum = floor((*(a + ((i - 1)/ 2)) + *(a + ((i + 1) / 2))) / 2);
			printf("%.0f\n", sum);
		}
		i++;
	}
	
	free(a);
	
	return 0;
}
