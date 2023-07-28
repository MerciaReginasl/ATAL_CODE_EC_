/******************************************************************************

Instituto Federal da Paraíba - Campus Campina Grande
Período: 2023.1
ATAL
Prof.: Emanuel Dantas Filho
Aluna: Mércia Regina da Silva

Atividade 1 

LETRA - D

*******************************************************************************/


#include<stdio.h>
#include <locale.h>
 
int main() {
    
 setlocale(LC_ALL, "");
 
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for(i = 2; i <= num / 2; i++) {
    if(num % i == 0) {
       resultado++;
       break;
               
    }
 }
 
    if(resultado == 0)
       printf("%d É um numero primo.", num);
       
    else
       printf("%d Não é um numero primo.", num);
       
       
       
     return 0;

}
