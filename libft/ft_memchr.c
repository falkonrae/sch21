/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:14:36 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/04 15:10:36 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	w;

	p = (unsigned char *)s;
	w = (unsigned char)c;
	while (n > 0)
	{
		if (*p == w)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
