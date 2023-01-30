/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_arrays2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:57:02 by alixavezou        #+#    #+#             */
/*   Updated: 2023/01/30 14:26:25 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return (1);
}

int ft_five_args(t_stack *stack)
{
    int first;
    int second;
    int third;
    int fourth;
    int five;

    if (stack->size_tab_a != 5)
        return (0);
    first = stack->tab_a[0];
    second = stack->tab_a[1];
    third = stack->tab_a[2];
    fourth = stack->tab_a[3];
    five = stack->tab_a[4];
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
		ft_reverse_rotate_a(stack);
		ft_push_b(stack);
	}
	else if (five == 0)
	{
		ft_reverse_rotate_a(stack);
		ft_push_b(stack);
	}
	ft_check_one(stack);
	ft_three_args(stack);
	ft_push_a(stack);
	ft_push_a(stack);
    return (1);
}

int	ft_check_one(t_stack *stack)
{
	int first;
    int second;
    int third;
    int fourth;

	first = stack->tab_a[0];
    second = stack->tab_a[1];
    third = stack->tab_a[2];
    fourth = stack->tab_a[3];
	if (first == 1)
		ft_push_b(stack);
	else if (second == 1)
	{
		ft_rotate_a(stack);
		ft_push_b(stack);
	}
	else if (third == 1)
	{
		ft_rotate_a(stack);
		ft_rotate_a(stack);
		ft_push_b(stack);
	}
	else if (fourth == 1)
	{
		ft_reverse_rotate_a(stack);
		ft_push_b(stack);
	}
	return (1);
}
