#include <stdio.h>
int main()
{
	int n[3], s[3], m[3]; // n = number, s = series (ABC), m = most (most 3 to least 1
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	scanf("%c %c %c", &s[0], &s[1], &s[2]);
	if (n[0] < n[1])
	{
		if (n[1] < n[2])
		{
			m[0] = 0;
			m[1] = 1;
			m[3] = 2;
		}
		else
		{
			m[0] = 0;
			m[1] = 2;
			m[3] = 1;
		}
	}
	else
	{
		if (n[0] < n[2])
		{
			m[0] = 1;
			m[1] = 0;
			m[3] = 2;
		}
		else
		{
			m[0] = 2;
			m[1] = 0;
			m[3] = 1;
		}
	}
	int swap1[3] = {n[m[1]], n[m[2]], n[m[3]]};
	for (int i = 0; i < 3; i++)
	{
		s[i] -= 'A'; // turn into number.
	}
	int swap2[3] = {swap1[s[1]], swap1[s[2]], swap1[s[3]]};
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", swap2[i]);
	}
	return 0;
}
