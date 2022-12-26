#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static char rev(char c){
	switch(c){
		case 'A':
			return 'A';
		case 'E':
			return '3';
		case 'H':
			return 'H';
		case 'I':
			return 'I';
		case 'J':
			return 'L';
		case 'L':
			return 'J';
		case 'M':
			return 'M';
		case 'O':
			return 'O';
		case 'S':
			return '2';
		case 'T':
			return 'T';
		case 'U':
			return 'U';
		case 'V':
			return 'V';
		case 'W':
			return 'W';
		case 'X':
			return 'X';
		case 'Y':
			return 'Y';
		case 'Z':
			return '5';
		case '1':
			return '1';
		case '2':
			return 'S';
		case '3':
			return 'E';
		case '5':
			return 'Z';
		case '8':
			return '8';
			
		default:
			return c;
		
	}
}

int result(int len, char line, char temp){
    
    int check;
    
    if(line != temp){
        if(line != rev(temp)){
            check = 1;
        }
        else{
            check = 2;
        }
    }
    else{
        if(line != rev(temp)){
            check = 3;
        }
        else{
            check = 4;
        }
    }
    
    return check;
}

int main(){
	
	char line[256];
	while(scanf("%s", line)){
		int len = 0;
		for(int i = 0; line[i] != '\0'; i++){
			len++;
		}
		
		bool c1 = false, c2 = false , c3 = false , c4 = false;
		
		if(len % 2 == 0){ // for even len
			int temp = len - 1;
			for(int i = 0; i < len / 2; i++){
				if(result(len, line[i], line[temp]) == 1){
					c1 = true;
				}
				else if(result(len, line[i], line[temp]) == 2){
					c2 = true;
				}
				else if(result(len, line[i], line[temp]) == 3){
					c3 = true;
				}
				else{
					c4 = true;
				}
				temp--;
			}
		}
		else{ // for odd len
			int temp = len - 1;
			for(int i = 0; i < (len - 1) / 2; i++){
				if(result(len, line[i], line[temp]) == 1){
					c1 = true;
				}
				else if(result(len, line[i], line[temp]) == 2){
					c2 = true;
				}
				else if(result(len, line[i], line[temp]) == 3){
					c3 = true;
				}
				else{
					c4 = true;
				}
				temp--;
			}
		}
		if(c1){
			for(int i = 0; i < len; i++){
				printf("%c", line[i]);
			}
			printf(" -- is not a palindrome.\n");
		}
		else if(c2){
			for(int i = 0; i < len; i++){
				printf("%c", line[i]);
			}
			printf(" -- is a mirrored string.\n");
		}
		else if(c3){
			for(int i = 0; i < len; i++){
				printf("%c", line[i]);
			}
			printf(" -- is a regular palindrome.\n");
		}
		else{
			for(int i = 0; i < len; i++){
				printf("%c", line[i]);
			}
			printf(" -- is a mirrored palindrome.\n");
		}
		
		
		fflush(stdin);
	}
	
	return 0;
}
