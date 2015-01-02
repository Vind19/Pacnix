#ifndef __TEXT_NUM_H
#define __TEXT_NUM_H

#include "video_gr.h"
#include "rtc.h"

/** @defgroup text_num Text_num
 * @{
 * @brief Functions for printing integer numbers
 */

/**
 * @brief Draws an integer number at the given coordinates
 *
 * Draws the given integer in the screen, making the given coordinates
 * its top right corner. It draws the numbers with the given color
 *
 * @param number integer to draw
 * @param x x coord for top right corner of number
 * @param y y coord for top right corner of number
 * @param color color for numbers to be filled with
 */
void draw_num(int number, int x, int y, unsigned long color);

/**
 * @brief Draws the "SCORE" header for the game
 *
 * Draws the word "SCORE" on the given coordinates
 *
 * @param x x coord for word
 * @param y y coord for word
 */
void draw_score_header(int x, int y);

/**
 * @brief Draws the "HIGHSCORE" header for the game
 *
 * Draws the word "HIGHSCORE" on the given coordinates
 *
 * @param x x coord for word
 * @param y y coord for word
 */
void draw_highscore_header(int x, int y);

/**
 * @brief Gives the sprite the map of an integer digit
 *
 * @param sp pointer to sprite to modify
 * @param digit digit whose map must be given to the sprite
 */
void digit_map(int digit, Sprite * sp);

/**
 * @brief Draw a date (date and time of day)
 *
 * @param date pointer to date to be drawn
 * @param x x coordinate for date to be drawn
 * @param y y coordinate for date to be draw
 */
void draw_date(Date * date, int x, int y);

static char * zero_xpm[] = {
"20 25 2",
" 	64",
".	0",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     "};

static char * um_xpm[] = {
"10 25 2",
" 	64",
".	0",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"..........",
"..........",
"..........",
"..........",
"..........",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     .....",
"     ....."};

static char * dois_xpm[] = {
"20 25 2",
" 	64",
".	0",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"          ..........",
"          ..........",
"          ..........",
"          ..........",
"          ..........",
"     .....          ",
"     .....          ",
"     .....          ",
"     .....          ",
"     .....          ",
"     ...............",
"     ...............",
"     ...............",
"     ...............",
"     ..............."};

static char * tres_xpm[] = {
"15 25 2",
" 	64",
".	0",
"..........     ",
"..........     ",
"..........     ",
"..........     ",
"..........     ",
"          .....",
"          .....",
"          .....",
"          .....",
"          .....",
"     ..........",
"     ..........",
"     ..........",
"     ..........",
"     ..........",
"          .....",
"          .....",
"          .....",
"          .....",
"          .....",
"..........     ",
"..........     ",
"..........     ",
"..........     ",
"..........     "};

static char * quatro_xpm[] = {
"20 25 2",
" 	0",
".	64",
"     ...............",
"     ...............",
"     ...............",
"     ...............",
"     ...............",
"     .....     .....",
"     .....     .....",
"     .....     .....",
"     .....     .....",
"     .....     .....",
".....               ",
".....               ",
".....               ",
".....               ",
".....               ",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     .....",
"..........     ....."};

static char * cinco_xpm[] = {
"15 25 2",
" 	64",
".	0",
"     ..........",
"     ..........",
"     ..........",
"     ..........",
"     ..........",
".....          ",
".....          ",
".....          ",
".....          ",
".....          ",
"..........     ",
"..........     ",
"..........     ",
"..........     ",
"..........     ",
"          .....",
"          .....",
"          .....",
"          .....",
"          .....",
"...............",
"...............",
"...............",
"...............",
"..............."};

static char * seis_xpm[] = {
"20 25 2",
" 	64",
".	0",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....               ",
".....               ",
".....               ",
".....               ",
".....               ",
"...............     ",
"...............     ",
"...............     ",
"...............     ",
"...............     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     "};

static char * sete_xpm[] = {
"20 25 2",
" 	64",
".	0",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"          .....     ",
"          .....     ",
"          .....     ",
"          .....     ",
"          .....     ",
"     .....          ",
"     .....          ",
"     .....          ",
"     .....          ",
"     .....          ",
".....               ",
".....               ",
".....               ",
".....               ",
".....               "};

static char * oito_xpm[] = {
"20 25 2",
" 	64",
".	0",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     "};

static char * nove_xpm[] = {
"20 25 2",
" 	64",
".	0",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
".....          .....",
"     ...............",
"     ...............",
"     ...............",
"     ...............",
"     ...............",
"               .....",
"               .....",
"               .....",
"               .....",
"               .....",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     ",
"     ..........     "};

static char * bar_xpm[] = {
"12 25 2",
"#	64",
".	63",
"############",
"#######....#",
"#######....#",
"######.....#",
"######.....#",
"######....##",
"#####.....##",
"#####.....##",
"#####....###",
"####.....###",
"####.....###",
"####....####",
"###.....####",
"###.....####",
"###....#####",
"##.....#####",
"##.....#####",
"##....######",
"#.....######",
"#.....######",
"#....#######",
".....#######",
".....#######",
"....########",
"....########"};

static char * dots_xpm[] = {
"6 20 2",
"#	64",
".	63",
"######",
"######",
"......",
"......",
"......",
"......",
"......",
"......",
"######",
"######",
"######",
"######",
"......",
"......",
"......",
"......",
"......",
"......",
"######",
"######"};

static char * score_xpm[] = {
"116 25 2",
" 	64",
".	63",
"     ...............         ...............         ..........         ....................    ....................",
"     ...............         ...............         ..........         ....................    ....................",
"     ...............         ...............         ..........         ....................    ....................",
"     ...............         ...............         ..........         ....................    ....................",
"     ...............         ...............         ..........         ....................    ....................",
".....                   .....                   .....          .....    .....          .....    .....               ",
".....                   .....                   .....          .....    .....          .....    .....               ",
".....                   .....                   .....          .....    .....          .....    .....               ",
".....                   .....                   .....          .....    .....          .....    .....               ",
".....                   .....                   .....          .....    .....          .....    .....               ",
"     ..........         .....                   .....          .....    ....................    ...............     ",
"     ..........         .....                   .....          .....    ....................    ...............     ",
"     ..........         .....                   .....          .....    ....................    ...............     ",
"     ..........         .....                   .....          .....    ....................    ...............     ",
"     ..........         .....                   .....          .....    ....................    ...............     ",
"               .....    .....                   .....          .....    .....     .....         .....               ",
"               .....    .....                   .....          .....    .....     .....         .....               ",
"               .....    .....                   .....          .....    .....     .....         .....               ",
"               .....    .....                   .....          .....    .....     .....         .....               ",
"               .....    .....                   .....          .....    .....     .....         .....               ",
"...............              ...............         ..........         .....          .....    ....................",
"...............              ...............         ..........         .....          .....    ....................",
"...............              ...............         ..........         .....          .....    ....................",
"...............              ...............         ..........         .....          .....    ....................",
"...............              ...............         ..........         .....          .....    ...................."};


static char * highscore_xpm[] = {
"200 25 2",
".	63",
"+	64",
".....+++++++.....++++...............+++++++++...............++++.....+++++++.....+++++++++...............+++++++++...............+++++++++..........+++++++++....................++++...................",
".....+++++++.....++++...............+++++++++...............++++.....+++++++.....+++++++++...............+++++++++...............+++++++++..........+++++++++....................++++...................",
".....+++++++.....++++...............+++++++++...............++++.....+++++++.....+++++++++...............+++++++++...............+++++++++..........+++++++++....................++++...................",
".....+++++++.....++++...............+++++++++...............++++.....+++++++.....+++++++++...............+++++++++...............+++++++++..........+++++++++....................++++...................",
".....+++++++.....++++...............++++....................++++.....+++++++.....+++++++++...............+++++++++...............+++++++++..........+++++++++....................++++...................",
".....+++++++.....+++++++++.....+++++++++.....+++++++++++++++++++.....+++++++.....++++.....+++++++++++++++++++.....+++++++++++++++++++.....++++++++++.....++++.....++++++++++.....++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....+++++++++++++++++++.....+++++++.....++++.....+++++++++++++++++++.....+++++++++++++++++++.....++++++++++.....++++.....++++++++++.....++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....+++++++++++++++++++.....+++++++.....++++.....+++++++++++++++++++.....+++++++++++++++++++.....++++++++++.....++++.....++++++++++.....++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....+++++++++++++++++++.....+++++++.....++++.....+++++++++++++++++++.....+++++++++++++++++++.....++++++++++.....++++.....++++++++++.....++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....+++++++++++++++++++.....+++++++.....++++.....+++++++++++++++++++.....+++++++++++++++++++.....++++++++++.....++++.....++++++++++.....++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....+++++++++++++++++++.....+++++++.....+++++++++..........+++++++++.....+++++++++++++++++++.....++++++++++.....++++....................++++............+++++++",
".................+++++++++.....+++++++++.....+++++++++++++++++++.................+++++++++..........+++++++++.....+++++++++++++++++++.....++++++++++.....++++....................++++............+++++++",
".................+++++++++.....+++++++++.....+++++..........++++.................+++++++++..........+++++++++.....+++++++++++++++++++.....++++++++++.....++++....................++++............+++++++",
".................+++++++++.....+++++++++.....+++++..........++++.................+++++++++..........+++++++++.....+++++++++++++++++++.....++++++++++.....++++....................++++............+++++++",
".................+++++++++.....+++++++++.....+++++..........++++.................+++++++++..........+++++++++.....+++++++++++++++++++.....++++++++++.....++++....................++++............+++++++",
".................+++++++++.....+++++++++.....+++++..........++++.................+++++++++++++++++++.....++++.....+++++++++++++++++++.....++++++++++.....++++.....+++++.....+++++++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....+++++..........++++.....+++++++.....+++++++++++++++++++.....++++.....+++++++++++++++++++.....++++++++++.....++++.....+++++.....+++++++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....++++++++++.....++++.....+++++++.....+++++++++++++++++++.....++++.....+++++++++++++++++++.....++++++++++.....++++.....+++++.....+++++++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....++++++++++.....++++.....+++++++.....+++++++++++++++++++.....++++.....+++++++++++++++++++.....++++++++++.....++++.....+++++.....+++++++++.....++++++++++++++",
".....+++++++.....+++++++++.....+++++++++.....++++++++++.....++++.....+++++++.....+++++++++++++++++++.....++++.....+++++++++++++++++++.....++++++++++.....++++.....+++++.....+++++++++.....++++++++++++++",
".....+++++++.....++++...............+++++++++..........+++++++++.....+++++++.....++++...............++++++++++++++...............+++++++++..........+++++++++.....++++++++++.....++++...................",
".....+++++++.....++++...............+++++++++..........+++++++++.....+++++++.....++++...............++++++++++++++...............+++++++++..........+++++++++.....++++++++++.....++++...................",
".....+++++++.....++++...............+++++++++..........+++++++++.....+++++++.....++++...............++++++++++++++...............+++++++++..........+++++++++.....++++++++++.....++++...................",
".....+++++++.....++++...............+++++++++..........+++++++++.....+++++++.....++++...............++++++++++++++...............+++++++++..........+++++++++.....++++++++++.....++++...................",
".....+++++++.....++++...............+++++++++..........+++++++++.....+++++++.....++++...............++++++++++++++...............+++++++++..........+++++++++.....++++++++++.....++++..................."};



#endif // __TEXT_NUM_H //
