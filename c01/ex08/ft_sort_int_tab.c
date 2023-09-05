/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:54:03 by fbelando          #+#    #+#             */
/*   Updated: 2023/07/14 14:57:14 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		if (tab[j] < tab[i])
		{
			aux = tab[j];
			tab[j] = tab[i];
			tab[i] = aux;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
