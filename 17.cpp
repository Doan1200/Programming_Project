#include<stdio.h>

int main()
{
    int ngay, thang, nam, n;
    n = (ngay +2*thang+(float)(3*(thang+1))/5+((float)nam/4))%7;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if(n == 0)
        printf("Chu nhat!");
    else if(n==1)
        printf("Thu hai!");
    else if(n==2)
        printf("Thu 3!");
    else if(n==3)
        printf("Thu 4!");
    else if(n==4)
        printf("Thu 5!");
    else if(n==5)     
        printf("Thu 6!");
    else if(n==6)
        printf("Thu 7!");
}