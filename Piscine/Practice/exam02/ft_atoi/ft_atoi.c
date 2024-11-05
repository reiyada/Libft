
int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int nb;
    i = 0;
    nb = 0;
    sign = 1;
    while(str[i] == ' '|| str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r') 
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return(nb * sign);
}