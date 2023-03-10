#include<stdio.h>

int main()
{
    int n;
    printf("Nhap vao thang: ");
    scanf("%d", &n);

    if(n<8 && n!=2|| n == 8 || n == 10 || n == 12)
    {
        n%2!=0;
        printf("Thang co 31 ngay!");
    }
    else if(n == 4 || n == 6||n== 9||n == 11)
    {
        printf("Thang co 30 ngay!");
    }
    else
    {
        int nam;
        printf("Nhap vao nam: ");
        scanf("%d",&nam);
        if(nam%400 == 0 || nam%100!=0 && nam%4 == 0)
            printf("Thang co 29 ngay!");
        else
            printf("Thang co 28 ngay!");
    }
}