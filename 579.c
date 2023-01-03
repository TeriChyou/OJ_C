#include <stdio.h>
#include <math.h>

int main(){
	int H, M;
	float H_A, M_A, A; // A for angle.
	while(scanf("%d:%d", &H, &M) != EOF && (H || M)){ // if H:M = 0:00 then bye bye
		//scan the time and translate them into angle.
		//need to use float to divide or it will be int I guess.
		H_A = H * 30.0 + (M / 60.0) * 30.0;
		M_A = M * 6.0;
		A = fabs(H_A - M_A);
		printf("%.3f\n",(A > 180.0) ? 360.0 - A : A);
	}
	
	return 0;
}
