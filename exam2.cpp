#include <stdio.h>
#include <conio.h>

void main()
{
    int n, a=0;
    printf("moi nhap mot so: ");
    scanf("%d", &n);
    while (n > 0)
    {
        a = 10*(a) + (n%10);
        n = (n - n%10) / 10;
    }
    printf("%d",a);
}
