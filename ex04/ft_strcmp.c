/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmgagul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:06:58 by phmgagul          #+#    #+#             */
/*   Updated: 2020/07/17 09:30:01 by phmgagul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int sum_one = 0;
	int sum_two = 0;
	unsigned int x = 0;
	while(x < n)
	{
		sum_one += s1[x]
			x++;
	}
	x = 0;
	while(x < n )
	{
		sum_two += s2[x]
			x++;
	}
	return sum_one - sum_two;
}
