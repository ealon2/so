#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <stdint.h>
typedef struct {
    char* IP_KERNEL;
    char* PUERTO_KERNEL;
} t_config_consola;

extern t_config_consola* CONSOLA_CFG;

#endif
