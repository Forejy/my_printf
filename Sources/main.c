#include "Fct param opt.h"
#include <stdio.h>
#include "../Libft/libft.h"
#include <wchar.h>


int main()
{
	char	str[100] = "Pas d'accent";
	wchar_t	wstr[50] = L"éä";

	afficher_suite(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("%s\n", "%s : Test");
	printf("%s%s\n", "%s ", str);
	printf("%s%ls\n", "%S ou %ls : ", wstr);
	printf("%p\n", str);
	printf("%d\n", 42);
	printf("%D\n", 2147483648);
	printf("%s%lu\n", "Taille de wchar_t : ", sizeof(wchar_t));

	return 0;
}