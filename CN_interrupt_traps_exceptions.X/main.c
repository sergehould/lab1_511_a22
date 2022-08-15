/******************************************************************************
 * FileName:	main.c 
 *	
 * Name:	Lab# 
 *
 * Description: To complete ...
 *  
 * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author  	Date                	Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * MJ      	June 15 2022  	v1.0.0      	To complete...
 *                                 
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/




#include <xc.h>
#include <stdint.h>
#include "initBoard.h"
#include "console.h"
#include "util.h"
#include <stdio.h>

int main(void){
    lcd_init();
    stdio_set(C_LCD);
    printf("\n\nLab1 - CN, traps\n & exceptions");
    ios_init();
    heartbeat_init();
	while (1){
        // infinite super loop
        heartbeat();
    }   
}
