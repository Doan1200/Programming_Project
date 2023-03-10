 #include<stdio.h>

 int main()
 {
    char chon;
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter your choice: ");
    scanf("%s", &chon);
    if(chon == '+')
        printf("A + B = %d",  a+b);
    else if(chon == '-')
        printf("A - B = %d",  a-b);
    else if(chon == '*')
        printf("A * B = %d",  a*b);
    else if(chon == '/')
        printf("A / B = %.2f",  (float)a/b);

 }