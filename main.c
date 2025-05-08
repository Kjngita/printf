#include "libftprintf.h"
#include <stdio.h>

int main()
{
	ft_printf("\tReturns: %d\tft_printf\n", ft_printf("%%"));
	printf("\tReturns: %d\tprintf\n\n", printf("%%"));

	ft_printf("\tReturns: %d\tft_printf\n", ft_printf("%c", 'G'));
	printf("\tReturns: %d\tprintf\n\n", printf("%c", 'G'));

	ft_printf("\tReturns: %d\tft_printf\n", ft_printf("%s", "texthas13char"));
	printf("\tReturns: %d\tprintf\n\n", printf("%s", "texthas13char"));
}