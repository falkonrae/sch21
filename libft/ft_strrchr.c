/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:10:10 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/05 17:28:15 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*mas;
	char	sym;
	int		i;

	i = ft_strlen(s);
	mas = (char *)s;
	sym = (char)c;
	while (i >= 0)
	{
		if (mas[i] == sym)
			return (&mas[i]);
		i--;
	}
	return (0);
}
