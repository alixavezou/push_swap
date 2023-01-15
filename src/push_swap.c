/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:51:02 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/15 20:40:36 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{   
    t_stack stack;
    
    stack.size = ac - 1;
    stack.size_tab_a = ac - 1;
    stack.size_tab_b = 0;
    
    if (ft_parse_tab_a(ac, av)) //je verifie toutes les erreurs possibles dans mes arguments
        return (1);
    ft_is_sorted_yet(ac, av); 
    //ensuite je check dans mon tableau s il est deja trie
    //si oui pas besoin de trier ni d'allouer de la memoire
    ft_allocate_tab_a(ac, av, &stack); //une fois que je sais qu'il n'y a pas d'erreurs j'alloue de la memoire pour mon tableau
    ft_allocate_tab_b(&stack);
    ft_printf("tab a sans OP = %d\n", stack.tab_a[0]);
    ft_printf("tab a sans OP = %d\n", stack.tab_a[1]);
    ft_printf("tab a sans OP = %d\n", stack.tab_a[2]);
    ft_printf("tab a sans OP = %d\n", stack.tab_a[3]);
    ft_printf("\n");
    ft_rotate_a(&stack);
    ft_printf("tab a apres OP = %d\n", stack.tab_a[0]);
    ft_printf("tab a apres OP = %d\n", stack.tab_a[1]);
    ft_printf("tab a apres OP = %d\n", stack.tab_a[2]);
    ft_printf("tab a apres OP = %d\n", stack.tab_a[3]);
    ft_printf("\n");
    ft_printf("tab b apres OP = %d\n", stack.tab_b[0]);
    ft_printf("tab b apres OP = %d\n", stack.tab_b[1]);
    ft_printf("tab b apres OP = %d\n", stack.tab_b[2]);
    ft_printf("tab b apres OP = %d\n", stack.tab_b[3]);
    free(stack.tab_a);
    free(stack.tab_b);
    return (0);
}
