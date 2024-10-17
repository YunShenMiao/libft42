/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:24:02 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 02:00:31 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		strl1;
	int		strl2;
	int		count;
	int		count2;

	strl1 = ft_strlen(s1);
	strl2 = ft_strlen(s2);
	join = malloc((strl1 + strl2 + 1) * sizeof(char));
	count = 0;
	count2 = 0;
	while (s1[count] != '\0')
	{
		join[count] = s1[count];
		count++;
	}
	while (s2[count2] != '\0')
	{
		join[count] = s2[count2];
		count++;
		count2++;
	}
	join[count] = '\0';
	return (join);
}

/* #include <stdio.h>
int	main(void)
{
	char const *s1 = "Bana ";
	char const *s2 = "ne?";
	char *joined = ft_strjoin(s1, s2);

	printf("%s", joined);
	free(joined);
	return(0);
} */