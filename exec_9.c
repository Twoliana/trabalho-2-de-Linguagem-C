#include <stdio.h>

struct pair
{
  int min, max;
} Pair;

/*
int getmm(int v[], Pair){

   for(i=0; i<=9; i++){
    if (Pair.min <= v[i])
      Pair.min = v[i];

    if (Pair.max => v[i])
      Pair.max = v[i];
    }
}

int main (void){

    int v[9] = {5,7,2,8,-3,1,9,6,4};

    Pair p = getmm(v,9);
    printf("minimum item: %+d\n", p.min);
    printf("maximum item: %+d\n", p.max);

    return 0;
}

// Funcionando

int main (void){

    int v[9] = {5, 7, 2, 8, -3, 1, 9, 6, 4};

    int min = 0, max = 0;
    
    for(int i=0; i <= 9; i++){
        if (min >= v[i])
            min = v[i];

        if (max <= v[i])
            max = v[i];
    }
    printf("minimum item: %+d\n", min);
    printf("maximum item: %+d\n", max);

    return 0;
}



*/

int getmm(int x[]){

     int n =0;
    int min, max;
    for (int i = 0; x[i] != '\0';i++){
        if(x[i]< min)puts("chegou");

        if (x[i]> min) max++;
        puts("chegou");
    }
/*
    for(int i=0; i <= 9; i++){
        if (Pair.min >= v[i]){
            Pair.min = v[i];
            return min;
            }

        if (Pair.max <= v[i]){
            Pair.max = v[i];
            }
    }   */
}

int main (void){

    int v[9] = {5, 7, 2, 8, -3, 1, 9, 6, 4};
    int *getmm = (v);
    printf("minimum item: %d\n", *getmm);
    //printf("maximum item: %+d\n", Pair.max);

    return 0;
}


