/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamdao <molamdao@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:17:16 by molamdao          #+#    #+#             */
/*   Updated: 2024/09/08 00:20:30 by molamdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_max(char **tab)
{
	int i;
	
	i = 0;
	while(tab[i])
	{
		if(ft_atoi(tab[i]) > 2147483647 || ft_atoi(tab[i]) < -2147483648)
			return(0);
		i++;
	}
	return(1);
}

int check_double(char **tab)
{
	int i;
	int j;
	
	i = 0;
	while(tab[i])
	{
		j = i + 1;
		while(tab[j])
		{
			if(ft_strcmp(tab[i], tab[j]) == 0)
				return(0);
			j++;
		}	
		i++;
	}
	return(1);
}

int	check_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	while(tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if(ft_isdigit(tab[i][j], j,tab[i][j + 1]) == 0)
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}

int all_check(char **tab)
{
	if (check_max(tab) == 0)
		return (0);
	if (check_tab(tab) == 0)
		return (0);
	if (check_double(tab) == 0)
		return (0);
	return (1);
}
