#include <stdio.h>
int main()
{
	int n[3], s[3], m[3]; // n = number, s = series (ABC), m = most (most 3 to least 1)
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	scanf("%c %c %c", &s[0], &s[1], &s[2]);
	if (n[0] < n[1])
	{
		if (n[1] < n[2])
		{
			m[3] = {1, 2, 3};
		}
		else
		{
			m[3] = {1, 3, 2};
		}
	}
	else
	{
		if (n[0] < n[2])
		{
			m[3] = {2, 1, 3};
		}
		else
		{
			m[3] = {3, 1, 2};
		}
	}
	int swap1[3] = {n[m[1]], n[m[2]], n[m[3]]};
	for (int i = 0; i < 3; i++)
	{
		s[i] - 'A'; // turn into number.
	}
	return 0;
}
