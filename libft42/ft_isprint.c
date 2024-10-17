/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:04:37 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 14:59:31 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	else
		return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char c = 1;
	int x;

	x = ft_isprint(c);
	printf("%d", x);
	return (0);
} */