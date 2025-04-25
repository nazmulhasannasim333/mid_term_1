#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", s);
        int capital_alphabet = 0;
        int small_alphabet = 0;
        int digit = 0;
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                capital_alphabet++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                small_alphabet++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital_alphabet, small_alphabet, digit);
    }
    return 0;
}