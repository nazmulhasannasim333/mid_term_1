#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int totalFarmers = m1 + m2;
        int newDays = d * m1 / totalFarmers;
        int fewerDays = d - newDays;
        printf("%d\n", fewerDays);
    }

    return 0;
}
