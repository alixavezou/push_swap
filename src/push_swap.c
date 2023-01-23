/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:51:02 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/23 23:06:27 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
    t_stack stack;

    if (ac == 2)
        return (1);
    if (ft_parse_tab_a(ac, av))
        return (1);
    ft_is_sorted_yet(ac, av);
    ft_initialize_values(&stack, ac, av);
    ft_allocate_tab_a(ac, av, &stack);
    ft_allocate_tab_b(&stack);
    ft_allocate_copy_a(&stack);
    ft_handle_negative(&stack);
    ft_small_arrays(&stack);
    ft_radix(&stack);
    return (0);
}
