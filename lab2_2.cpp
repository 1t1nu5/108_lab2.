#include <stdio.h>
#include <math.h>
int main()
{
	char choice;
	float usage;
	int USAGE, limit, cost = 0;
	scanf("%c", &choice);
	if (choice == 'A')
	{
		limit = 12000;
	}
	else if (choice == 'B')
	{
		limit = 24000;
	}
	else
	{
		return 1;
	}
	scanf("%f", &usage);
	
}
