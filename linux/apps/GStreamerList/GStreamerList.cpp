
#include <stdio.h>
#include <gst/gst.h>

static void ListPlugins_(void);

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
        "GStreamer Version .... %d.%d.%d.%s\r\n",
        major,
        minor,
        micro,
        nano_str);

    ListPlugins_();
        
    return 0;
} // main

static void ListPlugins_(void)
{
    GstRegistry*    registry    = gst_registry_get_default();
    
    if (NULL == registry)
    {
        g_print("    ERROR: Default Registry Not Valid (NULL)\n");
        
        return;
    }
    
    GList*          pluginList  = gst_registry_get_plugin_list(registry);

    for (GList* ptr = pluginList;NULL != ptr;ptr=g_list_next(ptr))
    {
        GstPlugin* plugin= (GstPlugin*)ptr->data;
        
        g_print(
            "Plugin Details:\n");
        g_print(
            "===============\n");
        g_print(
            "    Name ......... '%s'\n",
             gst_plugin_get_name(plugin));
        g_print(
            "    Description .. '%s'\n",
            gst_plugin_get_description(plugin));
        g_print(
            "    Filename ..... '%s'\n",
            gst_plugin_get_filename(plugin));
        g_print(
            "    License ...... '%s'\n",
            gst_plugin_get_license(plugin));
        g_print(
            "    Package ...... '%s'\n",
            gst_plugin_get_package(plugin));
        g_print(
            "    Origin ....... '%s'\n",
            gst_plugin_get_origin(plugin));
        g_print(
            "    Source ....... '%s'\n",
            gst_plugin_get_source(plugin));
        g_print(
            "    Version ...... '%s'\n",
            gst_plugin_get_version(plugin));
    }
    
    gst_plugin_list_free(pluginList);
} // GetSourcePlugin_

