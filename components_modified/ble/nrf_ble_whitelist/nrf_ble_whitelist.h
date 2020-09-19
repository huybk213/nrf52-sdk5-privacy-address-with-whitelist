/**
 * Copyright (c) 2018 - 2019, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/** @file
 *
 * @defgroup nrf_ble_whitelist Module
 * @{
 * @ingroup ble_sdk_lib
 * @brief Module for handling the BLE whitelist.
 *
 * @details The whitelist Module handles the BLE whitelist for your application.
 *          The module offers several criteria for filtering the devices available for connection,
 *          and it can also work in the simple mode without using the filtering.
 *          If an event handler is provided, your main application can react to a filter match or to the need of setting the whitelist.
 *          The module can also be configured to automatically
 *          connect after it matches a filter or a device from the whitelist.
 *
 * @note    The whitelist Module also supports applications with a multicentral link.
 */

#ifndef NRF_BLE_WHITELIST_H__
#define NRF_BLE_WHITELIST_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "ble.h"
#include "ble_gap.h"
#include "app_util.h"
#include "sdk_errors.h"
#include "sdk_config.h"

#ifdef __cplusplus
extern "C"
{
#endif

ret_code_t nrf_ble_whitelist_add(ble_gap_addr_t *addr, uint8_t * count);

uint8_t nrf_ble_whitelist_cnt(void);

ret_code_t nrf_ble_whitelist_enable(void);

ret_code_t nrf_ble_whitelist_reset(void);

ret_code_t nrf_ble_whitelist_irk_add(ble_gap_id_key_t *irk_key, uint8_t * count);

uint8_t nrf_ble_whitelist_irk_cnt(void);

bool nrf_ble_whitelist_is_running(void);


#ifdef __cplusplus
}
#endif

#endif // NRF_BLE_WHITELIST_H__

/** @} */
