#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        s1[i] = s2[i];
        i++;
    }

    s2[i] = '\0';

    return (s2);
}

#include <stdio.h>

int main(void)
{
    char s1[] = "Berat";
    char s2[] = "Sude";

    printf("%s", ft_strcpy(s1, s2));

    return (0);
}