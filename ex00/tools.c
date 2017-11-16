/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilutskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 20:20:20 by ilutskyi          #+#    #+#             */
/*   Updated: 2017/10/01 20:20:21 by ilutskyi         ###   ########.fr       */
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
