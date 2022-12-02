#include <stdio.h>
#include <math.h>

int main(){
	float n, p;
	float result;
	
	while(scanf("%f", &n) != EOF){
		if(n > 200) break;
		scanf("%f", &p);
		
		result = pow(p, 1.0 / n);
		
		printf("%.0f\n", result);
	}
	
	return 0;
}
