//Questão_C


#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pesosaco, pesodiario,resto;
    
    printf("Informe o peso do saco de racao em Kg:\n");
    scanf("%f",&pesosaco);
    
    printf("Informe a quantidade diaria consumida em gramas:\n");
    scanf("%f",&pesodiario);
   
    resto=pesosaco-((pesodiario*2*5)/1000);
    
    printf("Quantidade restante de racao e: %.2fKg\n",resto);
    system("pause");   
   
    return 0;
}
