#include <stdio.h>
int main (){
    int a[5];
    int b[5];
    int c[5];
    int pos; 

    for (pos=1; pos <=5; pos++){
    printf ("Digite o valor 'a': ");
    scanf ("%d", &a[pos]);

    printf ("Digite o valor 'b': ");
    scanf ("%d", &b[pos]);  
    c[pos] = a[pos] + b[pos];
    }
    
    printf ("Vetor C: \n");

    for (pos=1; pos <=5; pos++){
     printf ("c [%d] = %d\n", pos, c[pos]);
    }
    return 0;
}