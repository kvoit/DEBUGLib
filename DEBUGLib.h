#ifndef __DEBUGLib__h__
#define __DEBUGLib__h__

#ifdef DEBUGLib_DEBUG
    #define DEBUG_BEGIN(...)     Serial.begin(__VA_ARGS__)
    #define DEBUG_PRINT(...)     Serial.print(__VA_ARGS__)
    #define DEBUG_PRINTLN(...)   Serial.println(__VA_ARGS__)
    #define DEBUG_PRINTF(...)    Serial.printf(__VA_ARGS__)    
    
    #define DEBUG_TIMESTAMP(...) \
        Serial.print(millis()); \
        Serial.print(": "); \
        Serial.println(__VA_ARGS__)
#else
    #define DEBUG_BEGIN(...)
    #define DEBUG_PRINT(...)
    #define DEBUG_PRINTLN(...)
    #define DEBUG_PRINTF(...)

    #define DEBUG_TIMESTAMP(...)
#endif

#endif
