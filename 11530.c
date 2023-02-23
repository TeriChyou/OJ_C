#include <stdio.h>
#include <stdlib.h>

static int judge(char c){
    switch(c){
        case'a':
        case'd':
        case'g':
        case'j':
        case'm':
        case'p':
        case't':
        case'w':
        case' ':
            return 1;
            
        case'b':
        case'e':
        case'h':
        case'k':
        case'n':
        case'q':
        case'u':
        case'x':
            return 2;
            
        case'c':
        case'f':
        case'i':
        case'l':
        case'o':
        case'r':
        case'v':
        case'y':
            return 3;
            
        case's':
        case'z':
            return 4;
            
        default:
            return 0;
    }
}

int main(){
    int result = 0;
    int n;
    char c;
    
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        while(scanf("%c", &c) != EOF){
            if(c == '\n') break;
            result = result + judge(c);
        }
        
        if(i != 0) printf("Case #%d: %d\n", i, result);
        result = 0;
    }

    
    return 0;
}
