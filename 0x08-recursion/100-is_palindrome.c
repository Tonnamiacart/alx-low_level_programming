#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 * Return: 1 or 0;
 */

int is_palindrome(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}
		left++;
		right--;
	}
	return (1);
}
