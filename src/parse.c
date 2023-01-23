/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:51:57 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/22 20:24:34 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_parse_tab_a(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    ft_wrong_arguments(ac, av);
    while (av[i])
    {
        j = 0;
        if (av[i][j] == '-' && av[i][j + 1])
            j++;
        if (ft_long_atoi(av[i]) > INT_MAX || ft_long_atoi(av[i]) < INT_MIN || ft_strlen(av[i]) > 11)
        {
            ft_printf("Argument cannot exceed INT_MAX and/or INT_MIN!\n");
            return (1);
        }
        if (ft_check_duplicate_nb(ac, av) == 1)
        {
            ft_printf("Error\nDuplicate nb are not allowed!\n");
            return (1);
        }
        while (av[i][j])
        {
            if (!(ft_isdigit(av[i][j])))
            {
                ft_printf("Arguments must be of type int!\n");
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
}

int ft_wrong_arguments(int ac, char **av)
{
    (void)av;
    if (ac == 1)
    {
        ft_printf("Error\nWrong nb of arguments!\n");
        return (1);
    }
    return (0);
}

int ft_check_duplicate_nb(int ac, char **av)
{
    int i;
    int j;
    int nb1;
    int nb2;

    i = 1;
    (void)ac;
    while (av[i])
    {
        nb1 = ft_atoi(av[i]);
        j = i + 1;
        while (av[j])
        {
            nb2 = ft_atoi(av[j]);
            if (nb1 == nb2)
                {
                    return (1);
                }
                j++;
        }
        i++;
    }
    return (0);
}

int ft_allocate_tab_a(int ac, char **av, t_stack *stack)
{
    int i;

    stack->tab_a = (int *)malloc((stack->size) * sizeof(int));
    if (!stack->tab_a)
    {
        free(stack->tab_a);
        return (1);
    }
    i = 1;
    while (i < ac)
    {
        stack->tab_a[i - 1] = ft_atoi(av[i]);
        i++;
    }
    return (0);
}
