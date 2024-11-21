/************************************************************************************************
Copyright (c) 2023, Veronica Ruiz Galvan <veronica.ruizgalvan@hotmail.com>

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
#ifndef HAL_H
#define HAL_H

/**
 * @file hal.h
 * @brief Proporciona funciones de bajo nivel (HAL) para controlar los pines GPIO.
 */

/* === Headers files inclusions ================================================================ */
#include <stdint.h>
#include <stdbool.h>
/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Configura la dirección de un pin GPIO.
 *
 * Esta función establece la dirección de un pin GPIO, especificando si debe ser configurado como
 * entrada o salida.
 *
 * @param port El puerto del pin GPIO.
 * @param bit El bit del pin del puerto.
 * @param output Indica si el pin debe ser configurado como salida = true o como entrada = false.
 */
void hal_gpio_set_direction(uint8_t port, uint8_t bit, bool output);

/**
 * @brief Establece el valor de salida de un pin GPIO.
 *
 * Esta función establece el valor lógico de un pin GPIO configurado como salida. Puede poner el pin
 * en estado alto (activo) o bajo (inactivo), dependiendo del valor del parámetro `active`.
 *
 * @param port El puerto del pin GPIO.
 * @param bit El bit del pin del puerto.
 * @param active Estado lógico a establecer en el pin: true = alto, false = bajo.
 */
void hal_gpio_set_output(uint8_t port, uint8_t bit, bool active);

/**
 * @brief Lee el valor de un pin GPIO configurado como entrada.
 *
 * Esta función obtiene el valor lógico de un pin GPIO que está configurado como entrada.
 *
 * @param port El puerto del pin GPIO.
 * @param bit El bit del pin dentro del puerto.
 *
 * @return El estado lógico del pin GPIO :true = alto, false = bajo.
 */
bool hal_gpio_get_input(uint8_t port, uint8_t bit);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* HAL_H */
