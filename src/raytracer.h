/*
** raytracer.h for raytracer in /home/Max/Documents/delivery/raytracer1/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Jul 26 08:35:41 2017 fourrier maxence
** Last update Sun Aug  6 22:29:28 2017 maxence.fourrier
*/

#ifndef _RAYTRACER_H_
# define _RAYTRACER_H_

/*	__________ ________________________ __________
**
**		          INCLUDES
**	__________ ________________________ __________
*/

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <SFML/Graphics.h>

/*	__________ ________________________ __________
**
**		          FUNCTIONS
**	__________ ________________________ __________
*/

sfVector3f	calc_dir_vector(float dist_to_plane,
				sfVector2i screen_size,
				sfVector2i screen_pos);

sfVector3f	rotate_xyz(sfVector3f to_rotate, sfVector3f angles);
sfVector3f	rotate_zyx(sfVector3f to_rotate, sfVector3f angles);

sfVector3f	translate(sfVector3f to_translate, sfVector3f translations);

float		intersect_sphere(sfVector3f eye_pos,
                                 sfVector3f dir_vector, float radius);
sfVector3f	get_normal_sphere(sfVector3f intersection_point);

float		intersect_plane(sfVector3f eye_pos,
				sfVector3f dir_vector);

#endif /* !__RAYTRACER_H_ */
