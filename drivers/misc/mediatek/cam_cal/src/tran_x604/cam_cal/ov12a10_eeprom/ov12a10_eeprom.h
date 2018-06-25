/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ov12a10.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 *   Header file of CAM_CAL driver
 *
 *
 * Author:
 * -------
 *   John Wei (MTK07407)
 *
 *============================================================================*/
#ifndef __CAM_CAL_H
#define __CAM_CAL_H
#include <linux/i2c.h>
unsigned int ov12a10_eeprom_selective_read_region(u32 addr, u8 *data, u16 i2c_id, u32 size);


#endif /* __CAM_CAL_H */

