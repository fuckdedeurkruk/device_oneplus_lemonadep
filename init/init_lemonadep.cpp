/*
 * Copyright (C) 2021-2022 crDroid Android Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t lemonadep_info = {
    .brand = "OnePlus",
    .device = "OnePlus9Pro",
    .name = "OnePlus9Pro_EEA",
    .model = "LE2123",
    .build_fingerprint = "OnePlus/OnePlus9Pro_EEA/OnePlus9Pro:11/RKQ1.201105.002/2109102008:user/release-keys",
};

void vendor_load_properties() {
    set_dalvik_heap();
    set_variant_props(lemonadep_info);
}
