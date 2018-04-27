#include "Fct param opt.h"
#include <stdio.h>
#include "../Libft/libft.h"
#include <wchar.h>
#include <unistd.h>
#include <locale.h>

int main()
{
	char	str[100] = "Pas d'accent";
	wchar_t	wstr[50] = L"éä";

/*	//afficher_suite(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	//ft_putchar('\n');
	printf("%s\n", "%s : Test");
	printf("%s%s\n", "%s ", str);
	ft_putchar('\n');
	ft_putchar('\n');
	printf("%p\n", str);
	printf("%d\n", 42);
	printf("%D\n", 2147483648);
	printf("%s%lu\n", "Taille de wchar_t : ", sizeof(wchar_t));
	//printf("%s%S\n", "%S : ", "test");
	printf("%s%ls\n", "%S ou %ls : ", str);*/

	unsigned char c;
	c = 0xe1;
	write(1, &c, 1);
	c = 0x88;
	write(1, &c, 1);
	c = 0xb4;
	write(1, &c, 1);
	c = 0x0a;
	write(1, &c, 1);

	wchar_t wstro[50] = L"☠";
	printf("%S\n", wstr);
	printf("\xE2\x98\xA0");
	printf("%ls", "☠");
//REGARDER DANS LES TESTS

	return 0;
}