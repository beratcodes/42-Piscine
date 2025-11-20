#include <unistd.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;        
    }
    return (str);
}

int main(void)
{
    char word[] = "berat";
    char *result;

    result = ft_strupcase(word);

    write(1, result, 5);

    return (0);
}