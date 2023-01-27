/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:22:15 by alixavezou        #+#    #+#             */
/*   Updated: 2023/01/23 23:13:53 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize_values(t_stack *stack, int ac, char **av)
{
    (void)av;
	stack->size = ac - 1;
    stack->size_tab_a = ac - 1;
    stack->size_tab_b = 0;
    stack->size_cpy = 0;
}
