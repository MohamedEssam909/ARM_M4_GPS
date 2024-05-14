#ifndef Bit_Utilities
#define Bit_Utilities

#define TOGGLE_BIT(reg,bit) reg^=(1<<bit)
#define READ_BIT(reg,bit) (reg&(1<<bit))>>bit

#define GET_BIT(reg1,bit)   ((reg1>>bit)&1)
#define GET_REG(reg)        (reg&0xff)

#define SET(reg,val)        reg |= val
#define SET_BIT(reg,val)    reg |= (1<<val)

#define CLR(reg,val)        reg &=~val
#define CLR_BIT(reg,val)    reg &=~(1<<val)

#endif



