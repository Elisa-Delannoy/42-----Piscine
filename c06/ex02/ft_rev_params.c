/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:52:13 by edelanno          #+#    #+#             */
/*   Updated: 2024/07/29 09:52:23 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	while (argv[i - 1] && i > 1)
	{
		j = 0;
		while (argv[i - 1][j] != '\0')
		{
			write (1, &argv[i - 1][j], 1);
			j++;
		}
		write (1, "\n", 1);
		j = 0;
		i--;
	}
	return (0);
}
