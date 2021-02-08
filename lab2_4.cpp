#include <stdio.h>
int main()
{
	char name;
	int bday, check;
	scanf("%c", &name);
	scanf("%d", &bday);
	check = (name + bday) % 2;
	if (name < 'J')
	{
		if (bday % 5 == 0)
		{
			printf("\\");
		}
		if (check == 1)
		{
			printf("(^_^)");
		}
		else
		{
			printf("{@_@}");
		}
		if (bday % 5 == 0)
		{
			printf("/");
		}
	}
	else if (name < 'S')
	{
		if (bday % 5 == 0)
		{
			printf("\\");
		}
		if (check == 1)
		{
			printf("(*o*)");
		}
		else
		{
			printf("{*v*}");
		}
		if (bday % 5 == 0)
		{
			printf("/");
		}
	}
	else if (name <= 'Z')
	{
		if (bday % 5 == 0)
		{
			printf("\\");
		}
		if (check == 1);
		{
			printf("(T_T)");
		}
		else
		{
			printf("{x_x}");
		}
		if (bday % 5 == 0)
		{
			printf("/");
		}
	}
	return 0;
}
