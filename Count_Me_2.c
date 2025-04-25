#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int count_consonant = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            count_consonant++;
        }
    }
    printf("%d\n", count_consonant);
    return 0;
}