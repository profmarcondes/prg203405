#ifndef CONFIG_H
#define CONFIG_H

#include <QtMath>

namespace Config {

    namespace Viewport {
        const int WIDTH = 600;
        const int HEIGHT = 600;
        const int FPS = 33;
    };

    namespace Spaceship {
        const qreal WIDTH = 25;
       const qreal HEIGHT = 70;

        const qreal ACCELERATION = 0.1;
        const qreal DEACCELERATION = 0.1;
        const qreal ANGULAR_ACCELERATION = 0.1;

        const qreal MAX_SPEED = 10;
        const qreal MIN_SPEED = -3;
        const qreal INC_SPEED = 0.05;
        const qreal DEC_SPEED = -0.01;

        const int ROTATION = 5;
    };

};


#endif // CONFIG_H
