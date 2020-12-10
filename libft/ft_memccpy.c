/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:42:41 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/23 13:30:02 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*w;
	unsigned char	symbol;

	p = (unsigned char *)dst;
	w = (unsigned char *)src;
	symbol = (unsigned char)c;
	while (n > 0)
	{
		*p = *w;
		p++;
		w++;
		n--;
		if (*(p - 1) == symbol)
			return (p);
	}
	return (NULL);
}
