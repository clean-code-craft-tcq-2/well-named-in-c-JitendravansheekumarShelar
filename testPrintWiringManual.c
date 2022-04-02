#include "GetColorFromPairNumber.h"
#include "testPrintWiringManual.h"

/*Print Wiring Manual*/
void testPrintWiringManual(void){
    int PairNumber = 1;
    ColorPair color;
    
    for(; PairNumber <= MAX_NUMBER_OF_PAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
        printf("%d | %s | %s\n", PairNumber, color.majorColor, color.minorColor);
         
    }
}
