/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:57:11 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/13 17:36:24 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str <= '`' || *str >= '{')
		{
			return(1);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "A";

	printf("El resultado es: %d\n", ft_str_is_lowercase(str));
	return (0);
}
