#include "variadic_functions.h"

/**
 * print_all - prints anything based on the format string
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list list;
char *separator = "";
unsigned int i = 0;
int int_arg;
double double_arg;
char *str_arg;
va_start(list, format);

while (format && format[i])
{
if (format[i] == 'c')
{
int_arg = va_arg(list, int);
printf("%s%c", separator, int_arg);
}
else if (format[i] == 'i')
{
int_arg = va_arg(list, int);
printf("%s%d", separator, int_arg);
}
else if (format[i] == 'f')
{
double_arg = va_arg(list, double);
printf("%s%f", separator, double_arg);
}
else if (format[i] == 's')
{
str_arg = va_arg(list, char *);
if (!str_arg)
str_arg = "(nil)";
printf("%s%s", separator, str_arg);
}
separator = ", ";
i++;
}

va_end(list);

printf("\n");
}
