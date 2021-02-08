#include <stdio.h>
int main()
{
	char promo;
	float usage;
	scanf("%c", &promo);
	scanf("%f", &usage);
	usage *= 100;
	int U = usage;
	printf("%d", U);
	return 0;
}
