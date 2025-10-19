//
// Created by Harry Soutar on 27/02/2025.
//

#include "smb.h"
#include "N5110.h"
#include "mbed.h"

N5110 lcd(PC_7, PA_9, PB_10, PB_5, PB_3, PA_10);

void level::init(float contrast, float brightness){
    lcd.init(LPH7366_1);
    lcd.setContrast(contrast);   
    lcd.setBrightness(brightness);
}

void players::mario(int x, int y) { //prints mario to the LCD
    constexpr bool mario[16][16] = {
        {false, false, false, false, false, true, true, true, true, true, false, false, false, false, false, false},
        {false, false, false, false, true, true, true, true, true, true, true, true, false, false, false, false},
        {false, false, false, false, true, true, true, true, true, false, true, false, false, false, false, false},
        {false, false, false, true, true, false, true, true, true, false, true, true, true, false, false, false},
        {false, false, false, true, true, false, false, true, true, true, false, true, true, true, false, false},
        {false, false, false, true, true, true, true, true, true, false, false, false, true, false, false, false},
        {false, false, false, false, false, true, true, true, true, true, true, true, false, false, false, false},
        {false, false, false, false, true, true, true, true, true, true, false, false, false, false, false, false},
        {false, false, false, true, true, true, false, true, false, true, true, true, true, false, false, false},
        {false, false, true, true, true, false, true, false, true, false, true, true, true, true, false, false},
        {false, false, true, true, true, false, true, true, true, false, true, true, true, true, false, false},
        {false, false, true, true, true, true, true, true, true, true, true, true, true, true, false, false},
        {false, false, true, true, true, true, true, false, false, true, true, true, true, true, false, false},
        {false, false, false, false, true, true, true, false, false, true, true, true, false, false, false, false},
        {false, false, false, true, true, true, false, false, false, false, true, true, true, false, false, false},
        {false, false, true, true, true, true, false, false, false, false, true, true, true, true, false, false}
    };

    lcd.drawSprite(x, y, 16, 16, (int*)mario);
}
void players::luigi(int x, int y) {
    constexpr bool luigi[16][16] = {
        {false, false, false, false, false, true, true, true, true, true, false, false, false, false, false, false},
        {false, false, false, false, true, true, true, true, true, true, true, true, false, false, false, false},
        {false, false, false, false, true, true, true, true, true, false, true, false, false, false, false, false},
        {false, false, false, true, true, false, true, true, true, false, true, true, true, false, false, false},
        {false, false, false, true, true, false, false, true, true, true, false, true, true, true, false, false},
        {false, false, false, true, true, true, true, true, true, false, false, false, true, false, false, false},
        {false, false, false, false, false, true, true, true, true, true, true, true, false, false, false, false},
        {false, false, false, false, true, true, false, true, true, true, false, false, false, false, false, false},
        {false, false, false, true, true, true, false, true, true, true, true, true, true, false, false, false},
        {false, false, true, true, true, true, false, true, true, true, true, true, true, true, false, false},
        {false, false, true, true, true, true, false, false, false, true, true, true, true, true, false, false},
        {false, false, true, true, true, true, true, true, true, true, true, true, true, true, false, false},
        {false, false, true, true, true, true, true, false, false, true, true, true, true, true, false, false},
        {false, false, false, false, true, true, true, false, false, true, true, true, false, false, false, false},
        {false, false, false, true, true, true, false, false, false, false, true, true, true, false, false, false},
        {false, false, true, true, true, true, false, false, false, false, true, true, true, true, false, false}
    };
    lcd.drawSprite(x, y, 16, 16, (int*)luigi);
}
void mobs::goomba(int x, int y) {
    constexpr bool goomba[16][16] = {
        {false, false, false, false, false, false, true, true, true, true, false, false, false, false, false, false},
        {false, false, false, false, false, true, true, true, true, true, true, false, false, false, false, false},
        {false, false, false, false, true, true, true, true, true, true, true, true, false, false, false, false},
        {false, false, false, true, true, true, true, true, true, true, true, true, true, false, false, false},
        {false, false, true, true, true, true, true, true, true, true, true, true, true, true, false, false},
        {false, true, true, true, false, true, true, true, true, true, true, false, true, true, true, false},
        {false, true, true, true, false, true, true, true, true, true, true, false, true, true, true, false},
        {true, true, true, true, false, true, false, true, true, false, true, false, true, true, true, true},
        {true, true, true, true, false, false, false, true, true, false, false, false, true, true, true, true},
        {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true},
        {false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false},
        {false, false, false, false, true, true, true, true, true, true, true, true, false, false, false, false},
        {false, false, true, true, true, true, true, true, true, true, true, true, true, true, false, false},
        {false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false},
        {false, true, true, true, true, true, true, false, false, true, true, true, true, true, true, false},
        {false, false, true, true, true, true, true, false, false, true, true, true, true, true, false, false}
    };
    lcd.drawSprite(x, y, 16, 16, (int*)goomba);
}

void level::platform(int length, int x, int y){
    bool arr[4][length];
    for(int i = 0; i < length + 1; i++){
        arr[0][i] = true;
        arr[1][i] = true;
        arr[2][i] = true;
        arr[3][i] = true;
    }
    lcd.drawSprite(x, y, 4, length, (int*)arr);
}

void level::mysteryBlock(int x, int y){
    bool mysteryBlock[4][4] = {
                                {true, true, true, true},
                                {true, true, true, true}, 
                                {true, true, true, true},
                                {true, true, true, true}
    };
    lcd.drawSprite(x, y, 4, 4, (int*) mysteryBlock);
}

void level::tube(int x, int y){
    bool tube[8][11] = {
        {true, true, true, true, true, true, true, true, true, true, true,},
        {true, false, false, false, false, false, false, false, false, false, true},
        {false, false, true, false, false, false, false, false, true, false, false},
        {false, false, true, false, false, false, false, false, true, false, false},
        {false, false, true, false, false, false, false, false, true, false, false},
        {false, false, true, false, false, false, false, false, true, false, false},
        {false, false, true, false, false, false, false, false, true, false, false},
        {false, false, true, false, false, false, false, false, true, false, false},
    };
    lcd.drawSprite(x, y, 11, 8, (int*) tube);
}

void level::dangerPit(int length, int x){
    bool arr[3][length];
    for(int i; i < length + 1; i++){
        arr[0][i] = rand() & 1;
        arr[1][i] = rand() & 1;
        arr[2][i] = rand() & 1;
    }
    lcd.drawSprite(x, 46, 3, length, (int*) arr);
}

void level::flag(int x, int y){
    bool arr[13][9] = {
        {false, true, true, true, false, false, false, false, false},
        {false, true, true, true, true, true, false, false, false},
        {false, true, true, true, true, true, true, true, false},
        {false, true, true, true, true, true, true, true, true},
        {false, true, true, true, true, true, true, true, false},
        {false, true, true, true, true, true, false, false, false},
        {false, true, true, true, false, false, false, false, false},
        {false, true, true, true, false, false, false, false, false},
        {false, true, true, true, false, false, false, false, false},
        {true, true, true, true, false, false, false, false, false},
        {true, true, true, true, false, false, false, false, false}
    };
    lcd.drawSprite(x-7, y-6, 13, 9, (int*) arr);
}