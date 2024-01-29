#include "SDL.h"
#include "box/bmain.hpp"

int main(int argc, char** argv)
{
	int exit_code = 0;

	exit_code = ab::box::box_main(argc, argv);

	return exit_code;
}
