/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwardeng <jwardeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:39:13 by jwardeng          #+#    #+#             */
/*   Updated: 2024/10/17 12:08:03 by jwardeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int ft_strlen(char const *stri)
{
    int count;

    count = 0;
    while (stri[count] != '\0')
    {
        count++;
    }
    return (count);
}
int ft_beg(char const *s1, char const *set)
{
    int begin;
    int count;

    begin = 0;
    count = 0;
    while (set[count] != '\0')
    {
        if (s1[begin] == set[count])
        {
            begin++;
            count = -1;
        }
        count++;
    }
    return (begin);
}

int ft_end(char const *s1, char const *set)
{
    int end;
    int count;
    int sstrl;

    end = 0;
    count = 0;
    sstrl = ft_strlen(s1);
    while (set[count] != '\0')
    {
        if (s1[sstrl - 1] == set[count])
        {
            end++;
            count = -1;
            sstrl--;
        }
        count++;
    }
    return (end);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     begin;
    int     end;
    int     count;
    char    *res;
    int     begin2;

    if (*s1 == '\0')
    {
        res = malloc(1);
        res[0] = '\0';
        return(res);
    }
    begin = ft_beg(s1, set);
    end = ft_end(s1, set);
    res = malloc((ft_strlen(s1) - end - begin + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    count = 0;
    begin2 = begin;
    while (count < (ft_strlen(s1) - end - begin2))
    {
        res[count] = s1[begin];
        count++;
        begin++;
    }
    res[count] = '\0';
    return (res);
}

#include <stdio.h>

int main(void)
{
    char const *s1 = "";
    char const *set = "hjk";
    char *trimmed = ft_strtrim(s1, set);

    printf("%s", trimmed);
    free(trimmed);
    return (0);
} 



/* int	ft_beg(char const *s1, char const *set)
{
	int	begin;
	int	count;

	begin = 0;
	count = 0;
	while (set[count] != '\0')
	{
		if (s1[begin] == set[count])
		{
			begin++;
			count = -1;
		}
		count++;
	}
	return (begin);
}

int	ft_end(char const *s1, char const *set)
{
	int	end;
	int	count;
	int	sstrl;

	end = 0;
	count = 0;
	sstrl = ft_strlen(s1);
	while (set[count] != '\0')
	{
		if (s1[sstrl - 1] == set[count])
		{
			end++;
			count = -1;
			sstrl--;
		}
		count++;
	}
	return (end);
}

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	int		count;
	char	*res;
	int		begin2;

	begin = ft_beg(s1, set);
	end = ft_end(s1, set);
	res = malloc((ft_strlen(s1) - end - begin + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	count = 0;
	begin2 = begin;
	while (count < (ft_strlen(s1) - end - begin2))
	{
		res[count] = s1[begin];
		count++;
		begin++;
	}
	res[count] = '\0';
	return (res);
} */
/*
char	*ft_cutbeg(char const *s1, char const *set)
{
	int		count;
	int		count2;
	int		count3;
	char	temp;

	count = 0;
	count2 = 0;
	count3 = 0;
	while (set[count2] != '\0')
	{
		if (s1[count] == set[count2])
		{
		count++;
		count2 = -1;
		}
		count2++;
	}
	while (s1[count] != '\0')
	{
	temp[count3] = s1[count];
	count++;
	count3++;
	}
	return(temp);
}

int	ft_countend(char *temp, char const *set)
{
	int	count2;
	int	count3;

	count2 = 0;
	count3 = ft_strlen(temp);
	while (set[count2] != '\0')
	{
		if (temp[count3] == set[count2])
		{
			count3--;
			count2 = -1;
		}
		count2++;
	}
	return(count3);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		count2;
	int		count3;
	char	*temp;
	char	*temp2;
	char	*res;

	temp = ft_cutbeg(s1, set);
	count = 0;
	count2 = 0;
	count3 = ft_countend(temp, set);
	while (count < count3)
	{
		temp2[count] = temp[count2];
		count++;
		count2++;
	}
	res = malloc((ft_strlen(temp2) + 1)*sizeof(char));
	if (res == NULL)
	return (NULL);
	count = 0;
	while (temp2[count] != '\0')
	{
		res[count] = temp2[count];
		count++;
	}
	return(res);
}
 */
/* {
	char	*trim;
	int		count;
	int		count2;
	int		strl;
	int		setl;

	count = 0;
	count2 = 0;
	strl = ft_strlen(s1);
	setl = ft_strlen(set);
	if (strl <= setl - setl)
	return (NULL);
	trim = malloc((strl - setl - setl + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	while (s1[count] == set[count2])
	{
		count++;
		count2++;
	}
	count2 = 0;
	while (count < (strl - setl))
	{
		trim[count2] = s1[count];
		count2++;
		count++;
	}
	trim[count2] = '\0';
	return (trim);
} */

/* #include <stdio.h>

int	main(void)
{
	char const *s1 = "dfsfs";
	char const *set = "";
	char *trimmed = ft_strtrim(s1, set);

	printf("%s", trimmed);
	free(trimmed);
	return (0);
} */