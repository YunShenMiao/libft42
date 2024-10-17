/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:04:36 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/11 14:59:05 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (c);
}

/* #include <stdio.h>

int	main(void)
{
   char c = 'P';
   int x;

   x = ft_isalpha(c);
   printf("%d", x);
   return (0);
} */