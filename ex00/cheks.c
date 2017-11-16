/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilutskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 20:18:46 by ilutskyi          #+#    #+#             */
/*   Updated: 2017/10/01 20:18:48 by ilutskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in_square(int val, int i, int j, int **nb)
{
	int x;
	int y;
	int z;

	z = 3 * (i / 3) + j / 3;
	x = 3 * (z / 3);
	y = 3 * (z % 3);
	i = x;
	while (i < x + 3)
	{
		j = y;
		while (j < y + 3)
		{
			if (val == nb[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_in_row(int val, int i, int **nb)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (val == nb[i][j])
			return (1);
		j++;
	}
	return (0);
}

int	is_in_col(int val, int j, int **nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (val == nb[i][j])
			return (1);
		i++;
	}
	return (0);
}
