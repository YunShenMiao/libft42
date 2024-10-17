/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:16:57 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 01:59:33 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	char	ret;

	ret = (char)c;
	while (*str)
	{
		if (*str == ret)
			return ((char *)str);
		str++;
	}
	if (ret == '\0')
		return ((char *)str);
	return (0);
}

/*
{
	int		count;
	int retcount;
	char	*ret;

	count = 0;
	retcount = 0;
	ret = str;
	while (str[count] != '\0')
	{
		if (str[count] == c)
		{
			while (str[count] != '\0')
			{
			ret[retcount] = str[count];
			retcount++;
			count++;
			}
			ret[retcount] = '\0';
			return(ret);
		}
		count++;
	}
	return (0);
}
 */

/*
{
	int		count;
	char	*ret;
	char	findc;

	count = 0;
	ret = "jjjjjjjjjj";
	while (str[count] != '\0')
	{
		ret = str;
		findc = c;
		if (*str == (char)c)
		{
			while (str[count] != '\0')
			{
				ret[count] = str[count];
				count++;
			}
			return (ret);
		}
		count++;
	}
	return (0);
} */
/*
#include <stdio.h>

int	main(void)
{
	char *str;
	int c;
	char *ret;

	str = "haohaoxiuxi";
	c = 'x';
	ret = ft_strchr(str, c);
	printf("%s", ret);
	return (0);
} */