#include <iostream>
#include <omp.h>

int main(int argc, char *argv[])
{
    #pragma omp parallel // compiler directive
    {
	    std::cout << "I am a parallel region.\n";
    }
    return 0;
}
