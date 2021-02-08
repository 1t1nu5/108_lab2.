#include <stdio.h>
int main()
{
	char name;
	int bday, check;
	fi (int add)
	{
		if (bday % 5 == 0)
		{
			if (add == 0)
			{
				printf("\\");
			}
			else
			{
				printf("/");
			}
		}
	}
	scanf("%c", &name);
	scanf("%d", &bday);
	check = (name + bday) % 2;
	if (name < 'J')
	{
		fi(0);
		if (check == 1)
		{
			printf("(^_^)");
		}
		else
		{
			printf("{@_@}");
		}
		fi(1);
	}
	return 0;
}
