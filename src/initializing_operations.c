/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:12:41 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/27 19:11:56 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_swap_a(t_stack *stack)
{
    int tempo;

    if (stack->size_tab_a < 2)
    {
        return (1);
    }
    tempo = stack->tab_a[0];
    stack->tab_a[0] = stack->tab_a[1];
    stack->tab_a[1] = tempo;
    ft_printf("sa\n");
    return (0);
}

int ft_swap_b(t_stack *stack)
{
    int tempo;

    if (!stack->tab_b || stack->size_tab_b < 2)
    {
        return (1);
    }
    tempo = stack->tab_b[0];
    stack->tab_b[0] = stack->tab_b[1];
    stack->tab_b[1] = tempo;
    ft_printf("sb\n");
    return (0);
}

int ft_swap_a_and_b(t_stack *stack)
{
    int tempo_a;
    int tempo_b;

    if (stack->size_tab_a < 2 || !stack->tab_b || stack->size_tab_b < 2)
    {
        ft_printf("Error!\n");
        return (1);
    }
    tempo_a = stack->tab_a[0];
    tempo_b = stack->tab_b[0];
    stack->tab_a[0] = stack->tab_a[1];
    stack->tab_b[0] = stack->tab_b[1];
    stack->tab_a[1] = tempo_a;
    stack->tab_b[1] = tempo_b;
    return (0);
    ft_printf("ss\n");
}

int ft_rotate_a(t_stack *stack)
{
    int tempo;
    int i;

    i = 0;
    if (stack->size_tab_a < 2)
    {
        return (1);
    }
    tempo = stack->tab_a[0];
    while (i < stack->size_tab_a - 1)
    {
        stack->tab_a[i] = stack->tab_a[i + 1];
        i++;
    }
    stack->tab_a[stack->size_tab_a - 1] = tempo;
    ft_printf("ra\n");
    return (0);
}

int ft_rotate_b(t_stack *stack)
{
    int tempo;
    int i;

    i = 0;
    if (stack->size_tab_b < 2)
    {
        return (1);
    }
    tempo = stack->tab_b[0];
    while (i < stack->size_tab_b - 1)
    {
        stack->tab_b[i] = stack->tab_b[i + 1];
        i++;
    }
    stack->tab_b[stack->size_tab_b - 1] = tempo;
    ft_printf("rb\n");
    return (0);
}
