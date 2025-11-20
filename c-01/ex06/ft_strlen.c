#include <unistd.h>

int   ft_strlen(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
}

int main(void)
{
    int len;
    char c;

    len = ft_strlen("Berat");
    c = len + '0';
    write(1, &c, 1);
    return (0);
}