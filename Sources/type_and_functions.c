#include "Printf.h"

void	create_type_fct(type_fct_t *type_fct)
{
	type_fct[0].type = "c";
	type_fct[0].f = &putchar;
	type_fct[1].type = "C";
	type_fct[1].f = &putwint;
	type_fct[2].type = "lc";
	type_fct[2].f = &putwint;
	type_fct[3].type = "s";
	type_fct[3].f = &putstr;
	type_fct[4].type = "S";
	type_fct[4].f = &putwchart;
	type_fct[5].type = "ls";
	type_fct[5].f = &putwchart;
	type_fct[6].type = "d";
	type_fct[7].f = &putnbr;
	type_fct[8].type = "ld";
	type_fct[7].f = &putlong;
	type_fct[8].type = "lld";
	type_fct[22].f = &putlonglong;
	type_fct[8].type = "zd";
	type_fct[7].f = &putsize_t;
	type_fct[8].type = "jd";
	type_fct[7].f = &putintmax_t;
	type_fct[8].type = "D";
	type_fct[7].f = &putlong;
	type_fct[8].type = "lD";
	type_fct[6].f = &putlonglong;
	type_fct[7].type = "i";
	type_fct[8].f = &putnbr;
	type_fct[9].type = "li";
	type_fct[9].f = &putlong;
	type_fct[9].type = "lli";
	type_fct[9].f = &putlong;
	type_fct[22].type = "zi";
	type_fct[22].f = &putsize_t;
	type_fct[22].type = "ji";
	type_fct[22].f = &putintmax_t;
	create_type_fct_suite(type_fct);
}

void	create_type_fct(type_fct_t *type_fct)
{
	type_fct[12].type = "u";
	type_fct[12].f = &putUnsignedInt;
	type_fct[12].type = "lu";
	type_fct[12].f = &putLongUnsigned;
	type_fct[12].type = "llu";
	type_fct[12].f = &putUngisnedLongLong;
	type_fct[22].type = "zu";
	type_fct[22].f = &putssize_t;
	type_fct[22].type = "ju";
	type_fct[22].f = &putuintmax_t;
	type_fct[13].type = "U";
	type_fct[13].f = &putUnsignedLong;
	type_fct[12].type = "lU";
	type_fct[12].f = &putnbrUnsignedLongLong;
	type_fct[14].type = "o";
	type_fct[14].f = &putoctal;
	type_fct[16].type = "lo";
	type_fct[16].f = &putUnsignedLongOctal;
	type_fct[16].type = "llo";
	type_fct[16].f = &putUnsignedLongLongOctal;
	type_fct[22].type = "zo";
	type_fct[16].f = &putsize_t;
	type_fct[22].type = "jo";
	type_fct[22].f = &putintmax_t;
	type_fct[15].type = "O";
	type_fct[15].f = &putUnsignedLongOctal;
	type_fct[15].type = "lO";
	type_fct[15].f = &putUnsignedLongLongOctal;
	type_fct[17].type = "x";
	type_fct[17].f = &puthexa;
	type_fct[19].type = "lx";
	type_fct[19].f = &putLongHexa;
	type_fct[19].type = "llx";
	type_fct[19].f = &putLongLongHexa;
	type_fct[22].type = "zx";
	type_fct[16].f = &putssize_t;
	type_fct[22].type = "jx";
	type_fct[22].f = &putuintmax_t;
	type_fct[18].type = "X";
	type_fct[18].f = &putHEXA;
	type_fct[20].type = "lX";
	type_fct[20].f = &putLongHEXA;
	type_fct[20].type = "llX";
	type_fct[20].f = &putLongLongHEXA;
	type_fct[22].type = "zX";
	type_fct[16].f = &putssize_t;
	type_fct[22].type = "jX";
	type_fct[16].f = &putuintmax_t;
	create_type_fct_suite2(type_fct);
}

void	create_type_fct(type_fct_t *type_fct)
{

	type_fct[21].type = "p";
	type_fct[21].f = &printpointer;
	type_fct[22].type = "%";
	type_fct[22].f = &printpercent;
}