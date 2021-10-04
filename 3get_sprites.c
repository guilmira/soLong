/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3get_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:30:47 by guilmira          #+#    #+#             */
/*   Updated: 2021/10/04 16:07:20 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/** PURPOSE : load image form xpm file. Then get specs.
 * IMPORTANT!: Every variable passed by reference is an OUTPUT. */
static void	load_image_n_getdata(t_program *game, t_data *new_image, char *path)
{
	new_image->img = mlx_xpm_file_to_image(game->mlx_pointer, \
	path, &new_image->coords.x, &new_image->coords.y);
	new_image->addr = mlx_get_data_addr(new_image->img, \
	&new_image->bits_per_pixel, \
	&new_image->line_length, &new_image->endian);
}

/** PURPOSE : Handles creation of sprite.
 * All variables are handled with t_data pointer. */
t_data	*ft_newsprite(t_program *game, char *path)
{
	t_data	*new_image;

	new_image = ft_calloc(1, sizeof(*new_image));
	if (!new_image)
		ft_shutdown();
	load_image_n_getdata(game, new_image, path);
	return (new_image);
	//free(new_image);
}
