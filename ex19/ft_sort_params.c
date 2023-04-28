/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmina-ni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:58:47 by tmina-ni          #+#    #+#             */
/*   Updated: 2023/04/26 10:49:38 by tmina-ni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swp_str(char *s1[], char *s2[]);

void	ft_print_str(char *str);

int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swp_str(&argv[i], &argv[j]);
			j++;
		}
		ft_print_str(argv[i]);
		i++;
	}
	return (0);
}

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_swp_str(char *s1[], char *s2[])
{
	char	*temp;

	temp = s1[0];
	s1[0] = s2[0];
	s2[0] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
