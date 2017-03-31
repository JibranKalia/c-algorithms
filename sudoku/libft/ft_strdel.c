#include <stdlib.h> 

void	ft_strdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
