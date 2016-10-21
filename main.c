#include <stdio.h>
#include <stdlib.h>

int main()
{

    int L,l;
    int i=0;
    int j=0;

    printf("Entrez la longueur L de votre rectangle \n");
    scanf("%d",&L);
    printf("Entrez la largeur l de votre rectangle \n");
    scanf("%d",&l);

    for(i=0;i<l;i++){
   for(j=0;j<L;j++){
        if((i!=0) && (i!=l-1) && (j!=0) && (j!=L-1)){
            printf("+");
        }else {
        printf("*");
        }

        }
 printf("\n");
    }
   // }

    return 0;
}
