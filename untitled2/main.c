#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdint.h>

void	test_fonction_appel_va_list(int nb, va_list ap)
{
	int n = 0;
	n = va_arg(ap, int);
	printf("%d\n", n);
}



void suite_nombre(int nb, ...)
{
	va_list ap;


	va_start(ap, nb);
	va_arg(ap, int);
	test_fonction_appel_va_list(nb, ap);
	test_fonction_appel_va_list(nb, ap);
	va_end(ap);
}

int main()
{
	int i                = 1;
	unsigned char	x   = 255;
	long				lg = LONG_MAX;
	long long			llg = LLONG_MAX;
	ssize_t ss_t         = SSIZE_MAX;
	size_t s_t			 = SIZE_MAX;
	//suite_nombre(4, 1, 2, 3, 4);
	//printf("%zhd\n", -50);
//	printf("%lli \n", -9223372036854775807);
	printf("SHRT_MAX : %hd\n", SHRT_MAX);
	printf("USHRT_MAX :%hu\n", USHRT_MAX);
	printf("LONG_MAX : %ld\n", lg); // Si hld ou lhd le l surcharge le h
	printf("LLONG_MAX : %lld\n", llg);
	printf("LLONG_MIN : %lld\n", LLONG_MIN);
	printf("ULONG_MAX : %lu\n", ULONG_MAX);
	printf("ULLONG MAX : %llu\n", ULLONG_MAX);
	printf("SSIZE_T_MAX : %zu\n", ss_t);
	printf("SIZE_T MAX : %zd\n", sizeof(ulong));
	printf("UNSIGNED CHAR MAX : %d\n", x);
	printf("%hd");
	printf("Short : %zu\nLong : %zu\nLong Long : %zu\nUnsigned Long : %zu\nUnsigned Long Long : %zu\n",
		   sizeof(short), sizeof(long), 8, sizeof(u_long), sizeof(u_int64_t));
	printf("Unsigned char : %zu %hhd\n", sizeof(u_char));
	printf("Size_t : %zu\n", sizeof(size_t));

	long		neglg = -648;
	printf("%I\n", neglg);
	//printf("\nli\n", -5);
	//printf("|%-010.5d|\n", -12);
	//printf("%0100llu\n", 555555555555);
	printf("%155555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555d\n", 1);
	//printf("%+010.4d\n", +12);
	return (0);



	/*
	 * Long et Long Long sur Unix ont la meme taille, et du coup le meme intervalle	 *
	 */
}