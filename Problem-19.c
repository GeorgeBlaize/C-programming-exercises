
//C Program to Generate Multiplication Table

#include<stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");

    scanf("%d",&num);

    for(int i=1; i<=10; i++)
    {
        printf("%d * %i = %d\n",num,i,num*i);
    }

    return 0;
}
