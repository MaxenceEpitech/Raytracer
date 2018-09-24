/*
** plane.c for plane.c in /home/maxence.fourrier/Documents/Project_C/raytracer1/src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sun Aug  6 21:11:56 2017 maxence.fourrier
** Last update Sun Aug  6 22:54:08 2017 maxence.fourrier
*/

#include <math.h>
#include "raytracer.h"

float		intersect_plane(sfVector3f eye_pos, sfVector3f dir_vector)
{
  sfVector3f	coor;
  double	dist;

  coor.x = -eye_pos.x;
  coor.y = -eye_pos.y;
  coor.z = -eye_pos.z;
  dist = (coor.x * dir_vector.x
	  + coor.y * dir_vector.y
	  + coor.z * dir_vector.z);
  if (dist < 0.000000001)
    return (-1);
  return (dist);
}
