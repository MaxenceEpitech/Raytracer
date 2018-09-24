/*
** raytracer.c for raytracer in /home/maxence.fourrier/Documents/Project_C/raytracer1/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Aug  2 13:50:50 2017 maxence.fourrier
** Last update Sun Aug  6 17:36:50 2017 maxence.fourrier
*/

#include "my.h"

int		raytracer()
{
  t_all		*all;

  if ((all = init_all()) == NULL)
    return (ERROR);
  while (1)
    {
      clear_screen(all);
      light_move(all);
      if (draw(all) == ERROR
	  || draw_text(all) == ERROR)
	return (clear_ressource(all, ERROR));
      refresh(all->graph, all->text);
      if (sfKeyboard_isKeyPressed(sfKeyEscape))
	return (clear_ressource(all, SUCCESS));
    }
  return (SUCCESS);
}
