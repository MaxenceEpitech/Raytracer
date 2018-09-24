/*
** translate.c for translate in /home/Max/Documents/delivery/raytracer1/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Jul 26 08:16:24 2017 fourrier maxence
** Last update Wed Jul 26 08:46:25 2017 fourrier maxence
*/

#include "raytracer.h"

sfVector3f	translate(sfVector3f to_translate, sfVector3f translations)
{
  to_translate.x += translations.x;
  to_translate.y += translations.y;
  to_translate.z += translations.z;
  return (to_translate);
}
