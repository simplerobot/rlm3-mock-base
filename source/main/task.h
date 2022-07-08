#pragma once

#include "rlm3-base.h"


#ifdef __cplusplus
extern "C" {
#endif


typedef uint32_t TickType_t;


#define pdMS_TO_TICKS(X) (X)


extern void vTaskDelay( const TickType_t xTicksToDelay );


#ifdef __cplusplus
}
#endif
