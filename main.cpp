#include "smb.h" // "Super Mario Bros library "SMB" abbreviation
#include "mbed.h"
#include "N5110.h"

level level_1;

int main()
{
    level_1.init(0.55, 0.5);
    level_1.platform(10, 10, 4);
    level_1.mysteryBlock(10, 12);
    level_1.platform(10, 16, 6);
    return 0;
}

