/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:02:36 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/18 20:16:59 by aavezou          ###   ########.fr       */
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
  return (max);
}

int ft_get_int_min(t_stack *stack)
{
    int min;
    int i;

    min = stack->tab_a[0];
    i = 1;
    while (i <= stack->size_tab_a - 1)
    {
        if (stack->tab_a[i] < min)
            min = stack->tab_a[i];
        i++;
    }
    return (min);
}

int ft_modulo(t_stack *stack)
{
  int i;
  int tempo;

  i = stack->tab_a[0];
  tempo = 0;
  if (i < 0)
    i = i * (-1);
  while (i >= 10)
  {
    tempo = i % 10;
    i = i / 10;
  }
  i = i % 10;
  return (0);
}

