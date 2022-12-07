#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool edge[201][201];
	
bool DFS(int point[], int i, int n, int color){
	int change_color = color ^ 3;
	bool answer = true;
	
	if(point[i]){
		if(point[i] != color) return false;
		if(point[i] == color) return true;
	}
	
	point[i] = color;
	
	for(int j = i + 1; j < n; j++){
		if(edge[i][j]) answer &= DFS(point, j, n, change_color);
	}
	
	return answer;
}

void printEdge(int n){
	printf("\n");
	for(int i = 0; i < n; i++){	
		for(int j = 0; j < n; j++){
			printf("%d ", edge[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


int main(){
	int n, l, n1, n2;
	int point[201];
	
	while(scanf("%d", &n) != EOF && n != 0){
		// The input consists of several test cases.
		// Each test case starts with a line containing the number n
		// An input with n = 0 will mark the end of the input and is not to be processed.
		scanf("%d", &l);
		// after this, l lines will follow
		memset(point, 0, sizeof(point)); // init the point 
		memset(edge, false, sizeof(edge)); // init the path
		// each containing two numbers that specify an edge
		// between the two nodes that they represent.
		for(int i = 0; i < l; i++){
			scanf("%d%d", &n1, &n2);
			edge[n1][n2] = true;
			// the graph is nondirected. That is,
			// if a node a is said to be connected to a node b,
			// then you must assume that b is connected to a.
			edge[n2][n1] = true;
		}
		
		//printEdge(n); // check edges
		
		if(DFS(point, 0, n, 1)) printf("BICOLORALBE.\n");
		else printf("NOT BICOLORABLE.\n");
	}
	
	return 0;
}
