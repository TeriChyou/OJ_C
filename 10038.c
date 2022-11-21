#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int len;
	int temp;
	int check;
	
	while(scanf("%d", &len) != EOF){
		int arr[3000] = {0};
		
		for(int i = 0; i < len; i ++){
			scanf("%d", &arr[i]);
		}
		
		int S[3000] = {0};
		
		for(int i = 0; i < len - 1; i ++){
			S[i] = abs(arr[i] - arr[i + 1]);
		}
		
		for(int i = 0; i < len - 1; i ++){
			for(int j = i + 1; j < len - 1; j++){
				if(S[i] > S[j]){
					temp = S[i];
					S[i] = S[j];
					S[j] = temp;
				}
			}
		}
		
		check = 0;
		
		for(int i = 0; i < len - 1; i ++){
			if(S[i] != i + 1){
				check = 1;
				break;
			}
		}
		
		if(check == 1){
			printf("Not jolly\n");
		}
		else{
			printf("Jolly\n");
		}
	}
	
	return 0;
}
