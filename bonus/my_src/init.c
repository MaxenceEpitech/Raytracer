/*
** init.c for init in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Aug  2 16:03:31 2017 maxence.fourrier
** Last update Thu Aug 10 15:11:59 2017 maxence.fourrier
*/

#include "my.h"

t_all		*init_all()
{
  t_all		*all;

  if ((all = malloc(sizeof(t_all))) == NULL
      || (all->graph = init_graph()) == NULL
      || (all->sphere = init_sphere()) == NULL
      || (all->sphere2 = init_sphere2()) == NULL
      || (all->sphere3 = init_sphere3()) == NULL
      || (all->light = init_light()) == NULL
      || (all->ray = init_ray()) == NULL
      || (all->font = sfFont_createFromFile("font.ttf")) == NULL
      || (all->text = init_text(all->font)) == NULL)
    return (NULL);
  all->rotation = -1;
  all->time = 1;
  all->pos.x = 1;
  all->pos.y = 1;
  all->pos.z = 1;
  all->color = -1;
  return (all);
}

t_graph		*init_graph()
{
  t_graph	*graph;

  if ((graph = malloc(sizeof(t_graph))) == NULL
      || (graph->window =
          create_window(SCREEN_NAME, SCREEN_WIDTH, SCREEN_HEIGHT)) == NULL
      || (graph->sprite =
          sfSprite_create()) == NULL
      || (!graph->window)
      || (graph->texture =
          sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT)) == NULL)
    return (NULL);
  sfSprite_setTexture(graph->sprite, graph->texture, sfTrue);
  if ((graph->framebuffer =
       my_framebuffer_create(SCREEN_WIDTH, SCREEN_HEIGHT)) == NULL)
    return (NULL);
  return (graph);
}

t_sphere	*init_sphere()
{
  t_sphere	*sphere;

  if ((sphere = malloc(sizeof(t_sphere))) == NULL)
    return (NULL);
  sphere->center = init_vec(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 50);
  sphere->radius = 175.0;
  sphere->color = init_color(255, 0, 0, 255);
  return (sphere);
}

t_sphere	*init_light()
{
  t_sphere	*light;

  if ((light = malloc(sizeof(t_sphere))) == NULL)
    return (NULL);
  light->center = init_vec(0, 1000, 50);
  light->radius = 1.0;
  light->color = init_color(255, 255, 255, 100);
  return (light);
}

t_ray		*init_ray()
{
  t_ray		*ray;

  if ((ray = malloc(sizeof(t_ray))) == NULL)
    return (NULL);
  ray->origin = init_vec(0, 0, 0);
  ray->direction = init_vec(0, 0, 1);
  return (ray);
}
