/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:22:47 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/20 13:22:47 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (needle[0] == '\0')
		return ((char*)haystack);
	if (haystack[0] == '\0' || len == 0)
		return (NULL);
	nlen = ft_strlen(needle);
	i = 0;
	if (len < nlen)
		return (NULL);
	while (i < len + 1 - nlen)
	{
		if (ft_memcmp(&haystack[i], needle, nlen) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
