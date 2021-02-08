#include <stdio.h>
int main()
{
	int day = 1, month, week;
	scanf("%d", &week);
	scanf("%d", &month);
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			month = 31; // variable reusage
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			month = 30;
			break;
		case 2:
			month = 29;
			break;
		default:
			return 1;
	}
	do
	{
		day ++;
		week++;
		if (week > 7)
		{
			week = 1;
		}
	}
	while (day <= month);
	printf("%d", week);
	return 0;
}
