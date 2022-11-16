#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// tools: strcpy, strcmp

#define MAX 25
#define MAX_L 25

int b_r[MAX] = {-1};
int b_p[MAX][MAX];

void move_load(int src, int pos_src){
	int i, j, k;
	for(i = 0; i < MAX; i ++){
		if(b_p[pos_src][i] == src)break;
	}
	for(j = i + 1; j < MAX; j ++){
		if(b_p[pos_src][j] == -1)break;
		for(k = 0; k < MAX; k ++){
			if(b_p[ b_p[pos_src][j] ][k] == -1){
				b_p[ b_p[pos_src][j] ][k] = b_p[pos_src][j];
				b_r[ b_p[pos_src][j] ] = b_p[pos_src][j];
				break;
			}
		}
		b_p[pos_src][j] = -1;
	}
}

void move(int src, int pos_des){
	int i, j, k;
	int pos_src = b_r[src];
	for(i = 0; i < MAX; i ++){
		if(b_p[pos_src][i] == src)break;
	}
	for(j = i; j < MAX; j ++){
		if(b_p[pos_src][j] == -1)break;
		for(k = 0; k < MAX; k ++){
			if(b_p[pos_des][k] == -1){
				b_p[pos_des][k] = b_p[pos_src][j];
				b_r[ b_p[pos_src][j] ] = pos_des;
				break;
			}
		}
		b_p[pos_src][j] = -1;
	}
}

void move_onto(int a, int b){
	int pos_a = b_r[a];
	int pos_b = b_r[b];
	move_load(a, pos_a);
	move_load(b, pos_b);
	move(a, pos_b);
}

void move_over(int a, int b){
	int pos_a = b_r[a];
	int pos_b = b_r[b];
	move_load(a, pos_a);
	move(a, pos_b);
}

void pile_onto(int a, int b){
	int pos_a = b_r[a];
	int pos_b = b_r[b];
	move_load(b, pos_b);
	move(a, pos_b);
}

void pile_over(int a, int b){
	int pos_a = b_r[a];
	int pos_b = b_r[b];
	move(a, pos_b);
}

int main(){
	// declar and initialize
	int n, a, b;
	scanf("%d", &n);
	int i, j;
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			b_p[i][j] = -1;
		}
	}
	for(i = 0; i < n; i ++){ //init pos
		b_r[i] = i;
	}
	for(i = 0; i < n; i ++){
		b_p[i][0] = i;
	}
	
	char ins[MAX_L], act[MAX_L], adv[MAX_L];
	gets(ins);
	
	
	while(gets(ins)){
		if(strcmp(ins, "quit") == 0)break;
		sscanf(ins, "%s %d %s %d", act, &a, adv, &b);
		//error check
		if(a == b || b_r[a] == b_r[b])continue;
		//***
		
		if(strcmp(act, "move") == 0 && strcmp(adv, "onto") == 0){
			move_onto(a, b);
		}
		else if(strcmp(act, "move") == 0 && strcmp(adv, "over") == 0){
			move_over(a, b);
		}
		else if(strcmp(act, "pile") == 0 && strcmp(adv, "onto") == 0){
			pile_onto(a, b);
		}
		else if(strcmp(act, "pile") == 0 && strcmp(adv, "over") == 0){
			pile_onto(a, b);
		}
		else{
			return 1;
		}						
	}
	
	// print
	for(i = 0; i < n; i++){
		printf("%d:", i);
		for(j = 0; j < MAX; j++){
			if(b_p[i][j] == -1){
				printf("\n");
				break;
			}
			printf(" ");
			printf("%d", b_p[i][j]);
		}
	}
	
	//system pause;
	return 0;
}
