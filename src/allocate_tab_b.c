/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_tab_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:54:08 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/14 19:34:22 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_allocate_tab_b(t_stack *stack)
{
    stack->tab_b = (int *)malloc((stack->size) * sizeof(int));
    if (!stack->tab_b)
    {
        free(stack->tab_b);
        return (1);
    }
    return (0);
}