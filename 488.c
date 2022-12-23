#include <stdio.h>

int main(){
	int w, h_c, n; // waves, height, numbers
	
	scanf("%d", &w);
	
	for(int CASE = 0; CASE < w; CASE++){
		scanf("\n%d", &h_c);
		scanf("%d", &n);
		
		for(int i = 0; i < n; i++){
			if(i == n - 1){ // if last wave
				int h = 1;
				while(h <= h_c){
					for(int k = 0; k < h; k++){
						printf("%d", h);
					}
					printf("\n");
					h++;
				}
				h--; // same height
				while(h--){
					for(int k = 0; k < h; k++){
						printf("%d",h);
					}
					printf("\n");
				}
			}
			else{
				int h = 1;
				while(h <= h_c){
					for(int k = 0; k < h; k++){
						printf("%d", h);
					}
					printf("\n");
					h++;
				}
				h--; // same height
				while(h--){
					for(int k = 0; k < h; k++){
						printf("%d",h);
					}
					printf("\n");
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}
