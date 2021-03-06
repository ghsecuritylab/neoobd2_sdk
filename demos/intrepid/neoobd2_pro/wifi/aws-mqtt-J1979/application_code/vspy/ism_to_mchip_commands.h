/*
 * Contains definitions pertaining to commands issued by ISM Chip to instruct the
 * main chip to perform certain tasks
 */

#ifndef ISM_TO_MCHIP_COMMANDS_H_
#define ISM_TO_MCHIP_COMMANDS_H_

#define ISM_CMD_CTRL_LED_COLOR (0x01)
#define ISM_CMD_CTRL_PWR_OUT_OBD (0x02)

#define COLOR_WIFI_OFFLINE (0x00ff0000)
#define COLOR_WIFI_ONLINE (0x000000ff)

typedef struct _sfifoISMChipLEDControl
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t reserved[5];
} sfifoISMChipLEDControl;

#endif /* ISM_TO_MCHIP_COMMANDS_H_ */
