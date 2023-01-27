/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 02:05:23 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/23 23:13:41 by aavezou          ###   ########.fr       */
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

long	ft_long_atoi(const char *str)
{
	long	i;
	long	nb;
	long	signe;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signe = signe * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * signe);
}
