/*
** my_exec.c for my_exec.c in /home/josselin/EPITECH/PSU_2016_minishell1
** 
** Made by Josselin
** Login   <josselin.cosmao@epitech.eu>
** 
** Started on  Thu Jan 19 01:32:36 2017 Josselin
** Last update Sun Jan 22 22:42:22 2017 Josselin
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

int	my_exec(char **arr, char **env)
{
  char	**paths;
  char	*binary;
  int	i;
  int	pid;

  if ((paths = path(env)) == NULL)
    return (-1);
  i = 0;
  pid = fork();
  while (paths[i])
    {
      binary = my_strcat(paths[i], arr[0]);
      if (pid == 0)
	{
	  if (my_strncmp(arr[0], "./", 2) == 0 || arr[0][0] == '/')
	    execve(arr[0], arr, env);
	  else
	    execve(binary, arr, env);
	}
      else
	return (-1);
      i = i + 1;
    }
  my_putstr(arr[0]);
  my_putstr(": Command not found.\n");
  exit(0);
}
