/*
Willy was playing with his nephews when he proposed the following game. Given a number n of maximum 9 digits, it must calculate a function. But he didn't tell his nephew exactly how the function works. Instead, he showed you an example and gave the tips below. See if you can help Uncle Willy's nephew and solve the problem.

Example:
f(6718) = 6 * 2 * 4 + 7 * 3 * 3 + 1 * 3 * 2 + 8 * 2 * 1 = 133

Note that for each digit in the input, if it is even, it must be multiplied by 2. If it is odd, by 3.
In addition, you must also multiply it by the position of the digit, where the unit digit corresponds to the value 1, the ten to the value 2, the hundred to 3, and so on.
*/

#include <stdio.h>

int willyLoop(int number, int value, int curr) {
    int lastDigit = number % 10;

    if (lastDigit % 2 == 0) {
        lastDigit *= 2;
    } else {
        lastDigit *= 3;
    }

    value += lastDigit * curr;

    if (number < 10) {
        return value;
    }

    return willyLoop(number / 10, value, ++curr);
}

void scanLoop() {
    int num;

    scanf("%i", &num);

    if (num == 0) {
        return;
    }

    printf("%i\n", willyLoop(num, 0, 1));
    return scanLoop();
}

int main() {
    scanLoop();
}
