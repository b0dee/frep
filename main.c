#include <stdio.h>
#include <argp.h>
#include <dirent.h>

const char *argp_program_version = "1.0.0";
const char *argp_program_bug_address = "joe-paterson@outlook.com";
static char doc[] = "A file reporter";
static char args_doc[] = "faud";
static struct argp_option options[] = { 
	{ "output", 'o', 0,0, "Output to file. Default is to stdout"},
	{ "all", 'a', 0,0, "Report all files. Default will ignore DLLs"},
	{ 0 }
};

struct arguments { 
	enum { ALL, 
};

int main(int argc, char **argv) { 

	return 0;
}



