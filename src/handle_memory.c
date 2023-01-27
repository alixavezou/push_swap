/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:08:07 by alixavezou        #+#    #+#             */
/*   Updated: 2023/01/23 23:13:49 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free_all(t_stack *stack)
{
	if (ft_two_args(stack))
	{
        return (1);
        ft_free_three_arrays(stack);
	}
	else if (ft_three_args(stack))
    {
        return (1);
        ft_free_three_arrays(stack);
    }
	else if (ft_four_args(stack))
    {
        return (1);
        ft_free_three_arrays(stack);
    }
	else if (ft_five_args(stack))
    {
        return (1);
        ft_free_three_arrays(stack);
    }
	return (0);
}

int	ft_free_two_arrays(t_stack *stack)
{
	free(stack->tab_a);
	free(stack->tab_b);
	return (0);
}

int	ft_free_three_arrays(t_stack *stack)
{
	free(stack->tab_a);
	free(stack->tab_b);
	free(stack->cpy_tab_a);
	return (0);
}


