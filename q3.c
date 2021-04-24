//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

// 600851475143

long long getMaxPrimeFactor ( long long n)
{
      int i, max = -1;


      while(n % 2 == 0)
      {
      max = 2;
      n = n/2;
      }

      for(i = 3; i <= sqrt(n); i += 2)
      {
          while(n % i == 0)
          {
          max = i;
          n /= i;
          }
      }

      if (n > 2)
      {
      max = n;
      }

      return max;
}

int main (void)
{

  long long n = 600851475143;
  //long long n = 5000;
  printf("%lld\n", getMaxPrimeFactor(n));



  return 0;
}
