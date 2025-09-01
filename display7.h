#ifndef __DISPLAY7_H__
#define __DISPLAY7_H__

// Incluir  librerias
#include <Arduino.h>
#include <stdint.h>

// PROTOTIPOS DE FUNCIONES

// Funcion para configurar display de 7 segmentos 
void configDisplay7(void);

// Funcion para desplegar numero en display 7 segmentos
void desplegarNumero(uint8_t numero);

// Funcion para desplegar punto (1 se despliega y 0 no se despliega)
void desplegarPunto(uint8_t punto);

#endif // __DISPLAY7_H__
