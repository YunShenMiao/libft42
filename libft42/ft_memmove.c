/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:11:01 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 02:01:46 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *source, size_t nbytes)
{
	unsigned int	count;
	char			*dtemp;
	const char		*stemp;

	count = 0;
	dtemp = dest;
	stemp = source;
	if (nbytes == 0)
		return (dest);
	else if (dest == NULL && source == NULL)
		return (NULL);
	else if (dest < source || dest >= source + nbytes)
	{
		while (count < nbytes)
		{
			dtemp[count] = stemp[count];
			count++;
		}
	}
	else
	{
		count = nbytes;
		while (count > 0)
		{
			dtemp[count - 1] = stemp[count - 1];
			count--;
		}
	}
	return (dest);
}

/*
{
	unsigned int	count;
	unsigned int	count2;
	char			*tempd;
	const char		*temps;

	count = 0;
	tempd = dest;
	temps = source;
	if (dest > source)
	{
		while (count < nbytes)
		{
			tempd[count] = temps[count];
			count++;
		}
	}
	else
	{
		while (tempd[count] != '\0')
			count++;
		while (temps[count] != '\0')
			count++;
		count2 = nbytes;
		while (count2 > 0)
			tempd[count] = temps[count];
		count--;
		count2--;
	}
	tempd[count] = '\0';
	return (dest);
} */

/* int	main(void)
{
	char source[] = "Miaomuh";
	char dest[] = "Mixx";
	size_t nbytes = 4;

	ft_memmove(dest, source, nbytes);
	printf("%s", dest);
	return (0);
} */