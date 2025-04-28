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

#ifndef MAIN_H
#define MAIN_H

/**
 * @file main.h
 * @brief Declaración de la función principal del programa
 *
 * Este archivo contiene la declaración de la función principal del programa que se ejecuta al
 * iniciar el sistema. El propósito de esta función es iniciar el programa y manejar los errores
 * de manera básica. El valor de retorno indica si la ejecución fue exitosa o si hubo un error.
 */

/* === Inclusión de archivos de cabecera ====================================================== */

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
 * @brief Función principal del sistema, se ejecuta al iniciar el programa
 *
 * La función `main` es el punto de entrada del programa. Es la primera función que se ejecuta
 * cuando se inicia el sistema. Generalmente, en esta función se configuran los recursos del sistema
 * y se inicia la ejecución principal del programa. El valor de retorno indica el estado de la
 * ejecución: un valor cero indica éxito, y un valor negativo indica algún tipo de error.
 *
 * @return int El valor de retorno es cero si la ejecución fue exitosa, negativo si hubo un error.
 */
int main(void);

/* === Fin de la documentación ============================================================= */

#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */
