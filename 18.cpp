#include<stdio.h>

int main()
{
    int n, luong, luong1, tong;
    printf("Nhap vao so gio cong: ");
    scanf("%d", &n);
    luong = n*25000;
    if(n>40)
    {
        n = n-40;
        luong1 = n*1.5*25000+1000000;
        printf("%d ", luong1);
    }
    else
        printf("Luong = %d", luong);
}