#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    last = ft_lstlast(*lst);
    if (!last)
        *lst = new;
    last->next = new;
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
//     t_list *newnode = ft_create_node("NEW NODE");
//     ft_lstadd_back(&head, newnode);
//     t_list *current = head;
//     int i = 1;
//     while (current)
//     {
//         printf("%d : %s\n", i, (char *)current->content);
//         current = current->next;
//         i++;
//     }
//     t_list *temp;
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }