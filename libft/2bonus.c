#include "libft.h"

int main(int argc, const char *argv[])
{
        t_list          *begin;
        t_list          *elem;
        t_list          *elem2;
        t_list          *elem3;
        t_list          *elem4;
        char            *str = ft_strdup("lorem");
        char            *str2 = ft_strdup("ipsum");
        char            *str3 = ft_strdup("dolor");
        char            *str4 = ft_strdup("sit");
	
        elem = ft_lstnew(str);
        elem2 = ft_lstnew(str2);
        elem3 = ft_lstnew(str3);
        elem4 = ft_lstnew(str4);
	printf("works\n");
        ft_lstadd_back(&begin, elem);
	printf("does not works\n");
        ft_lstadd_back(&begin, elem2);
        ft_lstadd_back(&begin, elem3);
        ft_lstadd_back(&begin, elem4);
        while (begin)
       	{
		printf("%s", (char *)begin->content);
		begin = begin->next;
	}
        return (0);
}

