/*
** EPITECH PROJECT, 2018
** rec
** File description:
** made by Loris D
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "../include/frame.h"

void rect5(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 100;
	point_b.y = 500;

	while (point_b.y != point_a.y) {
		point_b.y--;
		my_put_pixel(framebuffer, point_b.y, point_a.y, colors);
	}
	point_a.y = 100;
	point_b.y = 500;
	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}

void rect6(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 100;
	point_b.x = 500;
	while (point_b.x != point_a.x) {
		point_a.x++;
		my_put_pixel(framebuffer, point_b.x, point_a.x, colors);
	}
	point_a.x = 100;
	point_b.x = 500;
	while (point_a.x != point_b.x) {
		point_b.x--;
		my_put_pixel(framebuffer, point_a.x, point_b.x, colors);
	}
}

void rect7(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 150;
	point_b.y = 450;

	while (point_b.y != point_a.y) {
		point_b.y--;
		my_put_pixel(framebuffer, point_b.y, point_a.y, colors);
	}
	point_a.y = 150;
	point_b.y = 450;
	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}

void rect8(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 150;
	point_b.x = 450;
	while (point_b.x != point_a.x) {
		point_a.x++;
		my_put_pixel(framebuffer, point_b.x, point_a.x, colors);
	}
	point_a.x = 150;
	point_b.x = 450;
	while (point_a.x != point_b.x) {
		point_b.x--;
		my_put_pixel(framebuffer, point_a.x, point_b.x, colors);
	}
}

void rect9(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 200;
	point_b.y = 400;

	while (point_b.y != point_a.y) {
		point_b.y--;
		my_put_pixel(framebuffer, point_b.y, point_a.y, colors);
	}
	point_a.y = 200;
	point_b.y = 400;
	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}
