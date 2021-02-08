#include <stdio.h>
#include <string.h>
int main()
{
	int num[3], order, most[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%s", order);
	if (num[0] < num[1])
	{
		if (num[1] < num[2])
		{
			most[0] = 1;
			most[1] = 2;
			most[2] = 3;
		}
		else
		{
			most[0] = 1;
			most[1] = 3;
			most[2] = 2;
		}
	}
	else
	{
		if (num[0] < num[2])
		{
			most[0] = 2;
			most[1] = 1;
			most[2] = 3;
		}
		else
		{
			most[0] = 2;
			most[1] = 3;
			most[2] = 1;
		}
	}
	most[0] = num[most[0]];
	most[1] = num[most[1]];
	most[2] = num[most[2]];
	
	return 0;
}
