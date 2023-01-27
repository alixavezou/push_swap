/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_arrays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:52:13 by alixavezou        #+#    #+#             */
/*   Updated: 2023/01/23 23:13:32 by aavezou          ###   ########.fr       */
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
	ft_free_all(stack);
}

int ft_three_args(t_stack *stack)
{
    int top;
    int middle;
    int bottom;

    if (stack->size_tab_a != 3)
        return (0);
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
    else if (top < middle && middle > bottom && top < bottom)
    {
        ft_swap_a(stack);
        ft_rotate_a(stack);
    }
    else if (top < middle && middle > bottom && top > bottom)
        ft_reverse_rotate_a(stack);
    return (1);
	ft_free_all(stack);
}

int	ft_four_args(t_stack *stack)
{
	int	first;
	int	second;
	int	third;
	int	fourth;

	if (stack->size_tab_a != 4)
        return (0);
    first = stack->tab_a[0];
    second = stack->tab_a[1];
    third = stack->tab_a[2];
    fourth = stack->tab_a[3];
	if (first == 0)
		ft_push_b(stack);
	else if (second == 0)
	{
		ft_rotate_a(stack);
		ft_push_b(stack);
	}
	else if (third == 0)
	{
		ft_rotate_a(stack);
		ft_rotate_a(stack);
		ft_push_b(stack);
	}
	else if (fourth == 0)
	{
		ft_reverse_rotate_a(stack);
		ft_push_b(stack);
	}
	ft_three_args(stack);
	ft_push_a(stack);
	ft_print_tab(stack->tab_a, stack->size_tab_a, 'a');
	return (1);
	ft_free_all(stack);
}
