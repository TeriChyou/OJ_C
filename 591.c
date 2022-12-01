#include <stdio.h>

int main(){
	int p, n[51];
	int sum = 0, mean = 0;
	int move = 0;
	int set = 0;
	
	while(scanf("%d", &p) != EOF){
		if(p == 0) break;
		set ++;
		for(int i = 0; i < p; i++){
			scanf("%d", &n[i]);
		}
		for(int i = 0; i < p; i++){
			sum += n[i];
		}
		mean = sum / p;
		for(int i = 0; i < p; i++){
			if(n[i] < mean){
				move += mean - n[i];
			}
			else if(n[i] > mean){
				move += n[i] - mean; 
			}
		}
		
		printf("Set #%d\nThe minimum number of moves is %d.\n", set, move / 2);
	}

	return 0;
}
