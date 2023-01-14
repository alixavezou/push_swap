/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:51:02 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/14 15:13:49 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{   
    t_stack stack;
    
    stack.size = ac - 1;
    ft_parse_tab_a(ac, av); //je verifie toutes les erreurs possibles dans mes arguments
    ft_allocate_tab_a(ac, av, &stack); //une fois que je sais qu'il n'y a pas d'erreurs j'alloue de la memoire pour mon tableau
    ft_is_sorted_yet(&stack); //ensuite je check dans mon tableau s il est deja trie
    free(stack.tab_a);
    return (0);
}
