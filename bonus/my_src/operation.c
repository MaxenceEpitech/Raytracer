/*
** operation.c for operation in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sat Aug  5 20:48:18 2017 maxence.fourrier
** Last update Sat Aug  5 21:16:42 2017 maxence.fourrier
*/

#include "my.h"

double		square(double a)
{
  return (a * a);
}

double		dot(sfVector3f a, sfVector3f b)
{
  return (a.x * b.x + a.y * b.y + a.z * b.z);
}
