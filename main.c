#include <reg52.h>
#include <intrins.h>

#define uint8_t unsigned char
#define uint16_t unsigned int 

/* sbit */
sbit key1 = P3^2;
sbit key2 = P3^3;
sbit key3 = P3^4;
sbit key4 = P3^5;

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;


void KeyInit(void);
void KeyScan(void);
void LedInit(void);
void DelayMs(uint16_t time_ms);
void main(void){
    KeyInit();
    LedInit();
    while (1)
    {
        /* code */
		KeyScan();
		DelayMs(50);
    }
}
/* KeyInit */
void KeyInit(void){
    key1 = 1; 
    key2 = 1; 
    key3 = 1; 
    key4 = 1;
}
/* KeyScan */
void KeyScan(void){
	if (key1==0||key2==0||key3==0||key4==0)
    {
        /* code */
        DelayMs(80);
        if (key1 == 0)
        {
            /* code */
            DelayMs(50);
            led1 = !led1;
        } else if (key2 == 0)
        {
            /* code */
            DelayMs(50);
            led2 = !led2;
        } else if (key3 == 0)
        {
            /* code */
            DelayMs(50);
            led3 = !led3;
        } else if (key4 == 0)
        {
            /* code */
            DelayMs(50);
            led4 = !led4;
        }
		DelayMs(80);
    }
}
void LedInit(void){
    led1 = 1; 
    led2 = 1; 
    led3 = 1; 
    led4 = 1;
}
/* delay ms function */
void DelayMs(uint16_t time_ms){
    uint16_t i, j;
    for (i = 0; i < time_ms; i++)
    {
        /* code */
        for (j = 0; j < 114; j++)
        {
            /* none */
        }
    }  
}









