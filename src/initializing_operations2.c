/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:28:54 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/22 21:27:44 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_rotate_a_and_b(t_stack *stack)//le 1er element devient le dernier
{
    int tempo_a;
    int tempo_b;
    int i;
    int j;

    tempo_a = stack->tab_a[0];
    tempo_b = stack->tab_b[0];
    i = 0;
    j = 0;
    if (!stack->tab_b || stack->size_tab_b < 2 || stack->size_tab_a < 2)
    {
        ft_printf("Error!\n");
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

int ft_reverse_rotate_a(t_stack *stack) //le dernier element devient le premier
{
    int tempo;
    int i;

    i = stack->size_tab_a - 1;
    if (stack->size_tab_a < 2)
    {
        // ft_printf("Nothing to rotate with!\n");
        return (1);
    }
    tempo = stack->tab_a[stack->size_tab_a - 1];
    while (i > 0)
    {
        stack->tab_a[i] = stack->tab_a[i - 1];//chaque element aura la valeur de celui d'avant
        i--;
    }
    stack->tab_a[0] = tempo; //qd on arrive sur tab[0] alors on lui donne la valeur stockee
    ft_printf("rra\n");
    return (0);
}

int ft_reverse_rotate_b(t_stack *stack) //le dernier element devient le premier
{
    int tempo;
    int i;

    i = stack->size_tab_b - 1;
    if (!stack->tab_b || stack->size_tab_b < 2)
    {
        // ft_printf("Tab B is empty or doesn't have enough elements to rotate with!\n");
        return (1);
    }
    tempo = stack->tab_b[stack->size_tab_b - 1];
    while (i > 0)
    {
        stack->tab_b[i] = stack->tab_b[i - 1];//chaque element aura la valeur de celui d'avant
        i--;
    }
    stack->tab_b[0] = tempo; //qd on arrive sur tab[0] alors on lui donne la valeur stockee
    ft_printf("rrb\n");
    return (0);
}

int ft_reverse_rotate_a_and_b(t_stack *stack) //le dernier element devient le premier
{
    int tempo_a;
    int tempo_b;
    int i;
    int j;

    i = stack->size_tab_a - 1;
    j = stack->size_tab_b - 1;
    if (stack->size_tab_a < 2 || !stack->tab_b || stack->size_tab_b < 2)
    {
        ft_printf("Error!\n");
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
