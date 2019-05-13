/*
** my_setenv.c for my_setenv.c in /home/josselin/EPITECH/MINISHELL1/PSU_2016_minishell1
** 
** Made by Josselin
** Login   <josselin.cosmao@epitech.eu>
** 
** Started on  Fri Jan 20 17:34:36 2017 Josselin
** Last update Sun Jan 22 23:20:00 2017 Josselin
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

char	*change_env(char *var, char *value)
{
  int	i;
  int	j;

  i = 0;
  while (var[i] != '=' && var[i] != 0)
    i = i + 1;
  i = i + 1;
  if (value == NULL)
    var[i] = 0;
  else
    {
      j = 0;
      while (value[j] != 0)
	var[i++] = value[j++];
      var[i] = 0;
    }
  return (var);
}

char	**my_setenv(char **arr, char **env)
{
  int	i;

  i = 0;
  if (arr[i] == NULL)
    return (env);
  while (env[i] != NULL && my_strncmp(env[i], arr[1], my_strlen(arr[1])) != 0)
    i = i + 1;
  if (env[i] == NULL)
    {
      env[i] = my_strcat(arr[1], "=");
      if (arr[2] == NULL)
	return (env);
      env[i] = my_strcat(env[i], arr[2]);
      env[i + 1] = NULL;
      return (env);
    }
  env[i] = change_env(env[i], arr[2]);
  return (env);
}
