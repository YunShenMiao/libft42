/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:25:01 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 14:04:15 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int d, unsigned int n)
{
	unsigned char	*a;
	unsigned int	count;
	unsigned char	ex;

	ex = (unsigned char)d;
	a = str;
	count = 0;
	while (count < n)
	{
		a[count] = ex;
		count++;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
 char str[] = "abcdefgh";
 int d = '-';
should it be char or int? (value c(converted to an unsigned char))
 unsigned int n = 7;
 char *arr;

arr = ft_memset(str, d, n);
printf("%s\n", arr);
return(0);
} */