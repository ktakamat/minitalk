/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minitalk.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakamat <ktakamat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:27:07 by machi             #+#    #+#             */
/*   Updated: 2023/11/13 22:31:40 by ktakamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINITALK_H
# define FT_MINITALK_H

# include <libc.h>
# include <unistd.h>
# include <stdlib.h>
# include <inttypes.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <sys/types.h>
# include <signal.h>

void		ft_putchar(char c);
int			ft_print_char(char c);
int			count_hex(unsigned int n);
void		ft_puthex(unsigned int n, const char format);
int			ft_print_hex(unsigned int n, const char format);
int			count_digits(int n);
void		ft_putnbr(int n);
int			ft_print_nbr(int n);
int			count_ptr(uintptr_t n);
void		ft_putptr(uintptr_t n);
int			ft_print_ptr(unsigned long long ptr);
int			ft_print_str(char *str);
int			count_udigits(unsigned int n);
void		ft_putunbr(unsigned int n);
int			ft_print_unbr(unsigned int n);
int			parse_format(va_list *ap, const char *itr);
int			ft_printf(const char *format, ...);
void		send_char(const pid_t pid, char c);
void		my_send(const pid_t pid, char *str);
void		signalhandler(int signal);
static int	space(const char *str);
int			ft_atoi(const char *str);

#endif
