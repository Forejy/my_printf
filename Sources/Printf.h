#ifndef PRINTF_PRINTF_H
#define PRINTF_PRINTF_H

typedef struct	type_fct_s
{
	char	*type;
	void	*f;
}				type_fct_t;



# define CHAR			0
# define STRING			1
# define INT			2
# define UNSIGNED_INT	3
# define LONG			4
# define UNSIGNED LONG	5
# define OCTAL			6
# define UNSIGNED_OCTAL	7
# define HEXA_MIN		8
# define HEXA_MAJ		9
# define WINT_T			10
# define WCHAR_T		11
# define POINTER		12
# define PERCENT		13


#endif //PRINTF_PRINTF_H
