#include "ColorCode.h"
#include "GetColorFromPairNumber.h"
#include "testPrintWiringManual.h"

/*Print Wiring Manual*/
void testPrintWiringManual(void){
    
    ColorPair color;    
    for(int PairNumber = 2; PairNumber <= MAX_NUMBER_OF_PAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
        printf("%d | %s | %s\n", PairNumber, color.majorColor, color.minorColor);
         
    }
}
