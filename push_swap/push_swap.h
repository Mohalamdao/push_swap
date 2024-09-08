#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "printf/ft_printf.h"

typedef struct s_list
{
	int	value;
	struct s_list *next;
}	t_list;

int main(int ac, char **av);
char	**ft_split(char const *str, char charset);

/*   push_swap_utils_utils  */

long long int		ft_atoi(const char *str);
int		ft_isdigit(int c, int j, int c2);
int		ft_strcmp(const char *s1, const char *s2);

/*  parsing   */

int	check_tab(char **tab);
int check_double(char **tab);
int check_max(char **tab);
int all_check(char **tab);

#endif