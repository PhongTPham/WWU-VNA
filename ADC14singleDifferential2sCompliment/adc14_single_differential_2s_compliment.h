/*
 * adc14_single_differntial_2s_compliment.h
 *
 *  Created on: May 23, 2019
 *      Author: Phong Pham
 *      
 *      Just a header file for the differential_2s compliment file
 */

#ifndef ADC14_SINGLE_DIFFERNTIAL_2S_COMPLIMENT_H_
#define ADC14_SINGLE_DIFFERNTIAL_2S_COMPLIMENT_H_

 /* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>

#include <string.h>

/* Statics */
static volatile float adcResult;
static float convertToFloat(uint16_t result);

int adc_diff_main(void);
void ADC14_diff_IRQHandler(void);
static float convertToFloat(uint16_t result);


#endif /* ADC14_SINGLE_DIFFERNTIAL_2S_COMPLIMENT_H_ */
