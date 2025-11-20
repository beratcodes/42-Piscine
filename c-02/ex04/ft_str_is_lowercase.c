#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);    
    }
    return (1);
}

int main(void)
{
    int number;

    number = ft_str_is_lowercase("");

    if(number == 1)
        write(1, "1", 1);
    else 
        write(1, "0", 1);
        
    return (0);
}