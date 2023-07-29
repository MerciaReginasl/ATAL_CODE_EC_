#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[10], T, i, j, k;
    char romano[100];
    printf("\nDigite um number romano: ");
    scanf("%s", &romano);
    
    T = strlen(romano);
    for(i=0; i<T; i++)
    {
             if(romano[1]=='I')
             a[i]=1;
             else if(romano [i] == 'V')
             a[i]=5;
             else if(romano [i] == 'X')
             a[i]=10;
             else if(romano [i] == 'L')
             a[i]=50;
             else if(romano [i] == 'C')
             a[i]=100;
            
    {
            printf("\nValor Invalido");
            exit(0);
            }
            }
            k = a[T-1];
            for(i = T-1; i>0; i--)
            {
                  if(a[i] > a [i - 1])
                  k = k-a [i-1];
                  else if (a[i] == a [i-1] || a[i] < a [i-1])
                  k = k - a[i-1];
                  }
                  printf("\nO decimal equivalente: ");
                  printf("%d\n", k);
                  
                  return 0;
                  
}
