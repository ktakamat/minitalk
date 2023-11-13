/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:25:52 by machi             #+#    #+#             */
/*   Updated: 2023/11/13 22:00:22 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	signalhandler(int signal)
{
	static int	i = 0;
	static char	message = 0;

	if (signal == SIGUSR1)
	{
		message |= (1 << i);
	}
	else if (signal == SIGUSR2)
		;
	else
	{
		ft_printf("SIGNAL");
		exit(1);
	}
	i++;
	if (i == 8)
	{
		write(1, &message, 1);
		message = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("%d", getpid());
	if (signal(SIGUSR1, signalhandler) == SIG_ERR)
	{
		ft_printf("error");
		return (1);
	}
	if (signal(SIGUSR2, signalhandler) == SIG_ERR)
	{
		ft_printf("Error\n");
		return (1);
	}
	while (1)
		pause();
}
