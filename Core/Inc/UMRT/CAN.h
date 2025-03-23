/*
 * CAN.h
 *
 *  Created on: Mar 22, 2025
 *      Author: quinndt
 */

#ifndef INC_UMRT_CAN_H_
#define INC_UMRT_CAN_H_

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_can.h"

void CAN_Setup(CAN_HandleTypeDef* hcan);

#endif /* INC_UMRT_CAN_H_ */
