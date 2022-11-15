#include <stdio.h>
#include <math.h>

void my_pow(float *x, int *n, int *rez){
  int i;
  for(i=0; i < *n; i++){
    *rez *= *x;
  }
}

int factorial(int *x, int *rez){
  int i;
  if(x != 0){
    for(i=1; i<= *x; i++){
      *rez *= i;
    }
  }else *rez = 1;
}


void sum_t(float x, int n){
    float S=1.0, t;
    for(int i=1; i <=10; i++){
        t = my_pow(&(-1), &n) * ((my_pow(x, (2*i - 1))) / (factorial(2*i - 1)));
        S += t;
    }
    printf("%f", S);
}


int main(){
    sum_t(2.0, 2);
}
