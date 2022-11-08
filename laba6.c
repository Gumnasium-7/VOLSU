#include <stdio.h>

/* функция для возведения в степень, 
принимает целочисленные x - основание, n - степень 
возращает целое число */
int my_pow(int x, int n){
  int rez=1, i;
  for(i=0; i < n; i++){
    rez *= x;
  }
  return rez;
}

/* Функция расчета факториала целого числа х
 возвращает целое число <Если х=0, то возращает 1> */
int factorial(int x){
  int i, rez=1;
  if(x != 0){
    for(i=1; i<=x; i++){
      rez *= i;
    }
    return rez;
  }else return 1;
}

// Главная функция
int main () {
    int n=0, count=0;
    float S=0.0, eps, t, x;

    printf("\nInput calculation precision eps="); 
    scanf("%f",&eps);
    printf("\nInput calculation x=");   
    scanf("%f",&x);

    if((x == 0) && (eps > 0) && (eps < 1)) printf("\nX canniot be equal to 0 or calculation accuracy out of limits 0<eps<1\n");
    else{
      //цикл do-while
      do{

        t = (my_pow(-1,n)*my_pow(x, (n+1))) / (factorial(((n+1)*(2+n))));
        count++;
        S += t;
        n++;

      }while(t>eps);

      printf("\nThe sum of sequence S=%f\ncount=%d\n", S, count);
    }
    return 0;
}
