/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** Prototypes of the extern functions of the my_screensaver sources
*/

#include <SFML/Graphics.h>
#include "framebuffer_t.h"
#include "ssv_data_t.h"
#include "screensaver_t.h"
#include "linked_list_t.h"

int disp_error_in_arguments(int ac);
int disp_usage(void);
int disp_error_invalid_id(int ssv);
int disp_screensaver_list(void);

int start_screensaver(int ssv);
ssv_data_t *init_ssv_data(int ssv);

int event_loop(ssv_data_t *data);

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
sfColor *get_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y);
void put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y,
sfColor color);
void display_framebuffer(ssv_data_t *data);
void reset_framebuffer(framebuffer_t *fb, sfColor color);
void draw_rect(framebuffer_t *fb, sfIntRect rect, sfColor color);

void cycle_hue(sfColor *color);
sfColor random_hue(void);

int load_raw_image_in_framebuffer(framebuffer_t *fb, char const *filepath);

int colorfull_noise(ssv_data_t *data);
int bouncing(ssv_data_t *data);
int squares(ssv_data_t *data);
int lines(ssv_data_t *data);
int display_image(ssv_data_t *data);
int snake(ssv_data_t *data);
void snake_get_input(sfVector2i *velocity);
int snake_catch_lose(framebuffer_t *fb, linked_list_t *tail,
linked_list_t *head);
int phantoms(ssv_data_t *data);
