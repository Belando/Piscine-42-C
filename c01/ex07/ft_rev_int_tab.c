/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:59:08 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/14 14:55:46 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	while (i < size / 2)
	{
		rev = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = rev;
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = sizeof(tab) / sizeof(tab[0] 

	printf("Array original: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
	ft_rev_int_tab(tab, size);
	printf("Array invertido: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}
