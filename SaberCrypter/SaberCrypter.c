#include "getopt.h"
#include <stdbool.h>

bool encrypt = false;

int main(int argc, char* argv[])
{
	int ch;
	while ((ch = getopt(argc, argv, "dei:o:f:k:")) != -1)
	{
		switch (ch)
		{
		case 'd':
			encrypt = false;
			break;
		case 'e':
			encrypt = true;
			break;
		default:
			break;
		}
	}
	return 0;
}

