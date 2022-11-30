#include <stdio.h>

int min(int a, int b){
	return (a > b) ? b : a;
}

int main(){
	int n[1500] = {1};
	int n2 = 0, n3 = 0, n5 = 0;
	
	for(int i = 1; i < 1500; i++){
		for(n2; n2 < i; n2++){
			if(n[n2] * 2 > n[i - 1]) break;
 		}
 		for(n3; n3 < i; n3++){
 			if(n[n3] * 3 > n[i - 1]) break;
		}
		for(n5; n5 < i; n5++){
 			if(n[n5] * 5 > n[i - 1]) break;
		}
		
		// Get 3 numbers of different prime factors.
		// Break means get the first one then go to next.
		
		n[i] = min(n[n2] * 2, n[n3] * 3);
		n[i] = min(n[i], n[n5] * 5);
		
		// Compare the 3 numbers of different prime factors.
	}
	
	printf("The 1500'th ugly number is %d.\n", n[1499]);
	return 0;
}
