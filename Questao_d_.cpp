/******************************************************************************

Instituto Federal da Para�ba - Campus Campina Grande
Per�odo: 2023.1
ATAL
Prof.: Emanuel Dantas Filho
Aluna: M�rcia Regina da Silva

Atividade 1 

LETRA - D

*******************************************************************************/


#include<stdio.h>
#include <locale.h>
 
int main() {
    
 setlocale(LC_ALL, "");
 
 int num, i, resultado = 0;
 
 printf("Digite um n�mero: ");
 scanf("%d", &num);
 
 for(i = 2; i <= num / 2; i++) {
    if(num % i == 0) {
       resultado++;
       break;
               
    }
 }
 
    if(resultado == 0)
       printf("%d � um numero primo.", num);
       
    else
       printf("%d N�o � um numero primo.", num);
       
       
       
     return 0;

}
