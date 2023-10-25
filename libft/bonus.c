#include "libft.h"

int	main(void)
{
	t_list *node = ft_lstnew("3");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("1");
	t_list *node4 = ft_lstnew("4");
	ft_lstadd_front(&node, node2);
	ft_lstadd_front(&node2, node3);
	ft_lstadd_back(&node3, node4);
	printf("%s\n", (char *)node3->content);
	printf("%s\n", (char *)ft_lstlast(node3)->content);
	printf("%i\n", ft_lstsize(node3));
}
