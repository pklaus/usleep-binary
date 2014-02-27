/*

Source for the usleep binary by Philipp Klaus

*/

#include <stdio.h>
#include <unistd.h>

int main( int argc, const char* argv[] )
{
	int num_usec;
	
	// ensure the correct number of parameters are used.
	if ( argc == 2 ) 
	{
		num_usec = atoi( argv[1] );
		
		printf( "Sleep for %d microseconds\n", num_usec );
		usleep(num_usec);
	} else {
		printf("help:\nusleep NUM\nNUM is the number of microseconds that you want to sleep.\n");
	}
}

