#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything based on the format string
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list list;
char *seps = "";
unsigned int a = 0;

va_start(list, format);

while (format && format[a])
{
char curnt_format = format[a];
switch (curnt_format)
{
case 'c':
printf("%s%c", seps, va_arg(list, int));
break;
case 'i':
printf("%s%d", seps, va_arg(list, int));
break;
case 'f':
printf("%s%f", seps, va_arg(list, double));
break;
case 's':
{
char *str_args = va_arg(list, char *);
if (!str_args)
str_args = "(nil)";
printf("%s%s", seps, str_args);
}
break;
}
seps = ", ";
a++;
}
va_end(list);

printf("\n");
}
