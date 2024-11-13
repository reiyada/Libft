#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!lst || !del)
        return;
    while (*lst)
    {
        temp = (*lst)->next; //store the next node
        ft_lstdelone(*lst, del); //delete the current one
        *lst = temp;//move to the next one
    }
    *lst = NULL;
}
//lst->next points simply the next node
//while (*lst)->next means the next node itself

// void delete_content(void *content)
// {
//     free(content);
// }

// t_list *create_node(const char *str)
// {
//     int i = 0;
//     while (str[i])
//         i++;
//     char *content = malloc(sizeof(char) * (i + 1));
//     if (!content)
//         return NULL;
//     i = 0;
//     while (str[i])
//     {
//         content[i] = str[i];
//         i++;
//     }
//     content[i] = '\0';
//     return ft_lstnew(content);
// }


// int main(void)
// {
//     t_list *list = create_node("Node 1");
//     list->next = create_node("Node 2");
//     list->next->next = create_node("Node 3");
//     printf("List before ft_lstclear:\n");
//     t_list *temp = list;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
//     ft_lstclear(&list, delete_content);
//     if (!list)
//         printf("List successfully cleared!\n");
//     else
//         printf("List clear failed!\n");
//     return 0;
// }