#include <stdio.h>

int main() {

    int contador , turma;

    printf("qual e o tamanho da turma?\n");
    scanf("%d" , &turma);
    int var[turma];

    contador=0;

    while(contador!=turma)
    {
        var[contador]=contador+1;
        printf("var[%d",contador);
            printf("]=%d\n",var[contador]);
        contador++;
        
    }

}
