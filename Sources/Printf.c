#include <stdarg.h>
#include "../Libft/libft.h"
#include "Printf.h"
#include "errors.h"
/*
int			count_ap(char const *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == '%')
			count++;
		str++;
	}
	return (count);
}

t_arg		**type_ap(char const *str, int nb_arg)
{

	t_arg	**rang_et_type;

	if (!(rang_et_type = malloc(sizeof(rang_et_type*)) * (nb_arg + 1)))
		exit_with_msg(ERROR_MALLOC_FAILED);

	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's')
			{

			}
		}
		str++;
	}

}

int			ft_printf(const char *format, ...)
{
	va_list		ap;
	t_arg		**rang_et_type;
	int			rang;
	int			nb_arg;

	nb_arg = count_ap(format); // Compte le nombre d'arguments dans la chaine format
	va_start(ap, rang);
	rang_et_type = type_ap(format, nb_arg);
	while (rang < nb_arg)
	{
		if (rang_et_type[rang]->type == "int")
		{
			ft_putnbr(va_arg(ap, int));
		}
		if (rang_et_type[rang]->type == "char")
		{
			ft_putchar(va_arg(ap, char);
		}
		if (rang_et_type[rang]->type == "char*")
		{
			ft_putstr(va_arg(ap, char *))
		}
	}
	return (1);
}*/