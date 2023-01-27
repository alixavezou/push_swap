/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations3.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:29:54 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/27 19:18:19 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_push_a(t_stack *stack)
{                    
    int i;

    i = stack->size_tab_a;
    if (stack->size_tab_b == 0)
    {
        return (1);
    }
    while (i > 0)
    {
        stack->tab_a[i] = stack->tab_a[i - 1];
        i--;
    }
    stack->tab_a[i] = stack->tab_b[0];
    stack->size_tab_a++;
    stack->size_tab_b--;
    while (i < stack->size_tab_b)
    {
        stack->tab_b[i] = stack->tab_b[i + 1];
        i++;
    }
    ft_printf("pa\n");
    return (0);
}

int ft_push_b(t_stack *stack)
{
    int i;

    i = stack->size_tab_b;
    if (stack->size_tab_a == 0)
    {
        return (1);
    }
    while (i > 0)
    {
        stack->tab_b[i] = stack->tab_b[i - 1];
        i--;
    }
    stack->tab_b[i] = stack->tab_a[0];
    stack->size_tab_a--;
    stack->size_tab_b++;
    while (i < stack->size_tab_a)
    {
        stack->tab_a[i] = stack->tab_a[i + 1];
        i++;
    }
    ft_printf("pb\n");
    return (0);
}
