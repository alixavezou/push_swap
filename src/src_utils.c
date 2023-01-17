/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 02:05:23 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/16 16:43:47 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_print_tab(int *tab, int size_tab, char c)
{
    int i;
    for (i = 0; i < size_tab; i++) 
    {
        printf("tab %c = %d\n", c, tab[i]);
    }
    printf("\n");
}