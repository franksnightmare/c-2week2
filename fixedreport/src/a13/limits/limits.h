#ifndef INCLUDED_LIMITS_
#define INCLUDED_LIMITS_

#include "../units/units.h" 

struct Limits
{
    enum
    {
        ACCELERATE_HOR  = 4,                    // m/s^2 horizontal acc.
        DEFAULT_GFORCE  = 2,
        MAX_GFORCE      = 9,

        BOX_LEFT        = 0,
        BOX_RIGHT       = 200'000,

        DEFAULT_CLIMBRATE_FT = 3000,

        FUEL_WARN       = 25 * 60,              // 25' flight time
        FUEL_EMPTY      = 30 * 60,              // 30' flight time

        MAX_SILENT_TIME = 10,                   // 10" silent time 
                                                // (no fifoMsg was ent)
        NO_TARGET       = 0,
        TARGET_INFORM   = 1,                    // see FighterStatus::checkCone
        TARGET_DELAY    = 3,                    // TARGET_DELAY + alpha / 10
                                                // is the minimum target
                                                // refresh time (seconds)

        MIN_CONE_ANGLE  = 20,                   // minimum (default) and max 
        MAX_CONE_ANGLE  = 140,                  // radar cone angles (degrees)


        TOLERANCE       = 10,                   // considered same alt/dist.


        COLLISION_WARNING_TIME = 20,            // warn if collision within
                                                // this time (seconds)
        COLLISION_TIME = 2,                     // collision if within this
                                                // time

        GND_PT_FACTOR     =     0,
        STD_PT_FACTOR     =     1,
        BOX_PT_FACTOR     =     5,

        TARGET_PTS        =  1000,
        EMPTY_PENALTY     =  5000,
        COLLISION_PENALTY = 10000,

        HEARTBEAT = 60,                 // sign of life sec. fm the interactor


        COLLISION_WARNING_DISTANCE  = static_cast<int>(0.5 + Units::nm2m(5)),
        MAX_RADAR_RANGE = static_cast<int>(0.5 + Units::nm2m(100)),

                                        // when a threat becomes visual
        VISUAL_DISTANCE = static_cast<int>(0.5 + Units::nm2m(8)),
        VISUAL_ALTITUDE = static_cast<int>(0.5 + Units::ft2m(5000)),
        NEAR_DISTANCE   = static_cast<int>(0.5 + Units::nm2m(10)),

    };

    static double constexpr V_MAX    = Units::kts2m_s(700);
    static double constexpr TO_SPEED =  Units::kts2m_s(160);

    static double constexpr BOX_BASE = Units::ft2m(3000);
    static double constexpr BOX_CEIL = Units::ft2m(25'000);

                                                // (also negative (descend))
    static double constexpr MAX_CLIMBRATE = Units::ft_min2m_s(20'000);
    static double constexpr CEILING       = Units::ft2m(50'000); 

    static double constexpr DEFAULT_CLIMBRATE   = 
                                Units::ft_min2m_s(DEFAULT_CLIMBRATE_FT);

    static double constexpr s_earthAcceleration = 9.8;
    static double constexpr s_epsilon = 1e-3;
};
        
#endif
