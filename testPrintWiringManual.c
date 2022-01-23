#include "ColorCode.h"
#include "testPrintWiringManual.h"

/*Print Wiring Manual*/
void testPrintWiringManual(void){
    int PairNumber = 1
    ColorPair color;
    
    for(; PairNumber <= MAX_NUMBER_OF_PAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
        printf("%d | %s | %s\n", PairNumber, MajorColorNames[color.majorColor], MinorColorNames[color.minorColor]);
         
    }
    assert ((PairNumber-1) == MAX_NUMBER_OF_PAIR);
}
