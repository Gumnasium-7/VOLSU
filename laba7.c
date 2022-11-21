#include <stdio.h>
#include <math.h>


float my_sum(int *n, float *x, float *S){
    float rez;
    if (*n == 0){
        *S += -(*x);
        return 0;
     } else if (*n == 1){
        *S += 1
        return 0;
    } else{
        *n -= 1;
        *S += my_sum(n, x, S) * ((-((*x)*(*x))) / ((2*(*n) - 2) * (2*(*n) - 1 )));
        return 0;
    }

}        

int main(){
    int n, xyi;
    float x, S;
    printf("Введите целое число n и вещественное число x:\t"); 
    scanf("%d%f", &n, &x);
    xyi = my_sum(&n, &x, &S);
    printf("Sum = %f\n%d", S, xyi);
}
