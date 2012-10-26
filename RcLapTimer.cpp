
#include <stdio.h>
#include <gst/gst.h>

#include "RcLapTimer.h"

int main(
	int argc,
	char** argv)
{
    const gchar*    nano_str;
    guint   major, minor, micro, nano;
    
    gst_init(&argc, &argv);
    
    gst_version(&major, &minor, &micro, &nano);
    
    if (1 == nano)
    {
        nano_str    = "(CVS)";
    }
    else if (2 == nano)
    {
        nano_str = "(Prerelease)";
    }
    else
    {
        nano_str = "";
    }

    printf(
        "RC Lap Timer Version . %d.%d.%d.%d\r\n",
        MAJOR_VERSION,
        MINOR_VERSION,
        RELEASE_VERSION,
        BUILD_VERSION);
    printf(
        "GStreamer Version .... %d.%d.%d.%s\r\n",
        major,
        minor,
        micro,
        nano_str);
        
    return 0;
} // main

