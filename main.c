/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:38:51 by iosypenk          #+#    #+#             */
/*   Updated: 2017/11/16 12:38:59 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	putchar(char c);

void	putstr(char *str);

int		ft_strlen(char *str);

void	input(char **argv, int **nb);

int		rush(int **nb);

void	result(int **nb);

int		check_errors(char **argv)
{
	int i;
	int j;
	int c;

	i = 1;
	while (i <= 9)
	{
		if (ft_strlen(argv[i]) != 9)
			return (1);
		j = 0;
		while (j < 9)
		{
			c = argv[i][j++];
			if ((c < '1' || c > '9') && c != '.')
				return (1);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int **nb;

	if (argc != 10)
	{
		putstr("Error\n");
		return (0);
	}
	if (check_errors(argv) == 1)
	{
		putstr("Error\n");
		return (0);
	}
	nb = (int **)malloc(sizeof(int *) * 9);
	i = 0;
	while (i < 9)
		nb[i++] = (int *)malloc(sizeof(int) * 9);
	input(argv, nb);
	if (rush(nb))
	{
		putstr("Error\n");
		return (0);
	}
	result(nb);
	return (0);
}
