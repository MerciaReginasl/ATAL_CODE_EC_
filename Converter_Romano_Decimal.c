#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int converte_Rom_Num(char n[100]){
    
    int i, c = 0, valor;
    char n2[100];
    
    for(i=0; i<strlen(n); i++){
        
        if(n[i] > n[i+1]){
            
            switch(n[i]){
                case 'I':
                    valor=1;
                    break;
                case 'V':
                    valor=5;
                    break;
                case 'X':
                    valor=10;
                    break;
                case 'L':
                    valor=50;
                    break;
                case 'C':
                    valor=100;
                    break;
                    
                default:
                    printf("Insira o valor:");
                    break;
            }
            
                    c+=valor;
            
        } else if(n[i] < n[i+1]){
            switch(n[i]){
                case 'I':
                    valor=1;
                    break;
                case 'V':
                    valor=5;
                    break;
                case 'X':
                    valor=10;
                    break;
                case 'L':
                    valor=50;
                    break;
                default:
                    printf("Insira o valor:");
                    break;
            }
                    c-=valor;
            
            } else if(n[i] == n[i+1]){
            
                switch(n[i]){
                    case 'I':
                        valor=1;
                        break;
                    case 'V':
                        valor=5;
                        break;
                    case 'X':
                        valor=10;
                        break;
                    case 'L':
                        valor=50;
                        break;
                    default:
                        printf("Insira o valor:");
                        break;
                }
                
                        c+=valor;
        }
    }
    
    return c;
}


int main() {
    char numero[100];

    int romano_para_decimal;
    
    printf("Insira um algarismo romano: ");
    scanf("%s", &numero);
    romano_para_decimal = converte_Rom_Num(numero);
    printf("O valor decimal de %s e %d", numero, romano_para_decimal);
    
    
    return 0;
}
