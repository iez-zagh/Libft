/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:31:28 by iez-zagh          #+#    #+#             */
/*   Updated: 2023/11/10 18:07:10 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	man3ref(const char *str, int sign, int i)
{
	long int	res2;

	res2 = 0;
	while (ft_isdigit(str[i]))
	{
		res2 = res2 * 10 + (str[i] - '0');
		if (res2 < 0 && sign == 1)
			return (-1);
		else if (res2 < 0 && sign == -1)
			return (0);
		i++;
	}
	return (res2 * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	sign;

	i = 0;
	r = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (man3ref(str, sign, i));
}
