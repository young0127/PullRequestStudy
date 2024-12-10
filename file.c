#include <stdio.h>

#define A int main(void)
#define AA printf("A");
#define AAA return 0;

A
{
	AA;
	AAA;
}
