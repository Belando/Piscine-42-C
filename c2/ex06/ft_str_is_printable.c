/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:11:38 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/13 17:45:15 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			return(1);
		}
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "A";

	printf("El resultado es: %d\n", ft_str_is_printable(str));
	return (0);
}*/
