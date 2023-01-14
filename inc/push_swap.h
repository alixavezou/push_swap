/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:52:43 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/14 15:11:35 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <ctype.h>

typedef struct s_stack t_stack;
struct	s_stack
{
    int *tab_a;
    int size;
};

// Define values
# define INT_MAX 2147483647
# define INT_MIN -2147483648

int ft_parse_tab_a(int ac, char **av);
int ft_allocate_tab_a(int ac, char **av, t_stack *stack);
int ft_wrong_arguments(int ac, char **av);
int ft_check_duplicate_nb(int ac, char **av);
int ft_is_sorted_yet(t_stack *stack);

#endif