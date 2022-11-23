#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int m, n[20];
	int a[100][100], b[100][100], c[100][100];
	int money[100];
	
	scanf("%d", &m);
	if(m > 20) return 0;
	
	for(int i = 0; i < m; i++){
		scanf("%d", &n[i]);
		money[i] = 0;
		for(int j = 0; j < n[i]; j++){
			scanf("%d %d %d", &a[i][j], &b[i][j], &c[i][j]);
			money[i] = money[i] + a[i][j] * c[i][j];
		}
	}
	
	for(int i = 0; i < m; i++){
		printf("%d\n", money[i]);
	}
		
	return 0;
}
