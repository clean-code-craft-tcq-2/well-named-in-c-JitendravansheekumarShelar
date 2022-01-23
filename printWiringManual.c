#include "ColorCode.h"
#include "printWiringManual.h"

/*Print WiringManual*/
int printWiringManual(void){
    int PairNumber = 1
    ColorPair color;
    
    for(; PairNumber <= MAX_NUMBER_OF_PAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
        printf("%d | %s | %s\n", PairNumber, MajorColorNames[color.majorColor], MinorColorNames[color.minorColor]);
         
    }
    return (PairNumber-1);
}
