#include <stdio.h>
#include <assert.h>
#include "ColorCode.h"
#include "testNumberToPair.h"
#include "testPairToNumber.h"


const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
