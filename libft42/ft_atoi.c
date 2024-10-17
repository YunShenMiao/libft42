/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:12:30 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/09 17:15:09 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_convert(int cneg, int res)
{
	if (cneg == 1)
		res = -res;
	return (res);
}

int	ft_atoi(const char *str)
{
	int	count;
	int	cneg;
	int	res;

	count = 0;
	cneg = 0;
	res = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\n'
		|| str[count] == '\v' || str[count] == '\f' || str[count] == '\r')
		count++;
	if (str[count] == '-')
	{
		cneg++;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = res * 10 + (str[count] - '0');
		count++;
	}
	return (ft_convert(cneg, res));
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "  173a9-aad";
	int		x;

	x = ft_atoi(str);
	printf("%d", x);
	return (0);
}
 */
/*     if (str[count] < 1)
	return(0);         necessary? ++ general need for return(0)? */