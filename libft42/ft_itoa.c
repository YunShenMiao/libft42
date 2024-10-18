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

char	*ft_strdup(const char *src)
{
	int		strl;
	char	*res;
	int		count;

	strl = ft_strlen(src);
	res = malloc((strl + 1) * sizeof(char));
	count = 0;
	if (res == NULL)
		return (NULL);
	while (src[count] != '\0')
	{
		res[count] = src[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}

char *ft_itoa(int n)
{
    int len;
    int ncopy;
	int sign;
    char *res;

    len = 0;
	sign = 0;
    if (n < 0)
	{
        if (n == -2147483648)
        return ft_strdup("-2147483648");
	n = -n;
	sign = 1;
	}
    ncopy = n;
	while (n > 0)
	{
        n = n / 10;
        len++;
	}
	res = malloc((len + 1 + sign) * sizeof(char));
    if (res == NULL)
    return NULL;
    len = len + sign;
    res[len] = '\0';
	len --;
	while (len > 0)
	{
		res[len] = ncopy % 10 + '0';
		ncopy = ncopy / 10;
		len--;
	}
	if (sign == 1)
	res[0] = '-';
    return(res);
}

#include <stdio.h>
int main()
{
    int n = -2147483648;
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
