/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:12:41 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/22 21:28:06 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_swap_a(t_stack *stack)
{
    int tempo;

    if (stack->size_tab_a < 2)
    {
        // ft_printf("Nothing to swap with!\n");
        return (1);
    }
    tempo = stack->tab_a[0]; //ds mon tempo de mets le premier element dc i est vide
    stack->tab_a[0] = stack->tab_a[1]; //le deuxieme element devient le premier et j est vide
    stack->tab_a[1] = tempo;//le 1er element devient le 2e
    ft_printf("sa\n");
    return (0);
}

int ft_swap_b(t_stack *stack)
{
    int tempo;

    if (!stack->tab_b || stack->size_tab_b < 2)
    {
        // ft_printf("Tab B is empty or doesn't have enough elements to swap with!\n");
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

int ft_rotate_a(t_stack *stack) //le 1er element devient le dernier
{
    int tempo;
    int i;

    i = 0;
    if (stack->size_tab_a < 2)
    {
        // ft_printf("Nothing to rotate with!\n");
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

int ft_rotate_b(t_stack *stack) //le 1er element devient le dernier
{
    int tempo;
    int i;

    i = 0;
    if (stack->size_tab_b < 2)
    {
        // ft_printf("Nothing to rotate with!\n");
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
