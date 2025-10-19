//
// Created by Harry Soutar on 27/02/2025.
//

#ifndef SMB_H
#define SMB_H
class level { // The class used to draw the map and characters in the level. The object can be set-up for each level e.g level levelOne();
    public:
        level();
        // level objects - individual blocks and environmental objects that can be used to make up maps.
        void platform(int length, int x, int y); // length of the platform, x & y coordinates for centre point of the placement.
        void mysteryBlock(int x, int y); // fixed size of the block, x & y coordinates for placement.
        void tube(int x, int y); // x & y coordinates for placements.
        void flag(int x, int y); // x & y coordinates for placements.
        void dangerPit(int length, int x); // x coordinates for placements & length of the pit.
        void init(float contrast, float brightness);
    };

class players {
    public:
        players();
        void mario(int x, int y);
        void luigi(int x, int y);
};

class mobs {
    public:
        mobs();
        void goomba(int x, int y); //(x, y) starting point for the 'mob'
};

#endif