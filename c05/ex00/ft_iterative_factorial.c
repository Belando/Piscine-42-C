/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:13:10 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/27 11:20:46 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}
