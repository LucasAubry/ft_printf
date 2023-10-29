#include 'printf.h'

int ft_printf(const char *src, ...)
{
	int i;
	va_list list;

	i = 0;
	va_start(list, src);
	while (src[i])
	{
		if (src[i] == '%')
		{
			i++;
			ft_verif(src[i], list);
		}
		else
			i++;
	}
	va_end (list);
	return ()
}