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
	smcount = 0;
	if (sm[smcount] == '\0')
		return ((char *)source);
	while (source[count] != '\0' && count < len)
	{
		if (source[count] == sm[smcount])
		{
			while (sm[smcount] != '\0' && source[count + smcount] == sm[smcount] && (count + smcount) < len)
			{
			if (source[count] == sm[0])
			{
			return ((char *)&source[count]);
			}
			smcount++;
			}
		}
		count++;
		smcount = 0;
	}
	return (0);
}

/*    int	main(void)
{
	const char *source = "miaoyorgun";
	const char *sm = "yorgun";
	size_t len = 2;
	char *ret;

	ret = ft_strnstr(source, sm, len);
	printf("%s", ret);
	return (0);
} */