/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:22:15 by alixavezou        #+#    #+#             */
/*   Updated: 2023/01/23 18:28:23 by alixavezou       ###   ########.fr       */
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
