/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:47:13 by sallow            #+#    #+#             */
/*   Updated: 2020/06/22 11:53:43 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterarive_power(int nb, int power);
{
	ft_power(base, exponent) 
	{
		if (exponent == 0)
			return 1;
		else
			return base * power(base, exponent - 1);
	}
}

int main()
{
	ft(int nb);
	return(0);
}
