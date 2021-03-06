/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:31:03 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/27 15:18:39 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Copies the character c to the first n characters of the string pointed to, by 
the argument dest.*/

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;
	char	*b;

	b = dest;
	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
