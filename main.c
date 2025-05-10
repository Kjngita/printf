#include "ft_printf.h"
#include <stdio.h>

int main()
{
	ft_printf("\t%% . Returns: %d\tft_printf\n", ft_printf("%%"));
	printf("\t%% . Returns: %d\tprintf\n\n", printf("%%"));

	ft_printf("\tc . Returns: %d\tft_printf\n", ft_printf("%c", 'G'));
	printf("\tc . Returns: %d\tprintf\n\n", printf("%c", 'G'));

	ft_printf("\ts . Returns: %d\tft_printf\n", ft_printf("%s", NULL));
	printf("\ts . Returns: %d\tprintf\n\n", printf("%s", NULL));

	char loner = 'M';
	char army[] = "Universe";
	int ily = 3000;
	ft_printf("\tMult params. Returns: %d\tft_printf\n", ft_printf("%carvel %s %i", loner, army, ily));
	printf("\tMult params. Returns: %d\tprintf\n\n", printf("%carvel %s %i", loner, army, ily));

	ft_printf("\tu . Returns: %d\tft_printf\n", ft_printf("%u", 4294967295));
	printf("\tu . Returns: %d\tprintf\n\n", printf("%u", 4294967295));
}