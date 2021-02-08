#include <stdio.h>
int main()
{
	char promo;
	float usage;
	scanf("%c", &promo);
	scanf("%f", &usage);
	int U[3];
	U[0] = (usage/100)*100;
	U[1] = (usage-U[0])*100;
	U[2] = usage*100;
	if ((U[2]) % 10 != U[1] % 10)
	{
		U[1]++;
	}
	if (U[1] > 60)
	{
		return 1;
	}
	printf("%d %d", U[0], U[1]);
	return 0;
}
