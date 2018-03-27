#include <fw/foo/foo.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	fprintf(stdout, "%d\n", add(1, 2));
	return 0;
}
