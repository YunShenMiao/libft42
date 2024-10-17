/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:33:13 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/07 19:46:18 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
				&& c <= '9')))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char c = '0';
	int x;

	x = ft_isalnum(c);
	printf("%d", x);
	return(0);
} */