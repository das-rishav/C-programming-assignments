#include<stdio.h>
int main()
{
    int i;
    printf("\t\t AASCII TABLE \n");
    printf("\t Integer value \t ASCII VALUE \n");
    for(i=0;i<=255;i++){
        printf("%d %c\n",i,i);
    }
    return 0;
}