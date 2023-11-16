#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0
int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int b[m][n], a[m*n], k;
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			int x;
			scanf("%d", &x);
			b[i][j] = x;
			a[i*n+j] = x;
		}
	}
	scanf("%d",&k);
	if(k == 1){
		int x, y;
		scanf("%d%d", &y, &x);
		printf("%d\n", a[(y-1)*n + (x-1)]);
	}
	
	/*for(int i = 0; i < m; i++) {
	    for(int j = 0; j < n; j++) {
	        printf("%d ", b[i][j]);
	    }
	    printf("\n");
	} */
}