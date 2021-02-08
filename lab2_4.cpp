#include <stdio.h>
void (int add)
{
	if (add == 0)
	{
		printf("\\");
	}
	else
	{
		printf("/");)
	}
}
int main()
{
	char name;
	int bday, check;
	scanf("%c", &name);
	scanf("%d", &bday);
	check = (name + bday) % 2;
	if (name < 'J')
	{
		if (check == 1)
		{
			printf("(^_^)")
		}
	}
	return 0;
}
