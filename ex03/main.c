#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	printf("%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("01948987493"));
	printf("\n%d", ft_str_is_numeric("0484882j8995489"));
	printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}
