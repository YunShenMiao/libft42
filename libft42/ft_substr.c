/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:04:45 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 02:00:49 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	size_t count;
	size_t rescount;

	res = malloc((len + 1)*sizeof(char));
	count = 0;
	rescount = 0;
	if (res == NULL)
	return NULL;
	while (count < start)
	count++;
	while (count < (start+len))
	{
		res[rescount] = s[count];
		rescount++;
		count++;
	}
	res[rescount] = '\0';
	return(res);
}

/*{
	char			*res;
	unsigned int	count;
	unsigned int	lencount;

	count = 0;
	lencount = 0;
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (count < start)
	{
		s++;
		count++;
	}
	while (lencount < len)
	{
		res[lencount] = s[count];
		lencount++;
		count++;
	}
	res[lencount] = '\0';
	return (res);
}*/

int	main(void)
{
	const char *s = "miaomuh";
	unsigned int start = 0;
	size_t len = 2;
	char *res = ft_substr(s, start, len);

	printf("%s", res);
	free(res);
	return(0);
}