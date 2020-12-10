/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:34:55 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/23 11:49:50 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_of_s(char const *s, char c)
{
	int		size;

	size = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			size++;
			while (*s && *s != c)
				s++;
		}
	}
	return (size);
}

static size_t	size_of_string(char const *s, char c, size_t count)
{
	size_t		size;
	size_t		i;

	i = count;
	size = 0;
	while (s[i] == c && *s)
	{
		i++;
	}
	while (s[i] != c && (s[i]))
	{
		size++;
		i++;
	}
	return (size);
}

static void		*free_array(char **array)
{
	while (*array != NULL)
	{
		free(*array);
		array++;
	}
	free(array);
	return (NULL);
}

static size_t	jump_to(const char *s, char c, size_t count)
{
	while (s[count] != c && s[count])
		count++;
	while (s[count] == c && s[count])
		count++;
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		size;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[count] == c && s != '\0')
		count++;
	size = size_of_s(s, c);
	if ((array = (char **)malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	while (size > 0)
	{
		array[i] = ft_substr(s, count, size_of_string(s, c, count));
		if (array[i] == NULL)
			return (free_array(array));
		count = jump_to(s, c, count);
		size--;
		i++;
	}
	array[i] = NULL;
	return (array);
}
