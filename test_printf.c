#include <stdio.h>
// #include "ft_printf.h"
#include <stdarg.h>

// Fonction qui affiche un entier de type long
void ft_print_digit(long nbr)
{
    printf("Valeur reçue : %u\n", nbr);
}

void print_variadic_ints(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    if (*format == 'd')
        ft_print_digit((long)va_arg(args, int)); // Sans cast explicite
    else if (*format == 'u')
        ft_print_digit(va_arg(args, unsigned int)); // Sans cast explicite

    va_end(args);
}

int main()
{
    int i = -2147483648;       // Valeur limite pour un int (32 bits)
    unsigned int u =4294967295; // Valeur limite pour unsigned int (32 bits)
    printf("-------------------------------------------------------------\n");
    printf("Sans cast :\n");
    print_variadic_ints("d", i); // Mauvaise interprétation possible
    print_variadic_ints("u", u); // Mauvaise interprétation possible
    printf("-------------------------------------------------------------\n");
    //printf("%d %d %d %d %d %d |\n %d %d %0.1f %d",1,'2',3,4,5,6,7,8,12.45,11.66,9,9,6);// 12 - 4
    printf("%d\n",10.2);
    // printf("-------------------------------------------------------------\n");
    //     printf("Size of int: %zu bytes\n", sizeof(int));
    // printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    // printf("Size of long: %zu bytes\n", sizeof(long));
    // printf("Size of long long: %zu bytes\n", sizeof(long long));
    // printf("Size of unsigned long long: %zu bytes\n", sizeof(unsigned long long));
    // printf("-------------------------------------------------------------\n");
    // return 0;
}
