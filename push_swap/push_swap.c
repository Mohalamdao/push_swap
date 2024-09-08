/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamdao <molamdao@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:02:22 by molamdao          #+#    #+#             */
/*   Updated: 2024/09/08 16:28:51 by molamdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *create_node(int value)
{
	t_list	*tmp;

	tmp = malloc(sizeof(*tmp));
	if(!tmp)
		return(NULL);	
	tmp->value = value;
	tmp->next = NULL;
	return(tmp);
}
t_list *create_liste(char **tab)
{
	t_list *liste;
	t_list *tmp;
	t_list *new;

	tmp = NULL;
	liste = NULL;
	int i;
	i = 0;
	while(tab[i])
	{
		new = create_node(ft_atoi(tab[i]));
		if(liste == NULL)
		{
			liste = new;
			tmp = new;
		}
		else
		{
			tmp->next = new;
			tmp = new;
		}
		i++;
	}
	return(liste);
}

char **create_tab(int ac , char **av)
{
	int i;
	char **tab;

	i = 0;
	if (ac == 1)
		return (NULL);
	if(ac == 2)
		 tab = ft_split(av[1],' ');
	else 
	{
		tab = malloc(sizeof(char *) * ac);
		if(!tab)
			return (NULL);
		while(i < ac)
		{
			tab[i] = av[i + 1];
			i++;
		}
	}	
	return (tab);
}

int main(int ac, char **av)
{
	char **tab;
	tab = create_tab(ac,av);
	int i = 0;
	//if(all_check(tab) == 0)
	//	ft_printf("Error\n");
	t_list *tmp;
	tmp = create_liste(tab);

	// while(tab[i])
	// {
	// 	printf("%s\n", tab[i]);
    //     i++;
	// }
    while (tmp != NULL)
		{
			printf("%d\n", tmp ->value);
        	tmp = tmp->next;
		}
 }

