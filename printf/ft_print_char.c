/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:42:12 by machi             #+#    #+#             */
/*   Updated: 2023/11/13 22:01:54 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_char(char c)
{
	int	count;

	count = 0;
	ft_putchar(c);
	count++;
	return (count);
}
