/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:45:08 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 02:01:36 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t nbytes)
{
	char		ret;
	size_t		count;
	const char* strt;

	ret = (char)c;
	count = 0;
	strt = str;
	if (ret == '\0')
	return ((char *)&strt[count]);
	while (strt[count] != '\0' && count < nbytes)
	{
		if (strt[count] == ret)
			return ((char *)&strt[count]);
		count++;
	}
	return (0);
}

/*
{
	unsigned int	count;
	unsigned int	count2;
	const char		*strcp;
	const void		*strret;

	count = 0;
	strcp = str;
	while (count < nbytes && strcp[count] != c)
		count++;
	if (strcp[count] == c)
	{
		count2 = count;
		while (strcp[count2] != '\0')
		{
			strret[count2] = strcp[count2];
			count2++;
		}
		return (strret);
	}
	else
		return (0);
} */

int	main(void)
{
	const char *str = "bbbacaa";
	int c = 'c';
	unsigned int nbytes = 4;
	const char *res = ft_memchr(str, c, nbytes);

	printf("%s", res);
	return (0);
}