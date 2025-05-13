#include "types.h"
#include "user.h"
void recursive(int n);
int main(int argc, char *argv[])
{	
	recursive(10);
	return 0;
 }
void recursive(int n)
{
	if(n%100000 == 0)
        printf(1, "%d \n",n);
	recursive(n+1);
}