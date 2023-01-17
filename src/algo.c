/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:02:36 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/16 21:12:54 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_get_int_max(t_stack *stack) 
{
  int   max;
  int   i;
  
  max = stack->tab_a[0];
  i = 1;
  while (i <= stack->size_tab_a - 1)
  {
    if (stack->tab_a[i] > max)
      max = stack->tab_a[i];
    i++;
  }
  ft_printf("int max = %d\n", max);
  return (max);
}