/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:30:23 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/19 12:37:24 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= '@' || *str >= '[') && (*str <= '`' || *str >= '{'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "eeee4";
    int		result = ft_str_is_alpha(str);

	printf("El resultado de ft_str_is_alpha es: %d\n", result);
	return (0);
}
