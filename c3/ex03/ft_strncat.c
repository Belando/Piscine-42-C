/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:54:29 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/18 10:48:28 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptrdest;
	char			*ptrsrc;
	unsigned int	i;

	i = 0;
	ptrdest = dest;
	ptrsrc = src;
	while (*ptrdest)
		ptrdest++;
	while (i < nb && *ptrsrc)
	{
		*ptrdest = *ptrsrc;
		ptrsrc++;
		ptrdest++;
		i++;
	}
	*ptrdest = 0;
	return (dest);
}

/*int	main(void)
{
	char	str1[40] = "Sisisi,";
	char	str2[] = " puede que si";

	ft_strncat(str1, str2, 5);
	printf("%s\n", str1);
	return(0);
}*/
