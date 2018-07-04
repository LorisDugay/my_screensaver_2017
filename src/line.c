/*
** EPITECH PROJECT, 2017
** line
** File description:
** made by loris D
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include "../include/frame.h"

int draw_point(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 0;
	point_a.y = 0;
	point_b.x = 0;
	point_b.y = 0;

	while (point_a.y != rand()%1000) {
			point_a.x = rand()%600;
			point_a.y = rand()%600;
			my_put_pixel(framebuffer, point_a.x, point_a.y, colors);
			point_b.x = rand()%600;
			point_b.y = rand()%600;
			my_put_pixel(framebuffer, point_b.x, point_b.y, colors);
		}
	return (0);
}

int draw_line(framebuffer_t *framebuffer, sfVector2i point_a)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = rand()%600;
	point_a.y = rand()%600;

	while (point_a.x != rand()%1000) {
		point_a.x = rand()%600;
		my_put_pixel(framebuffer, point_a.x, point_a.y, colors);
	}
	while (point_a.y != rand()%1000) {
		point_a.y = rand()%600;
		my_put_pixel(framebuffer, point_a.x, point_a.y, colors);
	}
	return (0);
}

int draw_crossline(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 200;
	point_a.y = 100;
	point_b.x = rand()%300;
	point_b.y = rand()%300;

	while (point_b.y != rand()%1000) {
		point_a.y = rand()%600;
		point_a.x = rand()%600;
		my_put_pixel(framebuffer, point_a.x, point_a.y, colors);
	}
	while (point_a.x != rand()%1000) {
		point_a.x = rand()%600;
		my_put_pixel(framebuffer, point_a.x, point_a.y, colors);
	}
	while (point_a.y != rand()%1000) {
		point_a.y = rand()%600;
		my_put_pixel(framebuffer, point_a.x, point_a.y, colors);
	}
	return (0);
}

int draw_rect(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	write_rec(framebuffer, point_a, point_b);
	return (0);
}
