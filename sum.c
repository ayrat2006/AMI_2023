#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a[9][9], bar = 4, sumx = 0, sumo = 0;
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            int x;
            scanf("%d", &x);
            a[i][j] = x;
        }
    }
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            if(bar <= j && j <= 8 - bar) {
                sumo += a[i][j];
            }
            if(4 - bar <= j && j <= 4 + bar) {
                sumx += a[i][j];
            }
            }
        if(i < 4)--bar;
        else ++bar;
        }
    printf("%d , %d\n", sumo, sumx);
}