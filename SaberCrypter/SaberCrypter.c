#include "getopt.h"

int main(int argc, char* argv[])
{
	int ch;
	while ((ch = getopt(argc, argv, "ei:o:f:k")) != -1)
	{
		switch (ch)
		{
		case 'e':
			break;
		default:
			break;
		}
	}
	return 0;
}

