/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 08:22:49 by ebenoist          #+#    #+#             */
/*   Updated: 2025/07/01 10:09:42 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int main (int ac, char **av)
{
	t_game game;
	char **map;
	ft_arg_error(ac, av[1]);
	game.map = read_file(av[1]);
	int i = 0;
	check_norm(game.map);
	free(map);
	return (0);
}