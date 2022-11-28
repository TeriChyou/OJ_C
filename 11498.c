#include <stdio.h>

int main(){
	int k, n, m, x, y;
	scanf("%d", &k);
	if(k == 0 || k > 1000) return 0;
	scanf("%d %d", &n, &m);
	if(n > 10000 || m > 10000 || n < -10000 || m < -10000) return 0;
	for(int i = 0; i < k; i++){
		scanf("%d %d", &x, &y);
		if(x > 10000 || y > 10000 || x < -10000 || y < -10000) return 0;
		if(x == n || y == m) printf("divisia\n");
		else if(x > n && y > m) printf("NE\n");
		else if(x > n && y < m) printf("SE\n");
		else if(x < n && y > m) printf("NO\n");
		else printf("SO\n");
	}
	
	
	return 0;
}
