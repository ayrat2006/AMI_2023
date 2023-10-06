#include <stdio.h>
#include <math.h>
#include <string.h>

int task5_1(int x){ // printf
    if(x == 0) return 0;
    return task5_1(x / 10) + x%10;
}

int task5_2(int x, int n){
    int k = 1;
    if(n == 0) return 1;
    if(n&1)k*=x;
    x*=x;
    n = n >>1;
    return k * task5_2(x,n);
}

int task5_3(int x){ // printf
    if(x == 0) return 0;
    return max(task5_3(x/10), x%10);
}

int task5_4(int x){ //++
    if(x == 0) return 0;
    printf("%d", x % 10);
    task5_4(x / 10);
}

int task5_5(){ // ne robit
    int x;
    scanf("%d", &x);
    if(x == -1) return 0;
    return task5_5() + x;
}

char* task5_6(int n, int k){
    if (k > sqrt(n)) return "YES";
    if (n % k == 0) return "NO";
    return task5_6(n, k+1);
}

int task5_7(int n, int s){
    if(n == 0) return s==0;
    return task5_7(n / 10, s - n%10);
}

double task5_8(int n){
    int a;
    scanf("%d", &a);
    if(n == 1) return a;
    return a + 1/task5_8(n-1);
}

int main(){
	printf("hello  world")
}