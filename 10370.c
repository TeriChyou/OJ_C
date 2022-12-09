#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int C = 0; 
	// The rst line of standard input containsan integer C, 
	// the number of test cases.
	scanf("%d", &C);
	//Each data set begins with an integer, N, 
	// the number of people in the class (1 <= N <=1000).
	int N = 0;
	float *g; // g for grade
	
	
	for(int i = 0; i < C; i++){
		scanf("%d", &N);
		g = (float*)malloc(sizeof(float) * N);
		
		float sum = 0, o_a = 0, avg = 0; // over_average
		
		for(int j = 0; j < N; j++){
			scanf("%f", g + j);
			if(*(g + i) > 100 || *(g + i) < 0) return 1;
		}
		for(int j = 0; j < N; j++){
			sum = sum + *(g + j);
		}
		
		avg = sum / N;
		
		for(int j = 0; j < N; j++){
			if(*(g + j) > avg) o_a++; // number of students whose grade is above average
		}
		printf("%.3f%%\n", o_a / N * 100); // rounded to 3 decimal places
		
		free(g); // remember to free space
		
	}
	
	return 0;	
}
