
#include <string>
#include <iostream>

#include "sequentialComputation.hpp"
#include "intrinsicsComputation.hpp"

int main(int argc, char** argv) 
{
    int numKRepetitions{0};

    if(argc != 2)
    {
        std::cout << "no args. setting it to 100\n";
        numKRepetitions = 100;
    } 
    else if (argc == 2)
    {
        int argIn{std::atoi(argv[1])};
        std::cout << ".using args. setting it to " << argIn << "\n";
        numKRepetitions = argIn;
    }

    if(numKRepetitions == 100)
        {
            std::cout << "HEEEEEEEEE\n";
        //return 0;
        }


    float a[8];
    float b[8];
    float c[8];
    float d[8];

    initArrays(a, b, c, d, 2.0f, 5.0f);
    std::cout << "\n";
    std::cout << "Executing sequential mode: \n";
    std::cout << "\n";

    testSequentialImplementation(numKRepetitions,a, b, c, d);

    initArrays(a, b, c, d, 2.0f, 5.0f);
    std::cout << "\n";
    std::cout << "Executing intrinsics: \n";
    std::cout << "\n";

    testIntrinsicsImplementation(numKRepetitions, a, b, c, d);

    return EXIT_SUCCESS;
}

