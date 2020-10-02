#include "holberton.h"

/**
 * reverse_array - stores chars in temp locations and reverses them
 * @a: arry before reverse
 * @n: counter
 */

void reverse_array(int *a, int n)
{
	int first, second;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		first = a[i];
		second = a[j];
		a[i] = second;
		a[j] = first;
		i++;
		j--;
	}
}
