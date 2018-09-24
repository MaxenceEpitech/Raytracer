/*
** calc_dir_vector.c for calc_dir_vector in /home/Max/Documents/delivery/raytracer1/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Jul 26 08:09:21 2017 fourrier maxence
** Last update Sun Aug  6 13:58:38 2017 maxence.fourrier
*/

#include "raytracer.h"

sfVector3f	calc_dir_vector(float dist_to_plane,
				sfVector2i screen_size,
				sfVector2i screen_pos)
{
  sfVector3f	dir;

  dir.x = dist_to_plane;
  dir.y = (float) (screen_size.x / 2) - screen_pos.x;
  dir.z = (float) (screen_size.y / 2) - screen_pos.y;
  return (dir);
}
