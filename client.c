/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakamat <ktakamat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:16:44 by machi             #+#    #+#             */
/*   Updated: 2023/11/13 22:39:14 by ktakamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	send_char(const pid_t pid, char c)
{
	int	digit;

	digit = 0;
	while (digit <= 7)
	{
		if (c & (1 << digit))
		{
			usleep(800);
			if (kill(pid, SIGUSR1) == -1)
			{
				ft_printf("Error\n");
				exit(1);
			}
		}
		else
		{
			usleep(800);
			if (kill(pid, SIGUSR2) == -1)
			{
				ft_printf("Error\n");
				exit(1);
			}
		}
		digit++;
	}
}

void	my_send(const pid_t pid, char *str)
{
	while (*str)
	{
		send_char(pid, *str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
		return (1);
	pid = ft_atoi(argv[1]);
	my_send(pid, argv[2]);
}
