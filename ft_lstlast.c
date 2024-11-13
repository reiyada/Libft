#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    t_list *temp;

    temp = lst;
    while (temp->next)
        temp = temp->next;
    return (temp);
}

// t_list *ft_create_node(void *value)
// {
//     t_list *node;

//     node = (t_list *)malloc(sizeof(t_list));
//     if (!node)
//         return NULL;
//     node->content = value;
//     node->next = NULL;
//     return node;
// }

// int main()
// {
//     t_list *head = ft_create_node("NODE 1");
//     head->next = ft_create_node("NODE 2");
//     head->next->next = ft_create_node("NODE 3");
//     t_list *last = ft_lstlast(head);
//     printf("The last node of the list : %s\n", (char *)last->content);
//     t_list *temp;
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }