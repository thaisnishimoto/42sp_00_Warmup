/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:07:54 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/04/26 10:52:59 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	ptr = malloc(range * 4);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
