/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:55:13 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/18 11:03:05 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

/*int	main(void)
{
	char	str1[] = "hola";
	char	str2[] = "hola";

	printf("Resultado: %d\n", ft_strcmp(str1,str2));

	if (ft_strcmp(str1, str2) == 0)
		printf("ambos son iguales");
	else if(ft_strcmp(str1, str2) > 0)
		printf("s1 es mayor que s2\n");
	else if(ft_strcmp(str1, str2) < 0)
		printf("s2 es mayor que s1\n");
	return (0);
}*/
