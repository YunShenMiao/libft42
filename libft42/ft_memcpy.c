/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:25:58 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 15:17:38 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *source, size_t nbytes)
{
	unsigned int	count;
	char			*dtemp;
	const char		*stemp;

	count = 0;
	dtemp = dest;
	stemp = source;
	if (nbytes == 0)
		return (dest);
	if (dest == NULL && source == NULL)
		return (NULL);
	while (count < nbytes)
	{
		dtemp[count] = stemp[count];
		count++;
	}
	return (dest);
}
/*
int	main(void)
{
	char source[] = "oepoep";
	char dest[100];
	size_t nbytes = 0;

	ft_memcpy(dest, source, nbytes);
	printf("%s", dest);
	return (0);
} */