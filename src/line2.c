/*
** EPITECH PROJECT, 2018
** line2
** File description:
** made by Loris D
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include "../include/frame.h"

int square(framebuffer_t *framebuffer)
{
	sfVector2i pos = {rand()%600, rand()%600};
	int y_max = rand()%600;
	int x_max = rand()%600;
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};

	for (int y_line = 0; y_line < y_max; ++y_line)
		for (int x_line = 0; x_line < x_max; ++x_line)
			if (pos.y + y_line < 600 && pos.x + x_line < 600)
			my_put_pixel(framebuffer, y_line + pos.y,
				x_line + pos.x, colors);
	return (0);
}

int ori_line(framebuffer_t *framebuffer)
{
	sfVector2i pos = {rand()%600, rand()%600};
	int x_max = rand()%600;
	int y_line = rand()%600;
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};

	for (int x_line = 0; x_line < x_max; ++x_line)
		if (pos.x + x_line < 600)
			my_put_pixel(framebuffer, x_line + pos.x, y_line,
				colors);
	return (0);
}
