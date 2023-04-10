#include <stdio.h>
int main()
{
    int n;
    int a, max = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}