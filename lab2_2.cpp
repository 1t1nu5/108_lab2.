#include <stdio.h>
#include <math.h>
int main()
{
	char choice;
	float usage, cost = 0;
	int USAGE, limit, overpay;
	scanf("%c", &choice);
	if (choice == 'A')
	{
		limit = 12000;
		overpay = 2;
		cost = 199;
	}
	else if (choice == 'B')
	{
		limit = 24000;
		overpay = 3;
		cost = 299;
	}
	else
	{
		return 1;
	}
	scanf("%f", &usage);
	USAGE = floor(usage) * 60;
	USAGE += (usage - floor(usage) ) * 100;
	usage -= USAGE;
	if (usage > 0)
	{
		cost += overpay*usage;
	}
	printf("%f", cost);
}
