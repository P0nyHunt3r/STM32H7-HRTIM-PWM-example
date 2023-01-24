/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define QSPI_BK1_IO2_Pin GPIO_PIN_2
#define QSPI_BK1_IO2_GPIO_Port GPIOE
#define LED_BLUE_Pin GPIO_PIN_3
#define LED_BLUE_GPIO_Port GPIOE
#define BTN_K1_Pin GPIO_PIN_13
#define BTN_K1_GPIO_Port GPIOC
#define QSPI_CLK_Pin GPIO_PIN_2
#define QSPI_CLK_GPIO_Port GPIOB
#define LCD_LED_Pin GPIO_PIN_10
#define LCD_LED_GPIO_Port GPIOE
#define LCD_CS_Pin GPIO_PIN_11
#define LCD_CS_GPIO_Port GPIOE
#define LCD_SCL_Pin GPIO_PIN_12
#define LCD_SCL_GPIO_Port GPIOE
#define LCD_WR_RS_Pin GPIO_PIN_13
#define LCD_WR_RS_GPIO_Port GPIOE
#define LCD_SDA_Pin GPIO_PIN_14
#define LCD_SDA_GPIO_Port GPIOE
#define QSPI_BK1_IO0_Pin GPIO_PIN_11
#define QSPI_BK1_IO0_GPIO_Port GPIOD
#define QSPI_BK1_IO1_Pin GPIO_PIN_12
#define QSPI_BK1_IO1_GPIO_Port GPIOD
#define QSPI_BK1_IO3_Pin GPIO_PIN_13
#define QSPI_BK1_IO3_GPIO_Port GPIOD
#define USB1_DN_Pin GPIO_PIN_11
#define USB1_DN_GPIO_Port GPIOA
#define USB1_DP_Pin GPIO_PIN_12
#define USB1_DP_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOD
#define QSPI_BK1_NCS_Pin GPIO_PIN_6
#define QSPI_BK1_NCS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
