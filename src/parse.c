/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:51:57 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/13 17:12:40 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_parse_tab_a(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac <= 1)
    {
        ft_printf("Error\nWrong nb of arguments!\n");
        return (1);
    }
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (!(ft_isdigit(av[i][j])))
            {
                ft_printf("Arguments must be of type int!\n");
                return (1);
            }
            else
                j++;
        }
        i++;
    }
    return (0);
}

int ft_allocate_tab_a(int ac, char **av, t_stack *stack)
{
    int i;
    
    stack->tab_a = (int*)malloc((stack->size) * sizeof(int));
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
    free(stack->tab_a);
    return (0);
}