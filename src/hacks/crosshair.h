#pragma once

#include <xcb/xproto.h>

void
draw_crosshair(struct xcb_connection_t *connection,
               struct xcb_screen_t     *screen,
               xcb_window_t            window,
               xcb_gcontext_t          gc);