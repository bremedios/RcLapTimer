
#include <gtk/gtk.h>
#include "LeaderBoards_Ui.hpp"

GtkWidget* LeaderBoardsUi_Create(void)
{
    GtkWidget* leaderBoard = gtk_button_new_with_label ("LeaderBoard Button");
    
    return leaderBoard;
} // LeaderBoardsUi_Create

