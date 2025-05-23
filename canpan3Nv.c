/*
  This work is licensed under the:
      Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
   To view a copy of this license, visit:
      http://creativecommons.org/licenses/by-nc-sa/4.0/
   or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.

   License summary:
    You are free to:
      Share, copy and redistribute the material in any medium or format
      Adapt, remix, transform, and build upon the material

    The licensor cannot revoke these freedoms as long as you follow the license terms.

    Attribution : You must give appropriate credit, provide a link to the license,
                   and indicate if changes were made. You may do so in any reasonable manner,
                   but not in any way that suggests the licensor endorses you or your use.

    NonCommercial : You may not use the material for commercial purposes. **(see note below)

    ShareAlike : If you remix, transform, or build upon the material, you must distribute
                  your contributions under the same license as the original.

    No additional restrictions : You may not apply legal terms or technological measures that
                                  legally restrict others from doing anything the license permits.

   ** For commercial use, please contact the original copyright holder(s) to agree licensing terms

    This software is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE
 */
/**
 *	The CANPAN program.
 *
 * @author Ian Hogg 
 * @date October 2024
 * 
 */ 

#include <xc.h>
#include "module.h"
#include "canpan3Nv.h"
#include "nv.h"
        
/**
 * The Application specific NV defaults are defined here.
 */
uint8_t APP_nvDefault(uint8_t index) {
    if (index < NV_NUM) {
        // Global NVs
        if (index == NV_STARTUP)
                return 0; // Restore switches
        if (index == NV_FLASHRATE)
                return HALF_SECOND/1000;
        if (index < (NV_BRIGHTNESS + NUM_LEDS))
                return 16;
        if (index <= (NV_SWITCHMODE + NUM_BUTTONS))
                return 0x00;
        if (index == NV_STARTUP_EVENT_DELAY)
            return 0;
    }
    return 0;
}

/**
 * We validate NV values here.
 * We currently only validate the TYPE.
 */
NvValidation APP_nvValidate(uint8_t index, uint8_t value)  {
    if ((index == NV_STARTUP) &&(value > 3)) {
        return INVALID;
    }
    return VALID;
}

/**
 * We perform the necessary action when an NV changes value.
 */
void APP_nvValueChanged(uint8_t index, uint8_t value, uint8_t oldValue) {
}