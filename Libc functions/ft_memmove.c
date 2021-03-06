/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:09:57 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/18 19:45:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	if (!dst && !src && len)
		return (NULL);
	i = -1;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (tmp_dst > tmp_src)
		while (len--)
			tmp_dst[len] = tmp_src[len];
	else if (tmp_dst < tmp_src)
		while (++i < len)
			tmp_dst[i] = tmp_src[i];
	return (dst);
}
