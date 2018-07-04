/*
** EPITECH PROJECT, 2017
** framebuffer
** File description:
** made by loris D
*/

#include <stdlib.h>
#include <time.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdio.h>
#include "../include/frame.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned height)
{
	framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
	if (buffer == NULL)
		return (NULL);
	buffer->width = width;
	buffer->height = height;
	buffer->pixels = malloc(width * height * 32 / 8);
	return (buffer);
}

void my_put_pixel(framebuffer_t *framebuffer, unsigned x, unsigned y,
		sfColor color)
{
	int pixels = (framebuffer->width * y + x) * 4;

	framebuffer->pixels[pixels] = color.r;
	framebuffer->pixels[pixels + 1] = color.g;
	framebuffer->pixels[pixels + 2] = color.b;
	framebuffer->pixels[pixels + 3] = color.a;
}

void usage(void)
{
	write(1, "animation rendering in a CSFML window.\n\n\n", 41);
	write(1, "USAGE\n", 6);
	write(1, "  ./my_screensaver [OPTIONS] animation_id\n", 42);
	write(1, "  animation_id     ID of the animation to the process ", 54);
	write(1, "(between 1 and 6).\n\n\n", 22);
	write(1, "OPTION\n", 7);
	write(1, "  -d               print the description of all the ", 52);
	write(1, "animation and quit.\n", 20);
	write(1, "  -h               print the usage and quit.\n\n\n", 47);
	write(1, "USER INTERACTIONS\n", 18);
	write(1, "  LEFT_ARROW       switch to the previous animation.\n", 53);
	write(1, "  RIGHT_ARROW      switch to the next animation.\n", 48);
}

int error(int ac, char **av)
{
	if (ac != 2)
		return (84);
	int a = atoi(av[1]);
	if (a < 1 || a > 6)
		return 84;
	return (0);
}

int main(int ac, char **av, char **env)
{
	srand(500);
	if (error(ac, av) == 84) {
		write(1, "./my_screensaver: bad effect_no 6: must be ", 43);
		write(1, "between 1 and 6.\nretry with -h\n", 31);
		return (84);
	}
	if (!(*env))
		return (84);
	if (us(av) == 84) {
		return (84);
	}
	test(av);
	return (0);
}
