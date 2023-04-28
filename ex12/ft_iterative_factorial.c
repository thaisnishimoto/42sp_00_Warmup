/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:27:27 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/04/20 18:04:05 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb > 12)
		return (0);
	else if (nb >= 0)
	{
		factorial = 1;
		while (nb >= 1)
		{
			factorial = nb * factorial;
			nb--;
		}
		return (factorial);
	}
	else
		return (0);
}
