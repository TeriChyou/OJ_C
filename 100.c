# include <stdio.h>

int x[4],y[4];
int count[4], result[4];

int main(void){
	for(int i = 0; i < 4; i ++){
		scanf("%d %d", &x[i], &y[i]);
		printf("%d %d ", x[i], y[i]);
		while(x[i] < y[i]){
			int n;
			n = x[i];
			count[i] = 1;
			
			while(n != 1){
				if(n % 2 == 0){
					n = n / 2;
				}
				else{
					n = 3 * n + 1;
				}
				count[i] ++;
			}
			
			x[i] ++;
			
			if(count[i] > result[i]){
				result[i] = count[i];
			}
		}
		printf("%d\n", result[i]);
	}
	
	return 0;
}
