#include <unistd.h>

char *ft_lowcase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char word[] = "BERAT";
    char *result;

    result = ft_lowcase(word);

    write(1, result, 5);

    return (0);
}