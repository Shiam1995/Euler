// q2 Fibonacci to 4 million

#include <stdio.h>

int main(void){


    int i;
    int j;
    int  fibOne = 0;
    int fibTwo = 1;
    int fib = 0;
    int total;
    int even;

    while ( total < 4000000){
      fib = fibOne + fibTwo;
      fibOne = fibTwo;
      fibTwo = fib;
      if(fib % 2 == 0){
        total += fib;
      }
    }

    //for ( i = 1; i < 100; i ++){
    //    printf("[%i] fib = %.0lf\n", i, fib);
    //    fib = fibOne + fibTwo;
    //    fibOne = fibTwo;
    //    fibTwo = fib;

    //}

    printf("total is %i\n", total);

    return 0;
}
