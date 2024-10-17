/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:25:42 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 14:56:26 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!(c <= '9' && c >= '0'))
		return (0);
	else
		return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char c = '9';
	int x;

	x = ft_isdigit(c);
	printf("%d", x);
	return (0);
} */