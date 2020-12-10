/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:30:37 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/04 09:04:20 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char *d;
	unsigned char symbol;

	d = (unsigned char *)dest;
	symbol = (unsigned char)c;
	while (n > 0)
	{
		*d = symbol;
		d++;
		n--;
	}
	return (dest);
}
