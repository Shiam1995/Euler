// Euler question 1

#include <stdio.h>

int main(void){

    int i;
    double total;

    for ( i = 0; i < 1000; i++){
        if ( i % 5 == 0 || i % 3 == 0){
          printf("%i\n", i);
          total += i;
        }
    }

    printf("Total is %.0lf\n", total);
    return 0;

}
