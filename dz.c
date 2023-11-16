#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int max(int x, int y){
  if (x>y) return x;
  else return y;
}

int min(int x, int y){
    if(x>y) return y;
    else return x;
}

int task3_2() { // bez list
    int n;
    scanf("%d", &n);
    int list[n];
    scanf("%d%d%d", &list[0], &list[1],&list[2]);
    for(int i = 3; i < n; ++i){
        list[i] = list[i-1] + list[i-3];
    }
    for(int i = 0; i < n; ++i) {
        printf("%d\n", list[i]);
    }
    return 0;
}

void task3_8() { // +
    int x;
    scanf("%d", &x);
    int k = 0;
    while(x){
        x &= x - 1;
        k++;
        printf("%d\n", x);
    }
    printf("%d\n", k);
}

void task3_5(){
    int x;
    scanf("%d", &x);

}
void task3_4(){ // ++
    int a, k;
    scanf("%d", &a);
    while(a / 10 > 0){
        int k = 0;
        while(a/10 >= 0){
            k = k + a%10;
            if(a/10 == 0) break;
            a = a / 10;
        }
        a = k;
    }
    printf("%d\n", a);
}

void task3_6(){ // ne robit
    double a;
    scanf("%lf", &a);
    while(floor(a) != 0){
        printf("%lf", floor(a));
        a = 1/(a - floor(a));
    }
}

int task5_1(int x){ // bez p
    if(x == 0) return 0;
    return task5_1(x / 10) + x%10;
}

int task5_3(int x){ // ++
    if(x == 0) return 0;
    return max(task5_3(x/10), x%10);
}

int task5_4(int x){ //++
    if(x == 0) return 0;
    printf("%d", x % 10);
    task5_4(x / 10);
}

int task5_5(int p){ // ne robit
    int x;
    scanf("%d", x);
    if(x == -1) return p;
    return task5_5(p+x);
}


int binary_euclid(int x, int y) {
    while (x & 1 == 0 && y & 1 == 0) {
        x >> 1;
        y >> 1;
    }
    while(x && y){
        if (x & 1 == 0) x >> 1;
        if (y & 1 == 0) y >> 1;
        if (x > y) x -= y;
        else y -= x;
}
    return max(x, y);
}

int recursive_euclid(int x, int y){
    if(x*y) return recursive_euclid((int)max(x, y)%(int)min(y,x), (int)min(x, y));
    else return x + y;
}

int base_euclid(int x, int y){
    while(x*y != 0){
        if(x>y) x = x%y;
        else y = y%x;
    }
    return (int)max(x,y);
}

long long power(long long x, int y){
    long long k = 1;
    while(y){
        if(y & 1) k *=x;
        x *= x;
        y = y >> 1;
    }
    return k;
}

int task4_6(int x, int y, int z, int w){
    int c = x * w + y * z, s = y * w;
    c /= base_euclid(y,w);
    s /= base_euclid(y, w);
    printf("%d/%d\n", c, s);
    return 0;
}

int main(){
    printf("%d\n",task5_5(0));
    }
