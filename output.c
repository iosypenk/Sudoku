/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:39:37 by iosypenk          #+#    #+#             */
/*   Updated: 2017/11/16 12:39:43 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putnbr(int nb);

void	putchar(char c);

void	result(int **nb)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			putnbr(nb[i][j]);
			putchar(' ');
			j++;
		}
		putnbr(nb[i][j]);
		putchar('\n');
		i++;
	}
}
