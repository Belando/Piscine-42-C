/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:15:49 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/19 14:03:10 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	j;	
	int	i;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if (i == 0 && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 'a' - 'A';
		else if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
			i = 0;
		else
			i++;
		j++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char	*result = ft_strcapitalize(str);

	printf("%s\n", result);
	return (0);
}
