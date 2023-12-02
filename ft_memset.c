/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:23:43 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/14 10:58:18 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t len)
{
	size_t	i;
	char	*d;
	char	s;

	d = str;
	s = (char)value;
	i = 0;
	while (i < len)
	{
		d[i] = s;
		i++;
	}
	return (str);
}
