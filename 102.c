#include <stdio.h>

int main(){
	int b[3], c[3], g[3];
	int min, result[6];
	int res_num;
	min = 0;
	for(int i = 0; i < 3; i ++){
		scanf("%d %d %d", &b[i], &g[i], &c[i]);
	}
	result[0] = b[1] + b[2] + c[0] + c[2] + g[0] + g[1];
	result[1] = b[1] + b[2] + c[0] + c[1] + g[0] + g[2];
	result[2] = b[0] + b[2] + c[1] + c[2] + g[0] + g[1];
	result[3] = b[0] + b[2] + c[0] + c[1] + g[1] + g[2];
	result[4] = b[0] + b[1] + c[1] + c[2] + g[0] + g[2];
	result[5] = b[0] + b[1] + c[0] + c[2] + g[1] + g[2];
	
	for(int i = 0; i < 6; i ++){
		printf("result[%d]: %d\n", i, result[i]);
	}
	
	min = result[0];
	res_num = 0;
	for(int i = 0; i < 6; i ++){
		if(min > result[i]){
			min = result[i];
			res_num = i;
		}
	}
	if(res_num == 0){
		printf("BCG %d", min);
	}
	else if(res_num == 1){
		printf("BGC %d", min);
	}
	else if(res_num == 2){
		printf("CBG %d", min);
	}
	else if(res_num == 3){
		printf("GBC %d", min);
	}
	else if(res_num == 4){
		printf("CGB %d", min);
	}
	else if(res_num == 5){
		printf("GCB %d", min);
	}
	else return 1;
	
	return 0;
}
