/************************************************************************************************
Copyright (c) 2025, Luis Francisco Herrera Garay <lf.herreragaray@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

/**
 * @file leds.c
 * @brief Definicion de la biblioteca para el control de LEDs
 */

/* === Inclusión de archivos de cabecera ====================================================== */
#include "leds.h"
/* No se incluyen archivos adicionales */

/* === Cabecera para C++ ====================================================================== */

/* === Definición de macros  ========================================================= */
//! @brief Mascara para apagar todos los leds
#define ALL_LEDS_OFF 0X0000
//! @brief Mascara para prender todos los leds
#define ALL_LEDS_ON 0XFFFF
//! @brief Desplazamiento de los LEDs para obtener la mascara
#define LED_TO_BIT_OFFSET 1
//! @brief Constante con el primer bit para generar una mascara
#define FIRST_BIT 1
//! @brief Constante del estado del led para generar una mascara
#define LED_STATUS 1

/* === Declaraciones de tipos de datos privadas ============================================ */

/* No se definen tipos de datos en este archivo */

/* === Declaraciones de variables privadas =================================================== */
//! @brief Variabla privada para almacener la direccion del puerto de salida
static uint16_t * port_address;

/* === Declaraciones de funciones privadas =================================================== */
/**
 * @brief Funcion privada para convertir el numero de un led en una mascara de bits
 *
 *@param led Numero de led para el que se desea generar la mascara de bits
 *@return uint16_t Mascara de bits con 1 en la posicion correspondiente al led
 */
static uint16_t LedToMask(uint8_t led);

/* === Declaraciones de tipos de datos públicos ============================================ */

/* No se definen tipos de datos en este archivo */

/* === Declaraciones de variables públicas =================================================== */

/* No se definen variables globales en este archivo */

/* === Declaraciones de funciones públicas =================================================== */

/* === Implementacion de funciones privadas =================================================== */
uint16_t LedToMask(uint8_t led) {
    return (FIRST_BIT << (led - LED_TO_BIT_OFFSET));
}

/**
 * @brief
 *
 *
 */
void LedsInit(uint16_t * port) {
    port_address = port;
    LedTurnOffAll();
}

/**
 * @brief
 *
 *
 */
void LedTurnOnSingle(uint8_t led) {
    *port_address |= LedToMask(led);
}

/**
 * @brief
 *
 *
 */
void LedTurnOffSingle(uint8_t led) {
    *port_address &= ~LedToMask(led);
}

/**
 * @brief
 *
 *
 */
void LedTurnOnAll(void) {
    *port_address = ALL_LEDS_ON;
}

/**
 * @brief
 *
 *
 */
void LedTurnOffAll(void) {
    *port_address = ALL_LEDS_OFF;
}

/**
 * @brief
 *
 *
 */
uint8_t IsLedOn(uint8_t led) {
    return *port_address >> (led - LED_TO_BIT_OFFSET) & LED_STATUS;
}
/* === Fin de la documentación ============================================================= */
