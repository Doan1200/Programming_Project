#include<stdio.h>

char r, b, g, chon;;

int main()
{
    printf("Nhap lua chon cua ban: ");
    scanf("%s", &chon);
    switch(chon)
    {
        case 'r': 
        case 'R':
                printf("RED");
                break;
        case 'b':
        case 'B':
                printf("BLUE");
                break;
        case 'g':
        case 'G':
                printf("GREEN");
                break;
        default: 
                printf("BLACK");
                break;      
    }
}