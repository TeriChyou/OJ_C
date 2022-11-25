#include <stdio.h>
#include <stdlib.h>


int main(){
	int w, h;
	int f_n = 0;
	char f[101][101];
	int count[101][101];
	
	while(scanf("%d %d", &h, &w)){
		if(h == 0 || w == 0 || h > 100 || w > 100) break;
		
		f_n++;
		
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				f[i][j] = '0';
				count[i][j] = 0;
			}
		}
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				f[i][j] = getchar();
				if(f[i][j] == '\n') f[i][j] = getchar();
			}
		}
		
		printf("Field #%d:\n", f_n);
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(f[i][j] == '*'){
					if(i == 0 && j == 0){
						count[i][j + 1]++;
						count[i + 1][j]++;
						count[i + 1][j + 1]++;					
					}
					else if(i == 0 && j > 0 && j != w){
						count[i][j + 1]++;
						count[i][j - 1]++;
						count[i + 1][j - 1]++;
						count[i + 1][j]++;
						count[i + 1][j + 1]++;
					}
					else if(i == 0 && j == w){
						count[i][j - 1]++;
						count[i + 1][j]++;
						count[i + 1][j - 1]++;
					}
					else if(i > 0 && j == 0){
						count[i][j + 1]++;
						count[i - 1][j]++;
						count[i - 1][j + 1]++;
						count[i + 1][j]++;
						count[i + 1][j + 1]++;						
					}
					else if(i > 0 && j > 0 && j != w){
						count[i][j - 1]++;
						count[i][j + 1]++;
						count[i - 1][j - 1]++;
						count[i - 1][j]++;
						count[i - 1][j + 1]++;
						count[i + 1][j - 1]++;
						count[i + 1][j]++;
						count[i + 1][j + 1]++;
					}
					else if(i > 0 && j == w){
						count[i][j - 1]++;
						count[i - 1][j]++;
						count[i - 1][j - 1]++;
						count[i + 1][j]++;
						count[i + 1][j - 1]++;
					}
					else if(i == h && j == 0){
						count[i][j + 1]++;
						count[i - 1][j]++;
						count[i - 1][j + 1]++;
					}
					else if(i == h && j > 0 && j != w){
						count[i][j - 1]++;
						count[i][j + 1]++;
						count[i - 1][j - 1]++;
						count[i - 1][j]++;
						count[i - 1][j + 1]++;
					}
					else{
						count[i][j - 1]++;
						count[i - 1][j]++;
						count[i - 1][j - 1]++;	
					}					
				}
			}
		}
		printf("\n");
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				printf("%c", f[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(f[i][j] == '*'){
					printf("*");
				}
				else printf("%d", count[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}

