
#include <stdio.h>
#include <gtk/gtk.h>

#include "RcLapTimer.h"
#include "GStreamerSink.hpp"
#include "LeaderBoards_Ui.hpp"

static char _sAppName[256]={0};

static GtkWidget* CreateMainContainer_(void);

int main(
	int argc,
	char** argv)
{
    GtkWidget*  window  = NULL;
    GtkWidget*  mainContainer   = NULL;
    
    sprintf(
        _sAppName,
         "RcLapTimer Version %d.%d.%d.%d",
         MAJOR_VERSION,
         MINOR_VERSION,
         RELEASE_VERSION,
         BUILD_VERSION);
         
    gtk_init(&argc, &argv);
    
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title(GTK_WINDOW(window), _sAppName);
    
    g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
    
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    mainContainer = CreateMainContainer_();
    
    if (NULL == mainContainer)
    {
        return 0;
    }
    
    gtk_container_add (GTK_CONTAINER (window), mainContainer);
    
    gtk_widget_show_all (window);

    gtk_main ();

    return 0;
} // main

static GtkWidget* CreateMainContainer_(void)
{
    GtkWidget*  container = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);
    GtkWidget*  leftPane = GStreamerSink_Create();
    GtkWidget*  rightPane = LeaderBoardsUi_Create();

    gtk_paned_add1(GTK_PANED(container), leftPane);    
    gtk_paned_add2(GTK_PANED(container), rightPane);
    
    return container;
} // CreateMainContainer_

