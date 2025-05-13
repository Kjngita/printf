#include "ft_printf.h"
#include <stdio.h>

int main()
{
	ft_printf("\t~%%~ Returns: %d\tft_printf\n", ft_printf("%%"));
	printf("\t~%%~ Returns: %d\tprintf\n\n", printf("%%"));

	ft_printf("\t~c~ Returns: %d\tft_printf\n", ft_printf("%c", 'G'));
	printf("\t~c~ Returns: %d\tprintf\n\n", printf("%c", 'G'));

	ft_printf("\t~s~ Returns: %d\tft_printf\n", ft_printf("%s", NULL));
	printf("\t~s~ Returns: %d\tprintf\n\n", printf("%s", NULL));

	char loner = 'M';
	char army[] = "Universe";
	int ily = 3000;
	ft_printf("\tMult params. Returns: %d\tft_printf\n", ft_printf("%carvel %s %i", loner, army, ily));
	printf("\tMult params. Returns: %d\tprintf\n\n", printf("%carvel %s %i", loner, army, ily));

	ft_printf("\t~u~ Returns: %d\tft_printf\n", ft_printf("%u", 4294967295));
	printf("\t~u~ Returns: %d\tprintf\n\n", printf("%u", 4294967295));

	ft_printf("\t~x~ Returns: %d\tft_printf\n", ft_printf("%X", 123123123));
	printf("\t~x~ Returns: %d\tprintf\n\n", printf("%X", 123123123));

	ft_printf("\t~p~ Returns: %d\tft_printf\n", ft_printf("%p", army));
	printf("\t~p~ Returns: %d\tprintf\n\n", printf("%p", army));

	// Eve's test, closes stdout and checks whether error value is returned from write().
    ft_printf("\033[33mstdout closed\033[0m");
    int ret;
    int original_stdout = dup(STDOUT_FILENO);
    fclose(stdout);
    ret = ft_printf("test\n");
    stdout = (FILE *)fdopen(original_stdout, "w");
    printf("\tReturns: %d\n\n", ret);
}