/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:30:14 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/05 18:09:45 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*mas;
	char	sym;
	int		i;

	i = 0;
	mas = (char *)s;
	sym = (char)c;
	while (mas[i] != '\0')
	{
		if (mas[i] == sym)
			return (&mas[i]);
		i++;
	}
	if (mas[i] == sym)
		return (&mas[i]);
	return (NULL);
}
