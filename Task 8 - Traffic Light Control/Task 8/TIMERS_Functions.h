#ifndef TIMERS_FUNCTIONS_H_
#define TIMERS_FUNCTIONS_H_

#include "DIO_utilites.h"
#include "DIO_Functions.h"
#include "DIO_reg.h"
#include "std_type.h"


void TIMER0_Normal_No_Prescaler(void);
void TIMER0_Normal_8_Prescaler(void);
void TIMER0_Normal_64_Prescaler(void);
void TIMER0_Normal_256_Prescaler(void);
void TIMER0_Normal_1024_Prescaler(void);
u8 TIMER0_Get_Trigger(u8 TimerConfig);
void TIMER0_Set_Period(int period);

#endif
