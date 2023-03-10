#include<stdio.h>
int main()
{
    int n;
    do{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    }while(n<1);
    if(n%2==0)
    {
        printf("CHAN!");
    }
    else
        printf("LE!");    
}