/******************************************************************************

ATAL
Exercício 1 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n[3], i;
  int n1=0, n2=0, n3=0;

  for (i=0;i<3;i++)
  {
     printf("digite um numero: ");
     scanf("%d",&n[i]);
  }

  if (n[0]>n[1])
  {
      if (n[1]>n[2])
        {
          n3=n[0];
          n2=n[1];
          n3=n[2];
        }
        else if (n[2]>n[0])
        {
            n3=n[2];
            n2=n[0];
            n1=n[1];
        }
        else
        {
            n3=n[0];
            n2=n[2];
            n1=n[1];
        }
  }else if(n[1]>n[2])
    {
      if (n[2]>n[0])
        {
          n3=n[1];
          n2=n[2];
          n1=n[0];
        }
        else
        {
            n3=n[1];
            n2=n[0];
            n1=n[2];
        }
    }
    else
    {
        n3=n[2];
        n2=n[1];
        n1=n[0];
    }

 printf("Ordem Crescente: %d %d %d\n", n1, n2, n3);
 printf("Ordem Decrescente: %d %d %d ", n3, n2, n1);

    system("pause");
    
    return 0;
}
