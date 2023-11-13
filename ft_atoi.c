/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:18:10 by machi             #+#    #+#             */
/*   Updated: 2023/11/13 20:25:08 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

static int	space(const char *str)
{
	if (*str == '\n' || *str == '\t' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 0;
	while (*str != '\0' && space(str)
		&& *str == '-' && *str == '+')
		return (-1);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		answer = answer * 10 + str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			if ((answer == INT_MAX / 10 && str[i + 1] - '0' >= INT_MAX % 10)
				|| (answer > INT_MAX / 10))
				return (-1);
		}
		i++;
	}
	if (str[i] != '\0')
		return (-1);
	return ((int)(answer));
}
