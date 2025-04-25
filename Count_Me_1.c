#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count_divided_2 = 0;
    int count_divided_3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count_divided_2++;
        }
        else if (a[i] % 3 == 0)
        {
            count_divided_3++;
        }
        else if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            count_divided_2++;
        }
    }
    printf("%d %d\n", count_divided_2, count_divided_3);
    return 0;
}