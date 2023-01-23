/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_tab_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:54:08 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/22 20:16:00 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_allocate_tab_b(t_stack *stack)
{
    stack->tab_b = (int *)malloc((stack->size) * sizeof(int));
    if (!stack->tab_b)
    {
        free(stack->tab_a);
        return (1);
    }
    return (0);
}

int ft_allocate_copy_a(t_stack *stack)
{
    stack->cpy_tab_a = (int *)malloc((stack->size) * sizeof(int));
    if (!stack->cpy_tab_a)
    {
        free(stack->tab_a);
        free(stack->tab_b);
        return (1);
    }
    return (0);
}
