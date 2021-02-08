#include <stdio.h>
int main()
{
	int receive, total = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &receive);
		if (i == 2)
		{
			if (receive < 0 || receive > 40)
			{
				return 1;
			}
		}
		else
		{
			if (receive < 0 || receive > 30)
			{
				return 2;
			}
		}
		total += receive;
	}
	if (total >= 80)
	{
		printf("A");
	}
	else if (total >= 75)
	{
		printf("B+");
	}
	else if (total >= 70)
	{
		printf("B");
	}
	else if (total >= 65)
	{
		printf("C+");
	}
	else if (total >= 60)
	{
		printf("C");
	}
	else if (total >= 55)
	{
		printf("D+");
	}
	else if (total >= 50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}
