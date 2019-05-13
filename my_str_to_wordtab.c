/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/josselin/EPITECH/PSU_2016_minishell1
** 
** Made by Josselin
** Login   <josselin.cosmao@epitech.eu>
** 
** Started on  Wed Jan 11 23:44:20 2017 Josselin
** Last update Sun Jan 22 23:22:37 2017 Josselin
*/

#include <string.h>
#include <stdlib.h>
#include "my.h"

char	**my_str_to_wordtab(char *str)
{
  char	**arr;
  int	idx_str;
  int	x;
  int	y;
  int	len;

  if ((len = my_strlen(str)) == -1)
    return (NULL);
  idx_str = 0;
  y = 0;
  if ((arr = malloc(sizeof(char *) * len)) == NULL)
    return (NULL);
  while (str[idx_str] != 0)
    {
      if ((arr[y] = malloc(sizeof(char) * len)) == NULL)
	return (NULL);
      while ((str[idx_str] != 0)
	     && (str[idx_str] == ' ' || str[idx_str] == '\t'))
	idx_str += 1;
      x = 0;
      while (str[idx_str] != 0
	     && str[idx_str] != ' ' && str[idx_str] != '\t')
	       arr[y][x++] = str[idx_str++];
      arr[y++][x] = 0;
      while ((str[idx_str] != 0)
	     && (str[idx_str] == ' ' || str[idx_str] == '\t'))
	idx_str += 1;
    }
  arr[y] = NULL;
  return (arr);    
}
