#include "ColorCode.h"
#include "printWiringManual.h"

/*Print WiringManual*/
void printWiringManual(void){
    int PairNumber = 1;
    ColorPair color;
    
    for(PairNumber = 1; PairNumber <= MAXPAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
         printf("\n*********************");
         printf("\n Major Color : %s  ", MajorColorNames[color.majorColor]);
         printf("\n Minor Color : %s  ", MinorColorNames[color.minorColor]);
         printf("\n Color Code  : %d  ", PairNumber);
         printf("\n*********************");
    }
}
