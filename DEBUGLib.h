#ifndef __DEBUGLib__h__
#define __DEBUGLib__h__

#ifdef DEBUGLib_DEBUG
    #define DEBUG_PRINT(x)    Serial.print  (x)
    #define DEBUG_PRINTLN(x)  Serial.println(x)
    #define DEBUG_PRINT2(x,y)    Serial.print  (x,y)
    #define DEBUG_PRINTLN2(x,y)  Serial.println(x,y)
    #define DEBUG_PRINTF(x,y)    Serial.printf(x,y)
#else
    #define DEBUG_PRINT(x)
    #define DEBUG_PRINTLN(x)
    #define DEBUG_PRINT2(x,y)
    #define DEBUG_PRINTLN2(x,y)
    #define DEBUG_PRINTF(x,y)
#endif

#endif
