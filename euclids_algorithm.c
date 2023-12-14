/*
Euclid's algorithm is very old, it was created as a way to calculate the GCD of two numbers, this algorithm is more efficient than doing the GCD by factorization, we know that the integer division is done as follows:
A=D*Q + R
Where A is the number to be divided, d is the dividend, Q is the quotient of the integer division of a by d and R is the mod or remainder of the integer division.

Let's say we want to calculate the gcd(36,24).
36=24*1+12
Note that 12 is a divisor of 36 and 24, therefore the gcd(36,24)=gdc(24,12)
24=12*2 + 0

Since the remainder is 0 we know that 12 divides 24
gcd(36,24)=gcd(24,12)=12

In general, what Euclid's algorithm does is:

- Choose the two numbers to get gcd(A,D)
- Divide A by D, if the remainder is not zero, divide D by the remainder until you find the remainder 0
- When you find a division with a remainder of 0, the "D" of that division will be the GCD of the original A and D.
*/

#include <stdio.h>

int calculaMDC(int numero1, int numero2){
    int menor = numero2, maior = numero1;

    if(numero2 > numero1) {
        menor = numero1;
        maior = numero2;
    }

    if(maior % menor == 0) {
        return menor;
    }

    else{
        int R = maior % menor;
        return calculaMDC(menor, R);   
    }
}

int loop(int quant){
    if(quant > 0 ){
        int numero1,numero2, output;
          scanf("%d %d", &numero1, &numero2);
          output = calculaMDC(numero1,numero2);
          printf("MDC(%d,%d) = %d\n",numero1,numero2,output);
          loop(quant -1);
    }
    else return 0;
}

int main(){
  int quant;
  
  scanf("%d", &quant);
  loop(quant);
    
  return 0;
}
