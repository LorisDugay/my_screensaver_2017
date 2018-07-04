/*
** EPITECH PROJECT, 2018
** made by Loris D
** File description:
** oui
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include <stdio.h>
#include "../include/frame.h"

void win(sfTexture* texture, sfRenderWindow *window)
{
	sfSprite* sprite = sfSprite_create();

	sfSprite_setTexture(sprite, texture, sfTrue);
	sfRenderWindow_drawSprite(window, sprite, NULL);
	sfRenderWindow_display(window);
	sfSprite_destroy(sprite);
}

void rect1(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 1;
	point_b.y = 599;

	while (point_b.y != point_a.y) {
		point_b.y--;
		my_put_pixel(framebuffer, point_b.y, point_a.y, colors);
	}
	point_a.y = 1;
	point_b.y = 599;
	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}

void rect2(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 1;
	point_b.x = 599;

	while (point_b.x != point_a.x) {
		point_a.x++;
		my_put_pixel(framebuffer, point_b.x, point_a.x, colors);
	}
	point_a.x = 1;
	point_b.x = 599;
	while (point_a.x != point_b.x) {
		point_b.x--;
		my_put_pixel(framebuffer, point_a.x, point_b.x, colors);
	}
}
void rect3(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.y = 50;
	point_b.y = 550;

	while (point_b.y != point_a.y) {
		point_b.y--;
		my_put_pixel(framebuffer, point_b.y, point_a.y, colors);
	}
	point_a.y = 50;
	point_b.y = 550;
	while (point_a.y != point_b.y) {
		point_a.y++;
		my_put_pixel(framebuffer, point_a.y, point_b.y, colors);
	}
}

void rect4(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	sfColor colors = {rand()%256, rand()%256, rand()%256, rand()%256};
	point_a.x = 50;
	point_b.x = 550;
	while (point_b.x != point_a.x) {
		point_a.x++;
		my_put_pixel(framebuffer, point_b.x, point_a.x, colors);
	}
	point_a.x = 50;
	point_b.x = 550;
	while (point_a.x != point_b.x) {
		point_b.x--;
		my_put_pixel(framebuffer, point_a.x, point_b.x, colors);
	}
}
