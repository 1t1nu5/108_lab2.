#include <stdio.h>
int main()
{
	int day, month, result;
	scanf("%d", &day);
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
		case 2:
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
	return 0;
}
