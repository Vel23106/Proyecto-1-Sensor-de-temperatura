#include "display7.h"

#define dA 26
#define dB 33
#define dC 23
#define dD 21
#define dE 22
#define dF 25
#define dG 27
#define dp 19
// PROTOTIPOS DE FUNCIONES

// Funcion para configurar display de 7 segmentos 
void configDisplay7(void){
// Configurar como salidas
    pinMode(dA, OUTPUT);
    pinMode(dB, OUTPUT);
    pinMode(dC, OUTPUT);
    pinMode(dD, OUTPUT);
    pinMode(dE, OUTPUT);
    pinMode(dF, OUTPUT);
    pinMode(dG, OUTPUT);
    pinMode(dp, OUTPUT);
// Teniendo en cuenta que se va a inicializar como catodo comun
    digitalWrite(dA, LOW);
    digitalWrite(dB, LOW);
    digitalWrite(dC, LOW);
    digitalWrite(dD, LOW);
    digitalWrite(dE, LOW);
    digitalWrite(dF, LOW);
    digitalWrite(dG, LOW);
    digitalWrite(dp, LOW);
}

// Funcion para desplegar numero en display 7 segmentos
void desplegarNumero(uint8_t numero){
switch(numero) {
    case 0: // 0
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, HIGH);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, LOW);
        break;

    case 1: // 1
        digitalWrite(dA, LOW);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, LOW);
        digitalWrite(dE, LOW);
        digitalWrite(dF, LOW);
        digitalWrite(dG, LOW);
        break;

    case 2: // 2
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, LOW);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, HIGH);
        digitalWrite(dF, LOW);
        digitalWrite(dG, HIGH);
        break;

    case 3: // 3
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, LOW);
        digitalWrite(dF, LOW);
        digitalWrite(dG, HIGH);
        break;

    case 4: // 4
        digitalWrite(dA, LOW);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, LOW);
        digitalWrite(dE, LOW);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, HIGH);
        break;

    case 5: // 5
        digitalWrite(dA, HIGH);
        digitalWrite(dB, LOW);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, LOW);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, HIGH);
        break;

    case 6: // 6
        digitalWrite(dA, HIGH);
        digitalWrite(dB, LOW);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, HIGH);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, HIGH);
        break;

    case 7: // 7
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, LOW);
        digitalWrite(dE, LOW);
        digitalWrite(dF, LOW);
        digitalWrite(dG, LOW);
        break;

    case 8: // 8
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, HIGH);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, HIGH);
        break;

    case 9: // 9
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, LOW);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, HIGH);
        break;
        default: 
        digitalWrite(dA, HIGH);
        digitalWrite(dB, HIGH);
        digitalWrite(dC, HIGH);
        digitalWrite(dD, HIGH);
        digitalWrite(dE, HIGH);
        digitalWrite(dF, HIGH);
        digitalWrite(dG, HIGH);
        break;
}

}

// Funcion para desplegar punto (1 se despliega y 0 no se despliega)
void desplegarPunto(uint8_t punto){
    if (punto == 1){
        digitalWrite(dp, HIGH);
    } else {
        digitalWrite(dp,LOW);
    }
}
