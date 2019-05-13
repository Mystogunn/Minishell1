/*
** get_next_line.h for get_next_line.h in /home/josselin/EPITECH/Get_next/bootstrap/include
** 
** Made by Josselin
** Login   <josselin.cosmao@epitech.eu>
** 
** Started on  Fri Jan  6 05:29:11 2017 Josselin
** Last update Sun Jan 22 23:07:37 2017 Josselin
*/

#ifndef		MY_H_
# define	MY_H_

# define	READ_SIZE (1)
# define	SIZE_MALLOC (4096)

typedef struct	s_vars
{
  int	idx;
  int	idx_line;
  int	k;
  int	value_read;
  char	buf[READ_SIZE + 1];
  char	*line;
}		t_vars;

char	**my_str_to_wordtab(char *str);
char	*get_next_line(const int fd);
int	my_putstr(char *str);
int	my_strncmp(char *s1, char *s2, int n);
char	**path(char **env);
int	my_exec(char **arr, char **env);
int     my_cd(char **arr, char **env);
char	*get_prompt();
char	*search(char *str, char **env);
char	**my_setenv(char **arr, char **env);
char    *my_strcat(char *dest, char *src);
int     my_strcmp(char *s1, char *s2);
int     my_strlen(char *str);

#endif /* !MY_H_ */
