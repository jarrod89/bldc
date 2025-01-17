/*
    Copyright 2018, 2022 Joel Svensson        svenssonjoel@yahoo.se
                    2022 Benjamin Vedder

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/** \file print.h */

#ifndef PRINT_H_
#define PRINT_H_

#include <stdint.h>

#include "lbm_types.h"

/** Initialize the print_value subsystem.
 *  print value depends on a stack and that stack is initialized here using a storage array provided by the user.
 * \param print_stack_storage Array to use as storage for stack data.
 * \param print_stack_size The number of uint32_t elements in the array.
 * \return 1 for success and 0 for failure.
 */
extern int lbm_print_init(uint32_t *print_stack_storage, uint32_t print_stack_size);

/** Print an lbm_value into a buffer provided by the user.
 *  If printing fails, the buffer may contain an error message.
 *
 * \param buf Buffer to print into.
 * \param len The size of the buffer in bytes.
 * \param t The value to print.
 * \return negative number for failure and the number of printed characters on success.
 */
extern int lbm_print_value(char *buf,unsigned int len, lbm_value t);

#endif
