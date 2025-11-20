int ft_atoi(char *str)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;

    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
    || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - '0') + (result * 10);
        i++;
    }

    return (result * sign);
}

#include <stdio.h>

int main(void)
{
    printf("%d", ft_atoi(" ---1234ASFSCVXCV123"));

    return (0);
}