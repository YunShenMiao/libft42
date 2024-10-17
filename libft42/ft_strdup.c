/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:07:54 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/17 13:20:15 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		strl;
	char	*res;
	int		count;

	strl = ft_strlen(src);
	res = malloc((strl + 1) * sizeof(char));
	count = 0;
	if (res == NULL)
		return (NULL);
	while (src[count] != '\0')
	{
		res[count] = src[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}
/* 
#include <stdio.h>

int	main(void)
{
	const char* src = "youdianrnan";
	char *res = ft_strdup(src);

	if (res == NULL)
	printf("%s", "error");
	printf("%s", res);
	free(res);
	return(0);
}  */