/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:03:32 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/17 13:09:34 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    int len;
    int ncopy;
    int count;
	int sign;
    char *res;

    len = 0;
	sign = 0;
	ncopy = n;
    if (n < 0)
	{
    ncopy = -n;
	n = -n;
	sign = 1;
	}
	while (n > 0)
	{
        n = n / 10;
        len++;
	}
	res = malloc((len + 1 + sign) * sizeof(char));
	res[len + sign] = '\0';
	len --;
	while (len > (0 + sign))
	{
		res[len] = ncopy % 10 + '0';
		ncopy = ncopy / 10;
		len--;
	}
	if (sign == 1)
	res[0] = '-';
    printf("%s", res);
    return(res);
}

#include <stdio.h>
int main()
{
    int n = -3571;
    char *res = ft_itoa(n);
    printf("%s", res);
    free(res);
    return(0);
}


/*     while (n > 0)
    {
        temp[len] = n % 10 + '0';
        n = n / 10;
        len++;
    } */
/*     temp[len] = '\0';
    printf("%s", temp);
    resc = ft_strl(temp);
    printf("%d", resc);
    res = malloc((resc + 1) * sizeof(char));
    len = 0;
    while (resc > 0)
    {
        res[len] = temp[resc -1];
        len++;
        resc--;
    } */
