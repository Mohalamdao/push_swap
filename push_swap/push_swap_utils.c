/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamdao <molamdao@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:55:00 by molamdao          #+#    #+#             */
/*   Updated: 2024/09/08 00:10:56 by molamdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int	ft_isdigit(int c,int j, int c2)
{
	if (j == 0)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else if ((c == '-' || c == '+') && c2 != '\0')
			return (1);
	}
	else if (j > 0)
	{
		if (c >= '0' && c <= '9')
			return (1);
	}
	return (0);
}

long long int	ft_atoi(const char *str)
{
	int	i;
	long long int res;
	int	signe;

	i = 0;
	res = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13 && str[i]) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * signe);
}
