#include <18F458.h>
#device ADC=10

#FUSES NOWDT                    //No Watch Dog Timer

#use delay(crystal=20000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7) 


