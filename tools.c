/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:39:52 by iosypenk          #+#    #+#             */
/*   Updated: 2017/11/16 12:40:01 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	while (*str)
		putchar(*str++);
}

void	putnbr(int nb)
{
	putchar(nb + '0');
}

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*(str + l))
		l++;
	return (l);
}
