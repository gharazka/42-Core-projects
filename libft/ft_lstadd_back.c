#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!ft_lstlast(*lst))
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
