/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:59:37 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/14 14:11:57 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, void *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		if (*((unsigned char *)(s1 + i)) != *((unsigned char *)(s2 + i)))
			return (*((unsigned char *)(s1 + i))
				- (*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}
