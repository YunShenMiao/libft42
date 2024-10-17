/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:12:28 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/17 12:04:27 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
	int c = 'A';
	int x;

	x = ft_tolower(c);
	printf("%c", x);
	return (0);
} */