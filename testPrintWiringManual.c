#include "ColorCode.h"
#include "GetColorFromPairNumber.h"
#include "testPrintWiringManual.h"
#include "ColorPairToString.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;

/*Print Wiring Manual*/
void testPrintWiringManual(void){
    
    ColorPair color;  
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for(int PairNumber = 1; PairNumber <= MAX_NUMBER_OF_PAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
        ColorPairToString(&color, colorPairNames);
        printf("%d - %s \n", PairNumber, colorPairNames);
         
    }
}
