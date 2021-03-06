// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _DRIVER_SPI_LCD_H_
#define _DRIVER_SPI_LCD_H_
#include <stdint.h>

//*****************************************************************************
//
// Make sure all of the definitions in this header have a C binding.
//
//*****************************************************************************

#ifdef __cplusplus
extern "C"
{
#endif

#define Tickrate 1000 // 200
#define SMS_FPS 60
#define SNDRATE 22100 // 22050
#define DEFAULT_FRAGSIZE  SNDRATE/SMS_FPS // 128
#define  DEFAULT_WIDTH        256
#define  DEFAULT_HEIGHT       192

void ili9341_write_frame(const uint16_t x, const uint16_t y, const uint16_t width, const uint16_t height, const uint8_t *data[]);
void ili9341_init();
void audio_frame_call();
int init_sound();
static void spi_test();
static void spi_write_byte(const uint8_t data);

#ifdef __cplusplus
}
#endif

#endif //  __SPI_H__
