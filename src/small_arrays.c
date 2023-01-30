/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_arrays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:52:13 by alixavezou        #+#    #+#             */
/*   Updated: 2023/01/30 14:15:47 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_small_arrays(t_stack *stack)
{
	ft_two_args(stack);
	ft_three_args(stack);
	ft_four_args(stack);
	ft_five_args(stack);
	return (0);
}

int	ft_two_args(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (stack->size_tab_a != 2)
		return (0);
	if (stack->tab_a[i] > stack->tab_b[j])
		ft_swap_a(stack);
	return (1);
}

int ft_three_args(t_stack *stack)
{
    if (stack->size_tab_a != 3)
        return (0);
    ft_first_part_of_ft_three_args(stack);
    ft_second_part_of_ft_three_args(stack);
    return (1);
}

int ft_first_part_of_ft_three_args(t_stack *stack)
{
    int top;
    int middle;
    int bottom;

    top = stack->tab_a[0];
    middle = stack->tab_a[1];
    bottom = stack->tab_a[2];
    if (top > middle && middle < bottom && top < bottom)
        ft_swap_a(stack);
    else if (top > middle && middle > bottom && top > bottom)
    {
        ft_swap_a(stack);
        ft_reverse_rotate_a(stack);
    }
    else if (top > middle && middle < bottom && top > bottom)
        ft_rotate_a(stack);
    return (1);
}

int ft_second_part_of_ft_three_args(t_stack *stack)
{
    int top;
    int middle;
    int bottom;

    top = stack->tab_a[0];
    middle = stack->tab_a[1];
    bottom = stack->tab_a[2];
    if (top < middle && middle > bottom && top < bottom)
    {
        ft_swap_a(stack);
        ft_rotate_a(stack);
    }
    else if (top < middle && middle > bottom && top > bottom)
        ft_reverse_rotate_a(stack);
    return (1);
}
