/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:35:15 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/17 13:18:25 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//is used to set a block of memory to zero 
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
	return (temp);
}
/* 
#include <stdio.h>

int	main(void)
{
	char			str[] = "abcdef";
	unsigned int	nbyte;

	nbyte = 4;
	ft_bzero(str, nbyte);
	printf("%s\n", str);
	return (0);
}
 */
/* line22: should it be filled with actually 0 or '0'? */