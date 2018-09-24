/*
** tools.c for tools in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/graph
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Aug  2 16:32:41 2017 maxence.fourrier
** Last update Sun Aug  6 17:36:30 2017 maxence.fourrier
*/

#include "my.h"

void		refresh(t_graph *graph, sfText *text)
{
  sfTexture_updateFromPixels(graph->texture,
                             graph->framebuffer->pixels,
                             SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
  sfRenderWindow_drawSprite(graph->window, graph->sprite, NULL);
  sfRenderWindow_drawText(graph->window, text, NULL);
  sfRenderWindow_display(graph->window);
}
