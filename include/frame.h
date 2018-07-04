/*
** EPITECH PROJECT, 2017
** frame
** File description:
** made by Loris D
*/

#ifndef FRAME_H_
# define FRAME_H_

#include <SFML/Graphics.h>

typedef struct framebuffer {
	unsigned int width;
	unsigned int height;
	sfUint8 *pixels;
}framebuffer_t;

typedef struct s_time {
	sfTime time;
	float seconds;
	sfClock *clock;
}t_time;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y,
		sfColor color);
int draw_point(framebuffer_t *framebuffer, sfVector2i point_a,
	sfVector2i point_b);
int ori_line(framebuffer_t *frambuffer);
int ver_line(framebuffer_t *frambuffer);
int draw_line(framebuffer_t *frambuffer, sfVector2i point_a);
int square(framebuffer_t *frambuffer);
int draw_crossline(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
int draw_rect(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect1(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect2(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect3(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect4(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect5(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect6(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect7(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect8(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect9(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect10(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect11(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect12(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect13(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect14(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect15(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect16(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect17(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect18(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect19(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect20(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect21(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect22(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void rect23(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void write_rec(framebuffer_t *frambuffer, sfVector2i point_a,
	sfVector2i point_b);
void descrip();
void win(sfTexture* texture, sfRenderWindow *window);
int test(char **av);
int parse(sfTexture *, char **av);
void usage(void);
int error(int ac, char **av);
int us(char **av);

# endif /* FRAME_H_ */
