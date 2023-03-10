#include<stdio.h>

int main()
{
    char chon;
    printf("Nhap lua chon cua ban: ");
    scanf("%s", &chon);
    if(chon == 'R' || chon == 'r')
        printf("RED!");
    else if(chon == 'G' || chon == 'g')
        printf("GREEN!");
    else if(chon == 'B' || chon == 'b')
        printf("BLUE!");
    else 
        printf("BLACK!");
}