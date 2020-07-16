/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmgagul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:36:06 by phmgagul          #+#    #+#             */
/*   Updated: 2020/07/16 09:54:28 by phmgagul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	while(x < n && src [x] != '\0')
	{
		dest [x] = src [x];
		x++;
	}
	while(x < n)
	{
		dest [x] = '\0';
		x++;
	}
	return dest;
}
	
