/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:53:06 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/15 12:14:43 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/*int	main(void)
{
	char	micaracter;

	micaracter = 'A';
	ft_putchar
		(micaracter);
	return (0);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
