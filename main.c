#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd('0' + (number % 10), fd);
}

int main()
{
    // Close standard output
    fclose(stdout);

    int a = 42;
    a = printf("%d\n", a);
    ft_putnbr_fd(a, 2);
    write(2, "\n", 1);

    // Call ft_printf if implemented
    // Replace this with your actual ft_printf implementation
    a = ft_printf("%d\n", a);
    ft_putnbr_fd(a, 2);
    write(2, "\n", 1);

    return 0;
}
