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
#ifndef GPIO_H
#define GPIO_H

/** @file gpio.h
 ** @brief Proporciona funciones para controlar pines GPIO.
 **/

/* === Headers files inclusions ================================================================ */

#include <stdint.h>
#include <stdbool.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */

/* === Public data type declarations =========================================================== */

/**
 * @brief Tipo de datos para la estructura gpio_s.
 *
 * Define un tipo de puntero a la estructura gpio_s.
 */
typedef struct gpio_s * gpio_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/**
 * @brief Constructor de un pin GPIO.
 *
 * Esta función actúa como un "constructor",
 * inicializando el puerto y el pin, y configurando el pin como entrada por defecto.
 *
 * @param port Puerto GPIO donde se encuentra el pin.
 * @param bit Bit del pin dentro del puerto GPIO.
 *
 * @return Una nueva instancia de gpio_t que representa el pin GPIO.
 */
gpio_t gpioCreate(uint8_t port, uint8_t bit);

/**
 * @brief Establece el modo de salida de un pin GPIO.
 *
 * Esta función configura un pin GPIO como salida o no, dependiendo del valor del parámetro
 * `output`.
 *
 * @param gpio Instancia de gpio_t que representa el pin.
 * @param output Valor booleano que indica si el pin debe ser configurado como salida (true) o
 * entrada (false).
 */
void gpioSetOutput(gpio_t gpio, bool output);

/**
 * @brief Establece el estado lógico de un pin GPIO configurado como salida.
 *
 * Esta función establece el estado lógico del pin (alto o bajo) si está configurado como salida.
 *
 * @param gpio Instancia de gpio_t que representa el pin.
 * @param state Estado lógico del pin GPIO (true para alto, false para bajo).
 */
void gpioSetState(gpio_t gpio, bool state);

/**
 * @brief Obtiene el estado lógico de un pin GPIO configurado como entrada.
 *
 * Esta función lee el estado lógico del pin GPIO, si está configurado como entrada.
 *
 * @param gpio Instancia de gpio_t que representa el pin.
 *
 * @return El estado lógico del pin (true para alto, false para bajo).
 */
bool gpioGetState(gpio_t gpio);

/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* GPIO_H */
