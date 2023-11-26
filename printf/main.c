#include "ft_printf.h"

int     main(void)
{
        char    initial = -128;
        char    *surname = "Harazka";
        int     age = 23;
	void	*ptr;

	ptr = &age;
	ft_printf("hello %c %s aged %i, %%, %d\n", initial, surname, age, 100);
	printf("%p\n", ptr);
	ft_printf("%p\n", ptr);
}
