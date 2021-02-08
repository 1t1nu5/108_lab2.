#include <stdio.h>
int main()
{
	int receive, total = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &receive);
		total += receive;
	}
	
	return 0;
}
