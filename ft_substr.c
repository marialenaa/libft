/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:48:46 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/24 07:04:21 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(str = malloc(sizeof(char) * 1)))
			return (NULL);
	}
	else
	{
		if (!(str = malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (j < len && s[start + j])
		{
			str[j] = s[start + j];
			j++;
		}
	}
	str[j] = '\0';
	return (str);
}
