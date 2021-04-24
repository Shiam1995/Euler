// pythagoras triplet

// i need 2 numbers and b which when squared = c squares
// and the numbers need to add up to 1000 before being squared
// then i need to find the product


#include <stdio.h>
#include <math.h>

int main(void){


  double a = 0;
  double b = 0;
  double c = 0;


 for ( a = 1; a <= 1000; a++)
 {
   for( b = 2; b<= 1000; b++)
   {
      c = 0;
      c = ((a*a)+(b*b));
      c = sqrt(c);
      if(a + b + c == 1000)
      {
      printf(" sqrt((%.0lf^2) * (%.0lf^2) = (%lf) %lf)\n",a, b, a*a +b*b,c);
      printf(" a * b * c = %0.lf", a* b * c);
      }
    }
  }
  printf("\n");
 return 0;
}
