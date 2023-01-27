/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:52:43 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/27 19:22:08 by aavezou          ###   ########.fr       */
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
    int *tab_b;
    int *cpy_tab_a;
    int size; //la taille du nombre d'arguments initialement
    int size_tab_a;
    int size_tab_b;
    int size_cpy;
};

// Define values
# define INT_MAX 2147483647
# define INT_MIN -2147483648

int     ft_parse_tab_a(int ac, char **av);
int     ft_allocate_tab_a(int ac, char **av, t_stack *stack);
int     ft_allocate_tab_b(t_stack *stack);
int     ft_allocate_copy_a(t_stack *stack);
int     ft_wrong_arguments(int ac, char **av);
int     ft_check_type_of_args(int ac, char **av);
int     ft_check_duplicate_nb(int ac, char **av);
int     ft_is_sorted_yet(int ac, char **av);
int     ft_swap_a(t_stack *stack);
int     ft_swap_b(t_stack *stack);
int     ft_swap_a_and_b(t_stack *stack);
int     ft_rotate_a(t_stack *stack);
int     ft_rotate_b(t_stack *stack);
int     ft_rotate_a_and_b(t_stack *stack);
int     ft_reverse_rotate_a(t_stack *stack);
int     ft_reverse_rotate_b(t_stack *stack);
int     ft_reverse_rotate_a_and_b(t_stack *stack);
int     ft_push_b(t_stack *stack);
int     ft_push_a(t_stack *stack);
int     ft_stack_sorted(t_stack *stack);
int     ft_handle_negative(t_stack *stack);
int	    ft_small_arrays(t_stack *stack);
int	    ft_two_args(t_stack *stack);
int     ft_three_args(t_stack *stack);
int     ft_five_args(t_stack *stack);
int	    ft_four_args(t_stack *stack);
int	    ft_check_one(t_stack *stack);

long	ft_long_atoi(const char *str);

void    ft_radix(t_stack *stack);
void	ft_initialize_values(t_stack *stack, int ac, char **av);
void    ft_free_three_arrays(t_stack *stack);

#endif
