/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tab_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:10:50 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/14 15:11:03 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ici je veux d'abord checker si mon tableau est deja trie
int ft_is_sorted_yet(t_stack *stack)
{
    int i;

    i = 0;
    //je veux partir du debut de mon tableau et checker si l'argument d'apres est + grand que celui d'avant
    //auquel cas, ca veut dire que mon tableau n'est pas trie dans l'ordre
    while (i < stack->size - 1)
    {
        if (stack->tab_a[i] > stack->tab_a[i + 1])
        {
            ft_printf("Array is not sorted in the ascending order!\n");
            return (1);
        }
        i++;
    }
    return (0);
}