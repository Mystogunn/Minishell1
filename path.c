/*
** path.c for path.c in /home/josselin/EPITECH/PSU_2016_minishell1
** 
** Made by Josselin
** Login   <josselin.cosmao@epitech.eu>
** 
** Started on  Wed Jan 18 00:59:00 2017 Josselin
** Last update Sun Jan 22 23:23:34 2017 Josselin
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

char    **paths(char *str)
{
  char  **arr;
  int   idx_str;
  int   x;
  int   y;
  int   len;

  if ((len = my_strlen(str)) == -1)
    return (NULL);
  idx_str = 5;
  y = 0;
  if ((arr = malloc(sizeof(char *) * len)) == NULL)
    return (NULL);
  while (str[idx_str] != 0)
    {
      if ((arr[y] = malloc(sizeof(char) * len)) == NULL)
	return (NULL);
      while ((str[idx_str] != 0) && (str[idx_str] == ':'))
	idx_str += 1;
      x = 0;
      while (str[idx_str] != 0 && str[idx_str] != ':')
	arr[y][x++] = str[idx_str++];
      arr[y][x++] = '/';
      arr[y++][x] = 0;
      while ((str[idx_str] != 0) && (str[idx_str] == ':'))
	idx_str += 1;
    }
  arr[y] = NULL;
  return (arr);
}


char	**path(char **env)
{
  int	i;
  char	**arr;
  
  i = 0;
  while (env[i] != NULL && my_strncmp(env[i], "PATH=", 5) != 0)
    i = i + 1;
  if (env[i] == NULL)
    return (NULL);
  arr = paths(env[i]);
  return (arr);
}
