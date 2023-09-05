/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:10:14 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/15 12:15:07 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

		letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
