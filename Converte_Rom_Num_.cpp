#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int romanToDecimal(char roman) {
    switch (roman) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char romanNumber[10];
    printf("Digite um número romano: ");
    scanf("%s", romanNumber);

    int decimalNumber = 0;
    int i;

    for (i = 0; romanNumber[i] != '\0'; i++) {
        int currentDigit = romanToDecimal(romanNumber[i]);
        int nextDigit = romanToDecimal(romanNumber[i + 1]);

        if (nextDigit > currentDigit) {
            decimalNumber += nextDigit - currentDigit;
            i++; // Avança para o próximo caractere do número romano
        } else {
            decimalNumber += currentDigit;
        }
    }

    printf("O número decimal equivalente é: %d\n", decimalNumber);

    return 0;
}
