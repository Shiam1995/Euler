// question 6 euler sum of squares


#include <stdio.h>

int main(void){

  double sumTotal = 0;
  double squareTotal = 0;
  int i = 0;
  int j = 0;

  for ( i = 1; i <= 100; i++){
      sumTotal +=i;
  }
  printf(" sum total %0.lf\n", sumTotal);
  sumTotal = sumTotal*sumTotal;
  printf("sum total squared %0.lf\n", sumTotal);


  for (j = 1; j <= 100; j++) {
      squareTotal += j*j;
  }

  printf(" sum total %0.lf\n", squareTotal);
  //squareTotal = squareTotal * squareTotal;
  //printf(" sum total %0.lf\n", squareTotal);

  printf("%.0lf\n", sumTotal -squareTotal);

}
