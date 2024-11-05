#include <stdlib.h>
#include <unistd.h>


int     *ft_range(int start, int end)
{
    int i;
    int len;
    int *result;
    len = end - start + 1;
    result = (int *)malloc(len * sizeof(int));
    if(!result)
        return (NULL);
    i = 0;
    while (i < len)
    {
        result[i] = start + i;
        i++;
    }
    return (result);
}

int main()
{
    int start = 3;
    int end =  6;
    int i = 0;
    int *result;
    result = ft_range(start, end);
    while(i < 4)
    {
        write(1, &result[i], 1);
        i++;
    }
    free(result);
}