#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
            i++;
        else 
            return (0);    
    }
    return (1);
}

int main(void)
{
    int number;

    number = ft_str_is_numeric("123a");

    if(number == 1)
        write(1, "1", 1);
    else 
        write(1, "0", 1);    

    return (0);
}