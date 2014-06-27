#include <stdio.h>
#include <stdlib.h>

int factorial(int num) {
  int product=0;

  if ((num)==0) {
    return product=1;
  }
  else {
    product =factorial(num-1);
  }
  product *=num;
//  printf("%d ", num);
  return product;
}

int getPrime(int num)
{
  int next=0, check =2;  
    
  if (num==1) {
    return next=2;
  }
  else {
    next=getPrime(num-1);
  }
  
  next++;
  while (check <next) {
      if (next%check==0) {
        // not a prime, find next 1
        next++;
        check=2;
      }
      else {
        check++;
      }
  }    
  return next;
}

int main (void) {
  char istring[]="Please enter a number (0 to quit): ";
  int input, fact=0, prime=0;

  while(input>0)  {
    printf("%s\n", istring);
    scanf ("%d", &input);

    if (input==0) {
      break;
    }

    fact=factorial(input);
    printf("\n%d! is %d\n", input, fact);
    prime=getPrime(input);
    printf("\nPrime number %d is %d\n", input, prime);
  }
  system("PAUSE");
  return 0;
}
