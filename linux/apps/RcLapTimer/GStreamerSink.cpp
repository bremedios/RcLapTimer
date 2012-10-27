
#include <gtk/gtk.h>
#include "GStreamerSink.hpp"

static GtkWidget* GStreamerSink_CreateDrawingSurface_(void);


GtkWidget* GStreamerSink_Create(void)
{
    return GStreamerSink_CreateDrawingSurface_ ();
} // GStreamerSink_Create

static GtkWidget* GStreamerSink_CreateDrawingSurface_(void)
{
    GtkWidget* drawingSurface = gtk_drawing_area_new ();
    
    gtk_widget_set_size_request (drawingSurface, 640, 480);
    
    return drawingSurface;
} // GStreamerSink_Create

