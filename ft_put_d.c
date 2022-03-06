/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:49:45 by igbocha3          #+#    #+#             */
/*   Updated: 2022/02/28 10:04:02 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Десятичное число целого типа со знаком

#include "ft_printf.h"

int	ft_put_d(int d)
{
	long long	s;

	s = d;
	if (s < 0)
	{
		ft_put_c('-');
		s *= -1;
	}
	if (s >= 10)
		ft_put_d(s / 10);
	ft_put_c((s % 10) + 48);
	return (ft_len_d(d));
}
