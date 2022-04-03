#include <stdio.h>
#include "ColorCode.h"
#include "testNumberToPair.h"
#include "testPairToNumber.h"
#include "testPrintWiringManual.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


int main() {
    int printManualFlag = 0;
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    printf("\n*********************\n");
    printf("Do you want to print Wiring Manual on Console :\n0 : Yes\n1:No\n");
    printf("\n*********************\n");
    scanf("%d",&printManualFlag);
    
    /*if(printManualFlag == 0)
    {
        testPrintWiringManual();
    }
    else
    {
        //Do Nothing
    }*/
           
    return 0;
}
