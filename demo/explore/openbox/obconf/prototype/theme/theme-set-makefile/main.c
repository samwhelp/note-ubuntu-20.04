#include "main.h"
#include "tree.h"

#include <stdlib.h>

#include <gdk/gdkx.h>

xmlDocPtr doc;
xmlNodePtr root;

GtkBuilder *builder;
RrInstance *rrinst;
gchar *obc_config_file = NULL;
ObtPaths *paths;
ObtXmlInst *parse_i;

void obconf_error(gchar *msg, gboolean modal)
{

}


int main (
	int argc,
	char **argv

) {

	const gchar *name;

	gtk_init(&argc, &argv);
	//obc_config_file = "/home/user/.config/openbox/rc.xml";

	paths = obt_paths_new();
    parse_i = obt_xml_instance_new();

	//xmlIndentTreeOutput = 1;
	//obt_xml_load_file(parse_i, obc_config_file, "openbox_config");
	obt_xml_load_config_file(parse_i, "openbox", "rc.xml", "openbox_config");

	//doc = obt_xml_doc(parse_i);
	//root = obt_xml_root(parse_i);

	name = argv[1];
	printf("argv[0]: %s\n", argv[0]);
	printf("argv[1]: %s\n", argv[1]);
	//tree_set_string("theme/name", "Arc");
	//tree_set_string("theme/name", argv[1]);
	//tree_set_string("theme/name", name);
	if (name) {
      tree_set_string("theme/name", name);
	}

	gtk_main();
	return 0;
}
