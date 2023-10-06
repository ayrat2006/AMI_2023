#include <stdio.h>
#include <math.h>
int base_euclid(int x, int y){
    while(x*y != 0){
        if(x>y) x = x%y;
        else y = y%x;
    }
    return (int)fmax(x,y);
}
int nok(int x, int y){
    return x*y/base_euclid(x,y);
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

int task4_1(int x){ //noprintf ---
	for(int i = 0; i < x; ++i){
		for(int j = 0; j < x; ++j){
		    if(i == 0 || i == x - 1) printf("*");
		    else{
		        if(j == 0 || j == x - 1) printf("*");
		        else printf(" ");
		    }
		}
		printf("\n");
    }
}

int task4_2(int x, int y, int d){ // noprintf ---
    for(int i = 0; i < y + 2*d - 2; ++i){
        for(int j = 0; j < x + 2*d - 2; ++j){
            if(i < d || i >= y +d - 2) printf("*");
            else{
                if (j < d || j >= x + d -2) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}

int task4_3(int x){ //noprintf +++
    for(int i = 0; i < 2*x + 1; ++i){
        for(int j = 0; j < 2*x + 1; ++j){
            if (i == 0 || i == 2*x){
                if(j > 1 && j < 2*x-1 ) printf("*");
                else printf(" ");
            }
            else{
                if (i == 1 || i == x*2-1){
                    if(j == 1 || j == 2*x - 1) printf("*");
                    else printf(" ");
                }
                else{
                    if (j == 0 || j == 2*x) printf("*");
                    else printf(" ");
                }
            }
        }
        printf("\n");
    }
}
int task4_4(int x){ // noprintf +++
    int k = 0;
    for(int i = 0; i < 10; i++){
        if(x / (int)power(10, i) != 0) k++;
        else {
            printf("%d\n", k);
            break;
        }
    }
}

int task4_5(int x, int y, int z){ //noprintf +++
    printf("%d\n", nok(nok(x,y), z));
}
void f(int *c, int *s){
    int d = base_euclid(*c, *s);
    *c/=d;
    *s/=d;
}
int task4_6(){ // ++
    int x, y,z, w;
    scanf("%d%d%d%d", &x,&y,&z,&w);
    int c = x * w + y * z, s = y * w;
    f(&c,&s);
    printf("%d/%d\n", c, s);
    return 0;
}

int task4_7(int n, int m){ //noprintf +++
    for(int i = 0; i < n; ++i){
        int y = m, x = i, k = 1;
        while(y){
            if(y & 1) k *=x;
            x *= x;
            y = y >> 1;
        }
        if (k == n) printf("%d\n", i);
    }
    return 0;
}

int main(){
    int x, y, z;
    task4_7(256, 8);
    return 0;
}
