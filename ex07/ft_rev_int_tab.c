/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:21:41 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/08 15:50:55 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int n;

	n = 0;
	while (n < size / 2)
	{
		tmp = tab[n];
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = tmp;
		n++;
	}
}