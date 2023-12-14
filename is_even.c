/*
Write a recursive function called ContaDigitosPares that takes as input a number and returns the number of even digits that make it up.

Ex: 234 has 3 digits, but only 2 are even
*/

#include <stdio.h>

int ChecaPar(int numero, int counter, int pares){
    if(numero < counter){
      return pares;
    }
    else{
      if((numero / counter) % 2 == 0) {
        pares +=1;
      }
      
      return ChecaPar(numero, counter*=10, pares);
    }
}

int main(){
    int numero;
    
    scanf("%i", &numero);
    printf("%d\n", ChecaPar(numero, 1, 0));
    
    return 0;
}
