/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:19:29 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 01:58:43 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_bzero(void *str, unsigned int nbyte)
{
	unsigned int	count;
	unsigned char	*temp;

	count = 0;
	temp = str;
	while (count < nbyte)
	{
		temp[count] = 0;
		count++;
	}
	return (str);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*mao;

	if (nitems < 1 || size < 1)
		return (NULL);
	mao = malloc(nitems * size);
	if (mao == NULL)
		return (NULL);
	return (ft_bzero(mao, nitems * size));
}

/* int	main(void)
{
	size_t nitems = 2;
	size_t size = sizeof(int);
	void *res;

	res = calloc(nitems, size);
	if (res == NULL)
	printf("%s", "error");
	printf("%s", res);
	free(res);
	return (0);
} */