/*
** EPITECH PROJECT, 2018
** rect2
** File description:
** made by Loris D
*/

#include <stdlib.h>
#include <unistd.h>
#include <SFML/Config.h>
#include "../include/frame.h"

void rect20(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 100;
	point_b.x = 250;
	while (point_b.x != point_a.x) {
		point_a.x++;
		my_put_pixel(framebuffer, point_b.x, point_a.x, colors);
	}
	point_a.x = 100;
	point_b.x = 250;
	while (point_a.x != point_b.x) {
		point_b.x--;
		my_put_pixel(framebuffer, point_a.x, point_b.x, colors);
	}
}

void rect21(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 250;
	point_b.y = 500;

	while (point_b.y != point_a.y) {
		point_b.y--;
		my_put_pixel(framebuffer, point_b.y, point_a.y, colors);
	}
	point_a.y = 250;
	point_b.y = 500;
	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}

void rect22(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 100;
	point_b.x = 350;

	while (point_b.x != point_a.x) {
		point_a.x++;
		my_put_pixel(framebuffer, point_b.x, point_a.x, colors);
	}
}
void rect23(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 100;
	point_b.y = 350;

	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}
