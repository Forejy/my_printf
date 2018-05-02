#include <stdarg.h>
#include "../Libft/libft.h"
#include "Printf.h"
#include "errors.h"

int			count_ap(char const *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == '%' && *(str - 1) != '%')
			count++;
		str++;
	}
	return (count);
}


int			ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	type_fct_t	*type_fct;
	if (!(type_fct = malloc(sizeof(type_fct_t) * 50)))
		exit_with_msg(ERROR_MALFORMED_PIECE);

	nb_arg = count_ap(format); // Compte le nombre d'arguments dans la chaine format
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && test_format(format[i + 1]))
			//A chaque fois que j'ai un +- 0 il faut utiliser la fonction print_fields
		{
		}
		else if (format[i] == '%' && test_fields(format[i + 1]))
	}
	return (1);
}