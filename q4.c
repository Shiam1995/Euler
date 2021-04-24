// palindrome while

#include <stdio.h>

int main(void){

    int i = 100;
    int j = 999;
    int k = 0;
    int m = 0;
    int reverseM = 0;
    int remainder = 0;
    int largest = 0;
    int iLarge = 0;
    int jLarge = 0;

    for ( i = 100; i<= 1000; i++)
    {
      for (j = 100; j<= 1000; j++)
      {
        k = i * j;
        m = k;

          remainder = 0;
          reverseM = 0;

          while (m !=0)
          {
            remainder = m % 10;
            reverseM = reverseM * 10 + remainder;
            m /= 10;
          }

          if ( k == reverseM)
          {
            printf("%i * %i = %i WHICH IS a palindrome\n", i, j, k);
            if ( k >= largest){
              largest = k;
              iLarge = i;
              jLarge = j;
            }
          }
          else if ( m != reverseM)
          {
            //printf("%i * %i = %i which is a not palindrome\n", i, j, k);
          }
        }
      }

      printf("The largest palindrome is %i * %i = %i", iLarge, jLarge, largest);

    return 0;
}
