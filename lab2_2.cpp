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
	if (promo == 'A')
	{
		if (U[0] < 200 || (U[0] == 200 && U[1] == 0))
		{
			printf("199");
		}
		else
		{
			
		}
	}
	else if (promo == 'B')
	{
		if (U[0] < 400 || (U[0] == 400 && U[1] == 0))
		{
			printf("299");
		}
		else
		{
			
		}
	}
	else
	{
		return 2;
	}
	return 0;
}
