#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;
    
    i = 0;

    while (i < (size / 2))
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
}

int main(void)
{
    int size;
    int tab[] = {1,2,3,4,5,6,7,8};
    int i;

    size = 8;
    i = 0;
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
        printf("%d", tab[i]);
        if(i != size - 1)
        {
            write(1, ", ", 2);
        }
        i++;
    }
    
    return (0);

}