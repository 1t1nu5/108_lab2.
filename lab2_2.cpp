#include <stdio.h>
int main()
{
	char choice;
	int usage, limit, cost = 0;
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
}
