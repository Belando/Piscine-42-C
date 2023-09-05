/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:04:19 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/19 11:38:37 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int	main(int argc, char *argv[])
{
	char			*str1 = argv[1];
	char			*str2 = argv[2];
	unsigned int	n = atoi(argv[3]);
	int				result = ft_strncmp(str1, str2, n);

	if (result == 0)
		printf("Los carácteres comparados son iguales. \n");
	else if (result <0)
		printf("Los carácteres comparados de str1 son menores. \n");
	else
		printf("Los carácteres comparados de str1 son mayores. \n");
	return (0);
}*/
