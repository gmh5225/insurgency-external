#pragma once

#include <xcb/xcb.h>

void
draw_hud(struct xcb_connection_t *connection,
         struct xcb_screen_t     *screen,
         xcb_window_t            window,
         xcb_gcontext_t          gc);
