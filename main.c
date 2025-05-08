#include "libftprintf.h"
#include <stdio.h>

int main()
{
	ft_printf("\tReturns: %d\tft_printf\n", ft_printf("%s", "texthas13char"));
	printf("\tReturns: %d\tprintf\n", printf("%s", "texthas13char"));
}