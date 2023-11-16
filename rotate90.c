#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int m;
	scanf("%d", &m);
	int a[m][m];
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < m; ++j){
			/*int x;
			scanf("%d", &x);*/
			a[i][j] = i*10 + j;
		}
	}
	// int barrier = 0;
	// //Spinner
	// for(int i = 0; i < m; ++i){
	// 	for(int j = 0; j < m; ++j){
	// 		if(i == 0) swap(&a[i][j], &a[m - j -1][i]);
	// 		else{
	// 			if(i == m-1 && j > 0) swap(&a[i][j], &a[m - j -1][i]);
	// 			else if(j >= barrier) swap(&a[i][j], &a[m - j -1][i]);
	// 		}			
	// 	}
	// 	i <= m/2 ? ++barrier : --barrier;
	// }
	for (int i = 0; i < m; i++) {
		for (int j= i; j < m; j++) {
			swap(&a[i][j], &a[j][i]);
		}
	}
	for(int k = 0; k < m/2; ++k) {
		for(int h = 0; h < m; h++){
			swap(&a[k][h], &a[m-k-1][h]);
		}
	}
	for(int i = 0; i < m; i++) {
	    for(int j = 0; j < m; j++) {
	        printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}

}