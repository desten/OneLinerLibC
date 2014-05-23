#include <unistd.h>
#include <stdio.h>

int
_putchar(int c)
{
	return write(1, &c, 1) ? c : EOF;
}

size_t
_strlen(const char *s)
{
	return *s ? _strlen(s + 1) + 1 : 0;
}

void
_puts(const char *s)
{
	*s && write(1, &(*s), 1) ? _puts(s + 1) : 0;
}

int
_strcmp(const char *s1, const char *s2)
{
	return *s1 == *s2 && *s2 ? *s1 == *s2 ? _strcmp(++s1, ++s2) : 1 : 0;
}

int
_strncmp(const char *s1, const char *s2, size_t n)
{
	return *s1 == *s2 && *s2 ? *s1 == *s2 && n ? _strncmp(++s1, ++s2, --n) : 1 : 0;
}

double
_pow(double x, double n)
{
	return n > 0 ? x * _pow(x, n - 1) : 1;
}

int
_atoi(const char *s, int res)
{
	return *s ? *s == '-' ? -_atoi(s + 1, res) : _atoi(s + 1, 10 * res + *s - '0') : res;
}

int
main(void)
{
	return (0);
}
