#include <stdio.h>
int main (){
    int numeros[10];
    int pos; 

    for (pos=1; pos<=10; pos++){
        printf ("Insira os valores [%d]: ", pos);
        scanf ("%d", &numeros[pos]);

        if (numeros[pos] < 0){
            numeros[pos] = 0;
            printf ("Esse número será zero!\n");
        }
    }

    for (pos=1; pos<=10; pos++){
       printf ("Número[%d] = %d\n", pos, numeros[pos]);
    }
    
    return 0;
}