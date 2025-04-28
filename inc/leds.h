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

#ifndef LEDS_H
#define LEDS_H

/**
 * @file leds.h
 * @brief Declaración de la biblioteca para el control de LEDs
 */

/* === Inclusión de archivos de cabecera ====================================================== */
#include <stdint.h>
/* No se incluyen archivos adicionales */

/* === Cabecera para C++ ====================================================================== */

#ifdef __cplusplus
extern "C" {
#endif

/* === Definición de macros públicas ========================================================= */

/* No se definen macros en este archivo */

/* === Declaraciones de tipos de datos públicos ============================================ */

/* No se definen tipos de datos en este archivo */

/* === Declaraciones de variables públicas =================================================== */

/* No se definen variables globales en este archivo */

/* === Declaraciones de funciones públicas =================================================== */

/**
*@brief Funcion para inicializar la biblioteca de leds
*
*@note Esta funcion debe ser llamada antes de utilizar cualquier otra funcion de la biblioteca
*
*@param direccion_puerto Puntero al puerto GPIO que controla los leds
*/
void LedsInit(uint16_t * direccion_puerto);

/**
*@brief Funcion para prender un led individual
*
*
*@param led Numero de led que se desea prender (1 a 16)
*/
void LedTurnOnSingle(uint8_t led);

/**
*@brief Funcion para apagar un led individual
*
*
*@param led Numero de led que se desea apagar (1 a 16)
*/
void LedTurnOffSingle(uint8_t led);

/**
*@brief Funcion para prender todo el puerto de leds
*
*
*/
 void LedTurnOnAll(void);

/**
*@brief Funcion para apagar todo el puerto de leds
*
*
*/
 void LedTurnOffAll(void);
 
/**
*@brief Funcion para apagar todo el puerto de leds
*
*@param led Numero de led que se desea consultar (1 a 16)
*/
uint8_t IsLedOn(uint8_t led);
/* === Fin de la documentación ============================================================= */

#ifdef __cplusplus
}
#endif

#endif /* LEDS_H */
