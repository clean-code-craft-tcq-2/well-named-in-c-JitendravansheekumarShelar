#include "ColorCode.h"
#include "GetColorFromPairNumber.h"


ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / 5);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % 5);
    return colorPair;
}
