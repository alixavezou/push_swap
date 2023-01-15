/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tab_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:10:50 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/14 18:43:11 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ici je veux d'abord checker si mon tableau est deja trie
int ft_is_sorted_yet(int ac, char **av)
{
    (void)ac;
    int i;
    int j;
    int nb1;
    int nb2;

    i = 1;
    //je veux partir du debut de mon tableau et checker si l'argument d'apres est + grand que celui d'avant
    //auquel cas, ca veut dire que mon tableau n'est pas trie dans l'ordre
    while (av[i])
    {
        nb1 = ft_atoi(av[i]);
        j = i + 1;
        while (av[j])
        {
            nb2 = ft_atoi(av[j]);
            if (nb1 > nb2)
            {
                return (1);
            }
            j++;
        }
        i++;
    }
    ft_printf("Array is already sorted in the ascending nb!\n");
    return (0);
}
