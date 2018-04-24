#include <stdarg.h>
#include "../Libft/libft.h"

//PREMIER TEST DE FONCTION AVEC PARAM OPT : FONCTIONNEMENT BASIQUE
void	afficher_suite(int nb, ...)
{
	va_list		ap;
	int			n;

	va_start(ap, nb);//Macrofonction initialisant le parcours des param opt

	while (nb-- > 0)
	{
		n = va_arg(ap, int);//Macro affichant le param suivant a chaque appel
		ft_putnbr(n);
	}
}

//DEUXIEME TEST DE FONCTION AVEC PARAM OPT : DETERMINER NOMBRE ET TYPE EN FONCTION DE FORMAT
