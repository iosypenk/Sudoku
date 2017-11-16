/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:39:10 by iosypenk          #+#    #+#             */
/*   Updated: 2017/11/16 12:39:16 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_in_square(int val, int i, int j, int **nb);

int	is_in_row(int val, int i, int **nb);

int	is_in_col(int val, int j, int **nb);

int	check_put_cell(int i, int j, int **nb)
{
	int k;
	int l;
	int fix;
	int index;

	if (nb[i][j] != 0)
		return (0);
	k = 0;
	index = 0;
	while (++k <= 9)
	{
		l = is_in_square(k, i, j, nb);
		l = l || is_in_row(k, i, nb);
		l = l || is_in_col(k, j, nb);
		if (!l)
		{
			index++;
			fix = k;
		}
	}
	if (index == 1)
		return (fix);
	return (0);
}

int	count_cells(int **nb)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (!nb[i][j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	xrush(int **nb, int count_iteration)
{
	int i;
	int j;
	int count;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			count = check_put_cell(i, j, nb);
			if (count)
				nb[i][j] = count;
			j++;
		}
		i++;
	}
	if (count_iteration > 241)
	{
		return (1);
	}
	count = count_cells(nb);
	if (count == 0)
		return (0);
	return (xrush(nb, count_iteration + 1));
}

int	rush(int **nb)
{
	int count;

	count = count_cells(nb);
	(xrush(nb, 81 - count));
	return (xrush(nb, 81 - count));
}
