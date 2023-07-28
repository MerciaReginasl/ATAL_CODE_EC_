/******************************************************************************

Instituto Federal da Paraíba - Campus Campina Grande
Período: 2023.1
ATAL
Prof.: Emanuel Dantas Filho
Aluna: Mércia Regina da Silva

Atividade 1 

LETRA - A

*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int ano_atual, ano_nascimento, idade_atual;
char nome[30];


   printf("Digite o ano de nascimento:\n");
   //Recebe o ano de nascimento
   scanf("%d" ,&ano_nascimento);
   
   printf("Digite o ano atual:\n");
   //Recebe o ano atual
   scanf("%d"   ,&ano_atual);
   
    printf("Digite o nome:\n");
   //Recebe o ano de nascimento
    scanf("%s"   ,nome);
   
   //Calcula a idade atual e em 2050
   idade_atual = ano_atual - ano_nascimento;
   
   printf("A idade atual : %d", idade_atual);
   scanf("%d"     , idade_atual);
       
   if (idade_atual >= 18)
   printf(nome, "\n%s. sua entrada foi permitida.\n\n");
   
  
   system("PAUSE");
   
 return 0;
}
    
    
    

    
    
    
    


    
   
   
   
 
