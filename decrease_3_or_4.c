/*
Write a recursive function called ContaDigitosPares that takes as input a number and returns the number of even digits that make it up.
Ex: 234 has 3 digits, but only 2 are even
*/

#include <stdio.h>

int getsFirst(int num) {
    if (num >= 10) {
        return getsFirst(num / 10);
    }

    return num;
}

int main() {
    int num;

    scanf("%i", &num);

    printf("%i",
           getsFirst(num) % 2 == 0 ? num - 4 : num -3);
}
