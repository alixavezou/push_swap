/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:28:54 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/27 19:16:25 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_rotate_a_and_b(t_stack *stack)
{
    int tempo_a;
    int tempo_b;
    int i;
    int j;

    tempo_a = stack->tab_a[0];
    tempo_b = stack->tab_b[0];
    i = 0;
    j = 0;
    if (!stack->tab_b || !stack->tab_a || stack->size_tab_b < 2 || stack->size_tab_a < 2)
    {
        return (1);
    }
    while (i < stack->size_tab_a - 1 && j < stack->size_tab_b - 1)
    {
        stack->tab_a[i] = stack->tab_a[i + 1];
        stack->tab_b[j] = stack->tab_b[j + 1];
        i++;
        j++;
    }
    stack->tab_a[stack->size_tab_a - 1] = tempo_a;
    stack->tab_b[stack->size_tab_b - 1] = tempo_b;
    ft_printf("rr\n");
    return (0);
}

int ft_reverse_rotate_a(t_stack *stack)
{
    int tempo;
    int i;

    i = stack->size_tab_a - 1;
    if (!stack->size_tab_a || stack->size_tab_a < 2)
    {
        return (1);
    }
    tempo = stack->tab_a[stack->size_tab_a - 1];
    while (i > 0)
    {
        stack->tab_a[i] = stack->tab_a[i - 1];
        i--;
    }
    stack->tab_a[0] = tempo;
    ft_printf("rra\n");
    return (0);
}

int ft_reverse_rotate_b(t_stack *stack)
{
    int tempo;
    int i;

    i = stack->size_tab_b - 1;
    if (!stack->tab_b || stack->size_tab_b < 2)
    {
        return (1);
    }
    tempo = stack->tab_b[stack->size_tab_b - 1];
    while (i > 0)
    {
        stack->tab_b[i] = stack->tab_b[i - 1];
        i--;
    }
    stack->tab_b[0] = tempo;
    ft_printf("rrb\n");
    return (0);
}

int ft_reverse_rotate_a_and_b(t_stack *stack)
{
    int tempo_a;
    int tempo_b;
    int i;
    int j;

    i = stack->size_tab_a - 1;
    j = stack->size_tab_b - 1;
    if (!stack->tab_a || stack->size_tab_a < 2 || !stack->tab_b || stack->size_tab_b < 2)
    {
        return (1);
    }
    tempo_a = stack->tab_a[stack->size_tab_a - 1];
    tempo_b = stack->tab_b[stack->size_tab_b - 1];
    while (i > 0 && j > 0)
    {
        stack->tab_a[i] = stack->tab_a[i - 1];
        stack->tab_b[j] = stack->tab_b[j - 1];
        i--;
        j--;
    }
    stack->tab_a[0] = tempo_a;
    stack->tab_b[0] = tempo_b;
    ft_printf("rrr\n");
    return (0);
}
