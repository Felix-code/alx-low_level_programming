#include <ctype.h>
#include "main.h"
/**
 * _isalpha - check for alphabets
 * @c: character to be checked
 *
 * return: 1 if c is a character otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || 
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
