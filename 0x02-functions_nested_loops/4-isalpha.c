#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
