/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:03:32 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/18 11:51:32 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '@' && *str <= '[')
		{
			return(1);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "a";

	printf("El resultado es: %d\n", ft_str_is_uppercase(str));
	return (0);
}
