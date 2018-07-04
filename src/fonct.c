/*
** EPITECH PROJECT, 2018
** fonct
** File description:
** made by Loris D
*/

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "../include/frame.h"

int parse(sfTexture *texture, char **av)
{
	sfVector2i	point_a;
	sfVector2i	point_b;
	framebuffer_t *buffer = framebuffer_create(600, 600);

	if (av[1][0] == '1' && !av[1][1])
		draw_point(buffer, point_a, point_b);
	if (av[1][0] == '2' && !av[1][1])
		draw_line(buffer, point_a);
	if (av[1][0] == '3' && !av[1][1])
		draw_crossline(buffer, point_a, point_b);
	if (av[1][0] == '4' && !av[1][1])
		draw_rect(buffer, point_a, point_b);
	if (av[1][0] == '5' && !av[1][1])
		square(buffer);
	if (av[1][0] == '6' && !av[1][1])
		ori_line(buffer);
	sfTexture_updateFromPixels(texture, buffer->pixels,
				buffer->width, buffer->height, 0, 0);
	return (0);
}

sfRenderWindow *my_window_create()
{
	sfRenderWindow *window;
	sfVideoMode mode;

	mode.width = 600;
	mode.height = 600;
	mode.bitsPerPixel = 32;
	window = sfRenderWindow_create(mode, "win", sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(window, 30);

	return (window);
}

int us(char **av)
{
	if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
		usage();
		return (84);
	}
	if (av[1][0] == '-' && av[1][1] == 'd' && !av[1][2]) {
		descrip();
		return (84);
	}
	return (0);
}

int test(char **av)
{
	framebuffer_t *buffer = framebuffer_create(600, 600);
	sfTexture* texture = sfTexture_create(buffer->width, buffer->height);
	sfEvent event;
	sfRenderWindow *window = my_window_create();

	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
		}
		sfRenderWindow_clear(window, sfBlack);
		parse(texture, av);
		win(texture, window);
	}
	return (0);
}
