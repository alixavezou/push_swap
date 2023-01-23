/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations3.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:29:54 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/23 18:59:09 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_push_a(t_stack *stack)//on prend le premier element de b et on le met en haut de a
{
    int *ptr_a;
    int i;

    i = 0;
    if (stack->size_tab_b == 0)
    {
        // ft_printf("Error! B is empty, cannot push B in A\n");
        return (1);
    }
    ptr_a = &stack->tab_a[0];
    ptr_a--;
    stack->tab_a = ptr_a;
    stack->tab_a[0] = stack->tab_b[0];

    while(i < stack->size_tab_b)
    {
        stack->tab_b[i] = stack->tab_b[i + 1];
        i++;
    }
    stack->size_tab_a++;
    stack->size_tab_b--;
    ft_printf("pa\n");
    return (0);
}

int ft_push_b(t_stack *stack)//on prend le 1er element de A et on le met en haut de B
{
    int *ptr_b;
    int i;

    i = 0;
    if (stack->size_tab_a == 0)
    {
        // ft_printf("Error! A is empty, cannot push A to B!\n");
        return (1);
    }
    ptr_b = &stack->tab_b[0];
    ptr_b--;
    stack->tab_b = ptr_b;
    stack->tab_b[0] = stack->tab_a[0];

    while(i < stack->size_tab_a)
    {
        stack->tab_a[i] = stack->tab_a[i + 1];
        i++;
    }
    stack->size_tab_a--;
    stack->size_tab_b++;
    ft_printf("pb\n");
    return (0);
}
