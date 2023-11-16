#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0
int main(){
	int n = 0;
	bool flag = true;
	scanf("%d", &n);
	int arr[n];
	int m = 1;
	for(int i = 0; i<n; ++i){
		int x;
		scanf("%d", &x);
		arr[i] = x;
		if(i > 0 && flag){
			if(arr[i-1]*x < 0) ++m;
			else flag = false;
		}
	}
	printf("%d\n", m);
}