#ifndef __CFL_WINDOW_H__
#define __CFL_WINDOW_H__

#include "cfl_group.h"
#include "cfl_widget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef union {
    unsigned long x_id;
    void *opaque;
} winid;

#define WINDOW_DECLARE(widget)                                                                     \
    void widget##_make_modal(widget *, unsigned int boolean);                                      \
    void widget##_fullscreen(widget *, unsigned int boolean);                                      \
    void widget##_make_current(widget *);                                                          \
    void widget##_set_icon(widget *, const void *);                                                \
    void *widget##_icon(const widget *);                                                           \
    void widget##_set_cursor(widget *self, int cursor);                                            \
    int widget##_shown(widget *self);                                                              \
    void *widget##_raw_handle(const widget *w);                                                    \
    void widget##_set_border(widget *, int flag);                                                  \
    int widget##_border(const widget *);                                                           \
    void *widget##_region(const widget *self);                                                     \
    void widget##_set_region(widget *self, void *r);                                               \
    void widget##_iconize(widget *self);                                                           \
    unsigned int widget##_fullscreen_active(const widget *self);                                   \
    void widget##_free_position(widget *self);                                                     \
    int widget##_decorated_w(const widget *self);                                                  \
    int widget##_decorated_h(const widget *self);                                                  \
    void widget##_size_range(widget *self, int, int, int, int);                                    \
    void widget##_hotspot(widget *self, Fl_Widget *wid);

WIDGET_DECLARE(Fl_Window)

GROUP_DECLARE(Fl_Window)

WINDOW_DECLARE(Fl_Window)

Fl_Window *Fl_Window_find_by_handle(void *handle);

winid resolve_raw_handle(void *handle);

void *Fl_display(void);

void *Fl_gc(void);

void Fl_Window_show_with_args(Fl_Window *w, int argc, char **argv);

void Fl_Window_set_raw_handle(Fl_Window *self, void *handle);

WIDGET_DECLARE(Fl_Single_Window)

GROUP_DECLARE(Fl_Single_Window)

WINDOW_DECLARE(Fl_Single_Window)

WIDGET_DECLARE(Fl_Double_Window)

void Fl_Double_Window_flush(Fl_Double_Window *w);

GROUP_DECLARE(Fl_Double_Window)

WINDOW_DECLARE(Fl_Double_Window)

WIDGET_DECLARE(Fl_Menu_Window)

GROUP_DECLARE(Fl_Menu_Window)

WINDOW_DECLARE(Fl_Menu_Window)

WIDGET_DECLARE(Fl_Gl_Window)

GROUP_DECLARE(Fl_Gl_Window)

WINDOW_DECLARE(Fl_Gl_Window)

void Fl_Gl_Window_flush(Fl_Gl_Window *self);

char Fl_Gl_Window_valid(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_valid(Fl_Gl_Window *self, char v);

char Fl_Gl_Window_context_valid(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_context_valid(Fl_Gl_Window *self, char v);

int Fl_Gl_Window_can_do(Fl_Gl_Window *self);

void *Fl_Gl_Window_context(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_context(Fl_Gl_Window *self, void *ctx, int destroy_flag);

void Fl_Gl_Window_swap_buffers(Fl_Gl_Window *self);

void Fl_Gl_Window_ortho(Fl_Gl_Window *self);

int Fl_Gl_Window_can_do_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_redraw_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_hide_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_make_overlay_current(Fl_Gl_Window *self);

float Fl_Gl_Window_pixels_per_unit(Fl_Gl_Window *self);

int Fl_Gl_Window_pixel_w(Fl_Gl_Window *self);

int Fl_Gl_Window_pixel_h(Fl_Gl_Window *self);

int Fl_Gl_Window_mode(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_mode(Fl_Gl_Window *self, int mode);

void *Fl_Gl_Window_get_proc_address(Fl_Gl_Window *self, const char *s);

#ifdef __cplusplus
}
#endif
#endif
