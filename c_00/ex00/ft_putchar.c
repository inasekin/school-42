//
// Created by Иван Насекин on 11.05.2022.
//

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}