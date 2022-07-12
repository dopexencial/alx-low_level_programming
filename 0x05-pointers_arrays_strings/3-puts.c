#include "main.h"
/**
  * _puts - prints a string using putchar
  * @str: the string
  * Author: Samuel Lateef
  * Return: void
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
