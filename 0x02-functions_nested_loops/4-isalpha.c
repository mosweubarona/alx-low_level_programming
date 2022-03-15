#include "main.h"

/**
 * _isalpha - check alphabets
 * @c: the cheked charetor
 * Return: 1 if c is a letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
