#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Romano_para_Decimal(char romano) {
    switch (romano) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        
        default: return 0;
    }
}

int main() {
    char romano_Number[100];
    printf("Digite um número romano: ");
    scanf("%s", romano_Number);

    int decimal_Number = 0;
    int i;

    for (i = 0; romano_Number[i] != '\0'; i++) {
        int Atual_Number = Romano_para_Decimal(romano_Number[i]);
        int Proximo_Digito = Romano_para_Decimal(romano_Number[i + 1]);

        if (Proximo_Digito > Atual_Number) {
            decimal_Number += Proximo_Digito - Atual_Number;
            i++; // Avança para o próximo caractere do número romano
        } else {
            decimal_Number += Atual_Number;
        }
    }

    printf("O número decimal equivalente é: %d\n", decimal_Number);

    return 0;
}
