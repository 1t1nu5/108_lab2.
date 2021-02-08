#include <stdio.h>
int main()
{
	char choice;
	float usage, USAGE, cost = 0, overpay;
	int limit;
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
	USAGE = (usage/100)*100 * 60;
	USAGE += (usage - (usage/100)*100 ) * 100;
	USAGE - limit;
	USAGE /= 60;
	if (usage > 0)
	{
		cost += overpay*USAGE;
	}
	int COST = cost;
	printf("%d", COST);
}
