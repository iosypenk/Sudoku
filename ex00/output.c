/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilutskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 20:19:42 by ilutskyi          #+#    #+#             */
/*   Updated: 2017/10/01 20:19:43 by ilutskyi         ###   ########.fr       */
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
