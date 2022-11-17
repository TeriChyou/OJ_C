#include <stdio.h>
/*
int main(){
	int n;
	int a, b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		if(a > b){
			printf(">\n");
		}
		else if(a < b){
			printf("<\n");
		}
		else{
			printf("=\n");
		}
	}
	
	return 0;
}
*/

int main(){
	int n;
	int a[15], b[15];
	
	scanf("%d", &n);
	
	if(n > 15){
		return 0;
	}
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i] > b[i]){
			printf(">\n");
		}
		else if(a[i] < b[i]){
			printf("<\n");
		}
		else{
			printf("=\n");
		}		
	}
	
	return 0;
}
