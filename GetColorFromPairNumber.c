
#include "GetColorFromPairNumber.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int NumberOfMajorColors_i = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);


ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / NumberOfMajorColors_i );
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % NumberOfMajorColors_i );
    return colorPair;
}
