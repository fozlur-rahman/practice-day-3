#include <stdio.h>
int main()
{
    int n, mt;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        mt = n * i;
        printf("%d * %d = %d\n", n, i, mt);
    }

    return 0;
}