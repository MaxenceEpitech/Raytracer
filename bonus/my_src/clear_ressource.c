/*
** clear_ressource.c for clear_ressource in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Thu Aug  3 10:36:50 2017 maxence.fourrier
** Last update Sun Aug  6 01:49:18 2017 maxence.fourrier
*/

#include "my.h"

int		clear_ressource(t_all *all, int ret)
{
  sfSprite_destroy(all->graph->sprite);
  sfTexture_destroy(all->graph->texture);
  sfRenderWindow_destroy(all->graph->window);
  free(all->graph->framebuffer->pixels);
  free(all->graph->framebuffer);
  free(all->graph);
  free(all);
  return (ret);
}
