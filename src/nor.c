/*
** EPITECH PROJECT, 2018
** not
** File description:
** made by Loris D
*/

#include <stdlib.h>
#include <time.h>
#include <SFML/Config.h>
#include <unistd.h>
#include "../include/frame.h"

void descrip()
{
	write(1, "1:  bigbang:\na infinity explostion of star(point).\n", 52);
	write(1, "2:  cross line:\na infinity generation of random ", 47);
	write(1, " line.\n", 7);
	write(1, "3:  cross line and point:\na infinity explostion of", 50);
	write(1, " point and a infinity generation of line.\n", 42);
	write(1, "4:  ultimate square:\na infinity generation ", 44);
	write(1, "multiple line, all the line create many square.\n", 48);
	write(1, "5:  square:\na infinity generation of ", 38);
	write(1, "multiple size, position and opacity of the square.\n", 51);
	write(1, "6:  random dash:\na infinity generation of ", 42);
	write(1, "mutiple size of dash.\n", 22);
}

void writ_rec(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	rect11(framebuffer, point_a, point_b);
	rect12(framebuffer, point_a, point_b);
	rect13(framebuffer, point_a, point_b);
	rect14(framebuffer, point_a, point_b);
	rect15(framebuffer, point_a, point_b);
	rect16(framebuffer, point_a, point_b);
	rect17(framebuffer, point_a, point_b);
	rect18(framebuffer, point_a, point_b);
	rect19(framebuffer, point_a, point_b);
	rect20(framebuffer, point_a, point_b);
	rect21(framebuffer, point_a, point_b);
	rect22(framebuffer, point_a, point_b);
	rect23(framebuffer, point_a, point_b);
}

void write_rec(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b)
{
	rect1(framebuffer, point_a, point_b);
	rect2(framebuffer, point_a, point_b);
	rect3(framebuffer, point_a, point_b);
	rect4(framebuffer, point_a, point_b);
	rect5(framebuffer, point_a, point_b);
	rect6(framebuffer, point_a, point_b);
	rect7(framebuffer, point_a, point_b);
	rect8(framebuffer, point_a, point_b);
	rect9(framebuffer, point_a, point_b);
	rect10(framebuffer, point_a, point_b);
	writ_rec(framebuffer, point_a, point_b);
}
