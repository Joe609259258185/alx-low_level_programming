#include "main.h"

/**
*main - prints _putchar as a message
*
*Description:  _putchar using putchar prototype
*
* Return :  0  when success
*/

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
