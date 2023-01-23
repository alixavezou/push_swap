/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:02:36 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/23 23:06:10 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_handle_negative(t_stack *stack)
{
  int i;
  int j;
  int count;

  i = 0;
  while (i < stack->size_tab_a)
  {
    j = 0;
    count = 0;
    while (j < stack->size_tab_a)
    {
      if (stack->tab_a[i] > stack->tab_a[j])
      {
        count++;
      }
      j++;
    }
    stack->cpy_tab_a[i] = count;
    i++;
  }
  free(stack->tab_a);
  stack->tab_a = stack->cpy_tab_a;
  return (0);
}

void ft_radix(t_stack *stack)
{
  int i;
  int size;

  i = 0;
  while (i < 32 && ft_stack_sorted(stack))
  {
    size = stack->size_tab_a;
    while (size--)
    {
      if (!(stack->tab_a[0] >> i & 1))
      {
        if (size)
        {
          ft_push_b(stack);
        }
      }
      else
        ft_rotate_a(stack);
    }
    while (!(ft_push_a(stack)))
      ;
    i++;
  }
}
