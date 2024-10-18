/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:11:18 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/17 15:47:51 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *source, const char *sm, size_t len)
{
	size_t		count;
	size_t		smcount;

	count = 0;
	if (sm[0] == '\0')
		return ((char *)source);
	while (source[count] != '\0' && count < len)
	{
		smcount = 0;
			while (sm[smcount] != '\0' && (count + smcount) < len && 
			source[count + smcount] == sm[smcount])
			{
				smcount++;
			}
			if (sm[smcount] == '\0')
			return ((char *)&source[count]);
		count++;
	}
	return NULL;
}

    int	main(void)
{
	const char *source = "miyaoyorgun";
	const char *sm = "yor";
	size_t len = 7;
	char *ret;

	ret = ft_strnstr(source, sm, len);
	printf("%s", ret);
	return (0);
}