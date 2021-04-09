#include "appdev.h"

int main(void) {

	rock r;
	printf("Application developers rock!\n");
	printf("Enter rockers name: \n");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	srand(time(NULL));
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1; 
	send_data(r);
	printf(" Rockn' roll!\n");
	return 0; 
}