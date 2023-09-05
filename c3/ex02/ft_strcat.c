/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:12:24 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/19 12:34:17 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*s1;
	char	*s2;

	s1 = dest;
	s2 = src;
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	*s1 = 0;
	return (dest);
}

/*int	main (void)
{
	char	str1[50] = "Pruebame";
	char	str2[] = " esta";

	ft_strcat(str1, str2);
	write(1, str1, sizeof(str1));
	return (0);
}*/
