/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tab_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:10:50 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/27 19:00:12 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_sorted_yet(int ac, char **av)
{
    (void)ac;
    int i;
    int j;
    int nb1;
    int nb2;

    i = 1;
    while (av[i])
    {
        nb1 = ft_atoi(av[i]);
        j = i + 1;
        while (av[j])
        {
            nb2 = ft_atoi(av[j]);
            if (nb1 > nb2)
            {
                return (1);
            }
            j++;
        }
        i++;
    }
    ft_printf("Error\nArray is already sorted in the ascending nb!\n");
    exit (1);
    return (0);
}

int ft_stack_sorted(t_stack *stack)
{
    int i;
    int j;

    i = 0;
    j = i + 1;
    while (stack->size_tab_a > j)
    {
        if (stack->tab_a[i] > stack->tab_a[j])
        {
            return (0);
        }
        j++;
        i++;
    }
    return (1);
}
