/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:48:32 by vjacob            #+#    #+#             */
/*   Updated: 2021/01/31 07:54:16 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			ft_putchar(s[i++]);
	return (i);
}

int		ft_putstr_count(char *s, int count)
{
	int		i;

	i = 0;
	while (i < count)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
