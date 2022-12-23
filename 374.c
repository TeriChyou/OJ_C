#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h> not suitable for such large number.

long long R(long long B, long long P, long long M){
	long long result = 1;
	
	if(P == 0) return 1;
	else if(P == 1) return B%M;
	else{
		result = result * R(B, P / 2, M);
		if(P % 2) return result * result * B % M;
		else return result * result % M;
	}
}

int main(){
	
	long long B, P, M;
	while(scanf("%lld%lld%lld", &B, &P, &M) != EOF){
		printf("%lld\n", R(B, P, M));	
	}
	
	
	return 0;
}
