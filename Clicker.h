#pragma once

#include "FileIO.h"
#include "Twitch.h"

#include <Windows.h>
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>

class Clicker {

public:
    static const int large_buffer;
    static const int string_buffer;
    static const unsigned int buffer;

    static POINT get_cursor_pos();
    static COLORREF get_pixel_screen(int x, int y);
    static COLORREF get_pixel_foreground(int x, int y);
    static char* colorref_to_color(COLORREF colorref);
    static char* get_window_name();
    static void click_release_left();
    static void move_and_click(int x, int y, unsigned int restore = 1);
    static char* get_hex_color(int x, int y);
    static int wait_for_pixel(int x, int y, const char* color, int timeout = 0, int sleep_ms = 1000);
    static int wait_and_click(int x, int y, const char* color, int timeout = 0, int sleep_ms = 1000);
    static POINT scan_area(int x_min, int x_max, int y_min, int y_max, const char* color, int debug = 1);
    static RECT get_window_rect_foreground();
    static POINT rect_to_point(RECT rect);
    static void client_to_screen(POINT* point);
    static int check_rect_bounds(RECT rect, POINT point);
    static int check_timeout(clock_t start, int timeout);
    static void log_mouse(int timeout);
    void log_area(int x_min, int x_max, int y_min, int y_max, const char* file_name = "logs.txt");
};