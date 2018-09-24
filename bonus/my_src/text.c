/*
** text.c for text in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sun Aug  6 17:24:08 2017 maxence.fourrier
** Last update Thu Aug 24 10:01:15 2017 maxence.fourrier
*/

#include "my.h"

sfText		*init_text(sfFont *font)
{
  sfText	*text;
  sfVector2f	vec;

  if ((text = sfText_create()) == NULL)
    return (NULL);
  vec.x = 10;
  vec.y = 10;
  sfText_setString(text, "Rotation : On\nColor changing : On");
  sfText_setFont(text, font);
  sfText_setCharacterSize(text, 30);
  sfText_setColor(text, sfWhite);
  sfText_setPosition(text, vec);
  return (text);
}

int		draw_text(t_all *all)
{
  if (all->color == 1 && all->rotation == 1)
    sfText_setString(all->text, "Rotation : On\nColor changing : On");
  if (all->color == 1 && all->rotation != 1)
    sfText_setString(all->text, "Rotation : Off\nColor changing : On");
  if (all->color != 1 && all->rotation == 1)
    sfText_setString(all->text, "Rotation : On\nColor changing : Off");
  if (all->color != 1 && all->rotation != 1)
    sfText_setString(all->text, "Rotation : Off\nColor changing : Off");
  return (SUCCESS);
}
