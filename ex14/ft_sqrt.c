/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:42:37 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/04/18 17:13:35 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	max_int_root;

	i = 1;
	max_int_root = 46340;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= max_int_root)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}