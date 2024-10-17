/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:15:12 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/15 01:46:57 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char const *stri)
{
	int	count;

	count = 0;
	while (stri[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* #include <stdio.h>

int	main(void)
{
	char *stri = "a";
	int x;

	x = ft_strlen(stri);
	printf("%d", x);
	return (0);
} */