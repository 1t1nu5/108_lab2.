#include <stdio.h>
int main()
{
	int receive, total = 0;
	for (int i = 0; i < 3; i++)
	{
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
