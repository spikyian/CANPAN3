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

// The possible NVs
#define NV_STARTUP              1
#define NV_FLASHRATE            2
#define NV_BRIGHTNESS           3                             // 32 entries 3..34
#define NV_SWITCHMODE           (NV_BRIGHTNESS+NUM_BUTTONS)   // 32 entries 35..66
#define NV_STARTUP_EVENT_DELAY  (NV_SWITCHMODE + NUM_BUTTONS) // 67

// The possible NV_STARTUP values
//#define NV_STARTUP_RESTORE  0
//#define NV_STARTUP_NOTHING  1
//#define NV_STARTUP_SCAN     2
//#define NV_STARTUP_ALLOFF   3
// Startup value bit fields
#define NV_STARTUP_RESTORESWITCHES  0x01
#define NV_STARTUP_RESTORELEDS      0x02

// Possible NV_SWITCHMODE bit values
#define NV_SWITCHMODE_PAIRED 1

