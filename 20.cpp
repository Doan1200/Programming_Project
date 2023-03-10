#include <stdio.h>
#include <conio.h>
int main(void)
{
char *cthang[12]= {"January", "February", "March", "April",
 "May", "June", "July", "August", "September",
 "October", "November", "December"};
int ithang;
printf("Nhap vao thang (1-12): ");
scanf("%d", &ithang);
printf("%s.\n", cthang[ithang-1]);
getch();
}