Tecnológico de Costa Rica.

Escuela de Ingeniería en Computación.

IC: 7602-Redes - 2 Semestre 2022.

2018086509 - Jocxan Sandí Batista.

Resumen #4 y #5

---


# Capítulo 3 

## 3.5 VERIFICACIÓN DE LOS PROTOCOLOS

### 3.5.1 Modelos de máquinas de estado finito

En este modelo se presenta que la máquina siempre esta en un estado específico. Tomando como ejemplo el protocolo 3, el receptor tiene 2 estados importantes, los cuales son en espera de la trama 0 y en espera de la trama 1, además, todos los otros estados pueden considerarse como transitorios, ya que dan paso de un estado principal a otro. 

El estado del sistema completo es la combinación de todos los estados de las dos máquinas de protocolos y del canal. En relación con los estados del canal, este presenta 4 estados, una trama cero o una trama 1 viajando del emisor al receptor, una trama de confirmación de recepción que va en el otro sentido o un canal vacío. Cuando se dice que una trama está en el canal es posible que la trama haya sido recibida por el receptor pero no procesada. 

El estado de inicio se denomina como  estado inicial y este puede dar paso a uno o a todos los demás estados, para determinar a cuales puede dar paso se hace un **análisis de asequibilidad**, este análisis puede ser util para determinar si un protocolo es correcto o no. Un modelo de máquina de estados finitos de un protocolo se puede considerar como un cuádruple (S, M, I, T), donde:
- S es el conjunto de estados en que pueden estar los procesos y el canal.
- M es el conjunto de tramas que pueden intercambiarse a través del canal.
- I es el conjunto de estados iniciales de los procesos.
- T es el conjunto de transiciones entre los estados.

![Imagen1 ](imagenes/Protocolo3.png ) 


### 3.5.2 Modelos de red de Petri

La red de Petri tiene cuatro elementos básicos: lugares, transiciones, arcos y tokens. Lo podemos comparar con los autómatas, donde un lugar representa un estado en el que puede estar parte del sistema. El token se representa con un punto según el lugar en el que se encuentre, además están los arcos que son los puntos de entrada o salida de un lugar. La red Petri tiene transiciones, algo que no podemos encontrar en los autómatas pero estas son representadas como línea horizontales o verticales entre los arcos. Se habilita una transición si hay cuando menos un token de entrada en cada uno de sus lugares de entrada. 

---
# Capítulo 4

## 4.6 BLUETOOTH 

Un poco de historia del Bluethooth  es que la empresa L. M. Ericsson en conjunto con otras cuatro empresas IBM, Intel, Nokia y Toshiba, formó un grupo de interés especial con el propósito de desarrollar un estándar inalámbrico para interconectar dispositivos y accesorios a través de radios inalámbricos de bajo consumo de energía, corto alcance y económicos.

### 4.6.1 Arquitectura de Bluetooth

La unidad básica de un sistema Bluetooth es una piconet, que consta de un nodo maestro y hasta siete nodos esclavos activos, pueden haber varias piconet que se conectan a través de un nodo puente que forma parte de ambas piconet, dando como resultado un scatternet. 

Además de los nodos activos existen los nodos estacionados, hold y sniff. Los nodos estacionados son nodos de bajo consumo y son puestos en este estado por el nodo maestro. Todas las comunicaciones son administradas por el maestro, ya que solo existe conexión entre maestro-esclavo. 

### 4.6.2 Aplicaciones de Bluetooth

La especificación de Bluetooth designa el soporte de 13 aplicaciones entre los que podemos encontrar son:

| Nombre | Descripción |
|--------|-------------|
|Acceso genérico |Procedimientos para el manejo de enlaces
|Acceso a LAN | Protocolo entre una computadora móvil y una LAN fija
|Acceso telefónico a redes | Permite que una computadora portátil realice una llamada por medio de un teléfono móvil
|Fax | Permite que un fax móvil se comunique con un teléfono móvil
|Intercom (Intercomunicador) | Walkie-talkie digital
|Envío de objetos | Ofrece una manera de intercambiar objetos simples
|Transferencia de archivos | Proporciona una característica para transferencia de archivos más general


### 4.6.3 La pila de protocolos de Bluetooth

La estructuras de capas de Bluetooth no siguen el modelo OSI o el 802, sin embargo pueden ser similares como lo son la capa de radio física con la capa física del modelo OSI. 


![Imagen2 ](imagenes/Arquitectura-Protocolos.png ) 

**Capa de middleware**

- Administrador de enlaces: Se encarga de establecer canales lógicos entre dispositivos, incluyendo
administración de energía, autenticación y calidad de servicio.
- El protocolo de adaptación y control de enlaces lógicos: Aísla a las capas superiores de los detalles de
la transmisión.
- Protocolos de audio y control: Se encargan del audio y el control, respectivamente.


### 4.6.4 La capa de radio de Bluetooth

La capa de radio traslada los bits del maestro al esclavo, o viceversa. La banda se divide en 79 canales de 1 MHz cada uno, la forma de asignar estos de una manera equitativa es por medio de saltos de frecuencia.

### 4.6.5 La capa de banda base de Bluetooth

La capa de banda base convierte el flujo de bits puros en tramas y define algunos formatos clave. Las tramas se transmiten por un canal lógico, llamado enlace, entre el maestro y un esclavo. También existen dos tipos de canales:

- Asíncrono no Orientado a la Conexión: Se utiliza para datos conmutados en paquetes disponibles a intervalos irregulares.
- Síncrono Orientado a la Conexión: A este tipo de canal se le asigna una ranura fija
en cada dirección. Las tramas que se envían a través de estos nunca se retransmiten.


### 4.6.6 La capa L2CAP de Bluetooth

La capa L2CAP tiene tres funciones principales:

1. Acepta paquetes de hasta 64 KB provenientes de las capas superiores y los divide en tramas para transmitirlos. Las tramas se reensamblan nuevamente en paquetes en el otro extremo.

2. Maneja la multiplexión y desmultiplexión de múltiples fuentes de paquetes.

3. Se encarga de la calidad de los requerimientos de servicio. Además durante el establecimiento de
los enlaces se negocia el tamaño máximo de carga útil permitido.


### 4.6.7 Estructura de la trama de Bluetooth

1. Código de acceso: Tiene 72 bits, en los cuales se indica cuál es el nodo maestro. 
2. Encabezado: Que se divide en 6 partes, (dirección, tipo, F, A, S, Suma de verificación) que están compuestas por (3,4,1,1,1,8) bits respectivamente. Este se repite 3 veces por lo que al final es un encabezado de 54 bits. 
3. Datos: Compuesto por hasta 2744 bits para una transmisión de cinco ranuras.
---
## Bibliografía 
> Tanenbaum, A. (2003). Computer Networks (4ta edición ed.). NJ: Prentice Hall.