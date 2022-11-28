#include <stdio.h>

int main(){
	int l[50] = {0};
	int t, s = 0, len;
	int temp;
	
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d", &len);
		s = 0;
		for(int j = 0; j < len; j++){
			scanf("%d", &l[j]);
		}
		for(int j = 0; j < len - 1; j++){
			for(int k = 0; k < len - 1 - j; k++){
				if(l[k] > l[k + 1]){
					temp = l[k];
					l[k] = l[k + 1];
					l[k + 1] = temp;
					s++;
				}			
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", s);
	}
	
	return 0;
}
