/*
** my_function.c for my_function.c in /home/josselin/EPITECH/PSU_2016_minishell1
** 
** Made by Josselin
** Login   <josselin.cosmao@epitech.eu>
** 
** Started on  Thu Jan 19 01:08:24 2017 Josselin
** Last update Sun Jan 22 23:18:15 2017 Josselin
*/

#include <unistd.h>
#include "my.h"

int     my_putstr(char *str)
{
  int   i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != '\0')
    write(1, &str[i++], 1);
  return (0);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n && (s1[i] != 0 || s2[i] != 0))
    {
      if (s1[i] != s2[i])
	return (1);
      i = i + 1;
    }
  if (i == n)
    return (0);
  return (1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != 0)
    i = i + 1;
  return (i);
}

char	*my_strcat(char *dest, char *src)
{
  int	j;
  int	i;

  i = 0;
  j = 0;
  while (dest[i])
    {
      i += 1;
    }
  while (src[j])
    {
      dest[i] = src[j];
      i += 1;
      j += 1;
    }
  dest[i] = '\0';
  return (dest);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
      i++;
    }
  return (s1[i] - s2[i]);
}
