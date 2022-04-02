#include <stdio.h>
#include "ColorCode.h"
#include "testNumberToPair.h"
#include "GetColorFromPairNumber.h"
#include "ColorPairToString.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
}
