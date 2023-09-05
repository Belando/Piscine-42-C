/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:51:34 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/18 13:08:33 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return (count);
}

int	main(void)
{
	char	str[12] = "Hola, mundo!";

	printf ("La longitud de la cadena es: %d\n", ft_strlen(str));
	return (0);
}
