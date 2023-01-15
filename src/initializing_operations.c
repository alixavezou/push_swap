/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializing_operations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:12:41 by aavezou           #+#    #+#             */
/*   Updated: 2023/01/15 21:18:30 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_swap_a(t_stack *stack)
{
    int tempo;

    if (stack->size_tab_a < 2)
    {
        ft_printf("Nothing to swap with!\n");
        return (1);
    }
    tempo = stack->tab_a[0]; //ds mon tempo de mets le premier element dc i est vide
    stack->tab_a[0] = stack->tab_a[1];//le deuxieme element devient le premier et j est vide
    stack->tab_a[1] = tempo;//le 1er element devient le 2e
    return (0);
}

int ft_swap_b(t_stack *stack)
{
    int tempo;

    if (!stack->tab_b || stack->size_tab_b < 2)
    {
        ft_printf("Tab B is empty or doesn't have enough elements to swap with!\n");
        return (1);
    }
    tempo = stack->tab_b[0];
    stack->tab_b[0] = stack->tab_b[1];
    stack->tab_b[1] = tempo;
    return (0);
}

int ft_swap_a_and_b(t_stack *stack)
{
    int tempo_a;
    int tempo_b;

    if (stack->size_tab_a < 2 || !stack->tab_b || stack->size_tab_b < 2)
    {
        ft_printf("Error!\n");
        return (1);
    }
    tempo_a = stack->tab_a[0];
    tempo_b = stack->tab_b[0];
    stack->tab_a[0] = stack->tab_a[1];
    stack->tab_b[0] = stack->tab_b[1];
    stack->tab_a[1] = tempo_a;
    stack->tab_b[1] = tempo_b;
    return (0);
}

int ft_rotate_a(t_stack *stack) //le 1er element devient le dernier
{
    int tempo;
    int i;

    i = 0;
    if (stack->size_tab_a < 2)
    {
        ft_printf("Nothing to rotate with!\n");
        return (1);
    }
    tempo = stack->tab_a[0];
    while (i < stack->size_tab_a - 1)
    {
        stack->tab_a[i] = stack->tab_a[i + 1];
        i++;
    }
    stack->tab_a[stack->size_tab_a - 1] = tempo;
    return (0);
}

int ft_rotate_b(t_stack *stack) //le 1er element devient le dernier
{
    int tempo;
    int i;

    i = 0;
    if (stack->size_tab_b < 2)
    {
        ft_printf("Nothing to rotate with!\n");
        return (1);
    }
    tempo = stack->tab_b[0];
    while (i < stack->size_tab_b - 1)
    {
        stack->tab_b[i] = stack->tab_b[i + 1];
        i++;
    }
    stack->tab_b[stack->size_tab_b - 1] = tempo;
    return (0);
}

int ft_rotate_a_and_b(t_stack *stack)//le 1er element devient le dernier
{
    int tempo_a;
    int tempo_b;
    int i;
    int j;
    
    tempo_a = stack->tab_a[0];
    tempo_b = stack->tab_b[0];
    i = 0;
    j = 0;
    if (!stack->tab_b || stack->tab_b < 2 || stack->tab_a < 2)
    {
        ft_printf("Error!\n");
        return (1);
    }
    while (i < stack->size_tab_a - 1 && j < stack->size_tab_b - 1)
    {
        stack->tab_a[i] = stack->tab_a[i + 1];
        stack->tab_b[j] = stack->tab_b[j + 1];
        i++;
        j++;
    }
    stack->tab_a[0] = tempo_a;
    stack->tab_b[0] = tempo_b;
    return (0);
}

int ft_reverse_rotate_a(t_stack *stack) //le dernier element devient le premier
{
    int tempo;
    int i;

    i = stack->size_tab_a - 1;
    if (stack->size_tab_a < 2)
    {
        ft_printf("Nothing to rotate with!\n");
        return (1);
    }
    tempo = stack->tab_a[stack->size_tab_a - 1];
    while (i > 0)
    {
        stack->tab_a[i] = stack->tab_a[i - 1];//chaque element aura la valeur de celui d'avant
        i--;
    }
    stack->tab_a[0] = tempo; //qd on arrive sur tab[0] alors on lui donne la valeur stockee
    return (0);
}

int ft_reverse_rotate_b(t_stack *stack) //le dernier element devient le premier
{
    int tempo;
    int i;
    
    i = stack->size_tab_b - 1;
    if (!stack->tab_b || stack->size_tab_b < 2)
    {
        ft_printf("Tab B is empty or doesn't have enough elements to rotate with!\n");
        return (1);
    }
    tempo = stack->tab_b[stack->size_tab_b - 1];
    while (i > 0)
    {
        stack->tab_b[i] = stack->tab_b[i - 1];//chaque element aura la valeur de celui d'avant
        i--;
    }
    stack->tab_b[0] = tempo; //qd on arrive sur tab[0] alors on lui donne la valeur stockee
    return (0);
}

int ft_reverse_rotate_a_and_b(t_stack *stack) //le dernier element devient le premier
{
    int tempo_a;
    int tempo_b;
    int i;
    int j;

    i = stack->size_tab_a - 1;
    j = stack->size_tab_b - 1;
    if (stack->size_tab_a < 2 || !stack->tab_b || stack->size_tab_b < 2)
    {
        ft_printf("Error!\n");
        return (1);
    }
    tempo_a = stack->tab_a[stack->size_tab_a - 1];
    tempo_b = stack->tab_b[stack->size_tab_b - 1];
    while (i > 0 && j > 0)
    {
        stack->tab_a[i] = stack->tab_a[i - 1];
        stack->tab_b[j] = stack->tab_b[j - 1];
        i--;
        j--;
    }
    stack->tab_a[0] = tempo_a;
    stack->tab_b[0] = tempo_b;
    return (0);
}

int ft_push_a(t_stack *stack)//on prend le premier element de b et on le met en haut de a
{
    int *ptr_b;
    
    if (!stack->tab_b)
    {
        ft_printf("Error! B is empty\n");
        return (1);
    }
    stack->tab_a[0] = stack->tab_b[0];
    ptr_b = &stack->tab_b[1];
    stack->tab_b = ptr_b;
    stack->size_tab_a++;
    stack->size_tab_b--;
    return (0);
}

int ft_push_b(t_stack *stack)//on prend le 1er element de A et on le met en haut de B
{
    int *ptr_a;

    if (!stack->tab_a)
    {
        ft_printf("Error! A is empty\n");
        return (1);
    }
    stack->tab_b[0] = stack->tab_a[0];
    ptr_a = &stack->tab_a[1];
    stack->tab_a = ptr_a;
    stack->size_tab_a--;
    stack->size_tab_b++;
    return (0);
}
