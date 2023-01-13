/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:52:43 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/13 17:12:50 by aavezou          ###   ########.fr       */
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

int ft_parse_tab_a(int ac, char **av);
int ft_allocate_tab_a(int ac, char **av, t_stack *stack);

#endif