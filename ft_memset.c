/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:51:28 by mgallizz          #+#    #+#             */
/*   Updated: 2020/12/01 19:02:58 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b_cpy;

	b_cpy = (unsigned char*)b;
	while(--len)
	{
		*b_cpy = (unsigned char)c;
		b_cpy++;
	}
	return (b);
}
