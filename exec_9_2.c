
#include <stdio.h>

typedef struct {
    int min, max;}pair;
    pair p;



int getmm(int v[], int n){
    for(int i = 0; i <= n; i++)
    {
        if(v[i] < p.min)             p.min = v[i];
        //if(v[i] > p.max)             p.max = v[i];
    } 
    return 1;   
} 

int main(void){

    int x[9] = {5, 7, 2, 8, -3, 1, 9, 6, 4};
    pair p =  getmm(x,9);

    printf("minimum item: %+d\n", p.min);
    printf("maximum item: %+d\n", p.max);

    return 0;
}
