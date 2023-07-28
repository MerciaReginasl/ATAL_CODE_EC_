//Exemplo:
//Escreva um programa que conversa números romanos em números decimais. Lembre-se:
// I => 1
// V => 5
// X => 10
// L => 50
// C => 100

//Atividade_1_ATAL_EC_2023.2

#include <stdio.h>

int potencia(int base, int expoente)
{
    if(expoente == 0){
        return 1;
    }
    return base * potencia(base, expoente-1);
}

int valorSimbolo(int x){
    int a;
    int b;
    a = x/2;
    b = (x%2 != 0 ? a + 1 : a);
    return potencia(2,a) * potencia(5,b);
    
}

int main(int argc, char *argv[])
{
  if (argc == 1){
	  printf("Digite o número romano para a conversão:\n");
	  return -1;
	  
  char NumeroRomano[4];
  NumeroRomano[0] = 'I'; 
  NumeroRomano[1] = 'V'; 
  NumeroRomano[2] = 'X';
  NumeroRomano[3] = 'L';
  NumeroRomano[4] = 'C';
 
  for (int i = 0; i < 5; i++)
  {
    if (*argv[1] == NumeroRomano[i])
    {
       printf("O símbolo %s é igual a %d\n",argv[1],valorSimbolo(i));
       return 0;
    }
  }
    printf("O símbolo que você digitou é inválido\n");
  }
  
  }
