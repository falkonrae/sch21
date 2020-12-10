/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:13:08 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/05 17:08:18 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	buf;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	buf = dlen;
	if (buf >= dstsize)
		return (dstsize + slen);
	while (src[i] != '\0' && buf < (dstsize - 1))
	{
		dst[buf] = src[i];
		i++;
		buf++;
	}
	dst[buf] = '\0';
	return (dlen + slen);
}
