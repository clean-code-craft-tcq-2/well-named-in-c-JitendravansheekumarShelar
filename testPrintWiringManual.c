#include "ColorCode.h"
#include "GetColorFromPairNumber.h"
#include "testPrintWiringManual.h"
#include <assert.h>

/*Print Wiring Manual*/
void testPrintWiringManual(void){
    int PairNumber = 1;
    ColorPair color;
    
    for(; PairNumber <= MAX_NUMBER_OF_PAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
        printf("%d | %s | %s\n", PairNumber, color.majorColor, color.minorColor);
         
    }
    assert ((PairNumber-1) == MAX_NUMBER_OF_PAIR);
}
