#include<stdio.h>
int a, b;
char chon;
int main()
{
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Lua chon phep tinh: ");
    scanf("%s", &chon);
    switch (chon)
    {
        case '+': 
            printf("a + b = %d", a+b);
            break;
        case '-':
            printf("a - b = %d", a-b);
            break;
        case '*':
            printf("a * b = %d", a*b);
            break;
        case '/':
            printf("a / b = %.2f", (float)a/b);
    }
}