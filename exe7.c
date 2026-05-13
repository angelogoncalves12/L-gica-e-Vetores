#include <stdio.h>
int main (){
    int numeros[8];
    int pos; 

    for (pos=1; pos<=8; pos++){
        printf ("Insira os valores [%d]: ", pos);
        scanf ("%d", &numeros[pos]);
    }

for (pos=8; pos>=1; pos--){
       printf ("Número[%d] = %d\n", pos, numeros[pos]);
    }
    return 0;
}