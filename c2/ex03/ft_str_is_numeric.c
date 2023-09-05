/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:49:56 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/18 16:51:53 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str <= '/' || *str >= ':')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = " ";

	printf("El resultado es: %d\n", ft_str_is_numeric(str));
	return (0);
}
