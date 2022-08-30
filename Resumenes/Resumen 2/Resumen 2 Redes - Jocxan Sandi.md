Tecnológico de Costa Rica.

Escuela de Ingeniería en Computación.

IC: 7602-Redes - 2 Semestre 2022.

2018086509 - Jocxan Sandí Batista.

Resumen #2 y #3

---
# Capítulo 2 

##  2.5 LA RED TELEFÓNICA PÚBLICA CONMUTADA

### 2.5.1 Estructura del sistema telefónico.

#### Red totalmente interconectada.

En sus inicios la estructura del sistema telefónico era tener una conexión de una casa al resto, por lo que si habían **n** usuarios del sistema entonces en cada casa tenían que haber **n-1** conexiones al resto de las casas, por lo que esto no era viable. 

#### Conmutador centralizado.

Para dar solución a las multiples conexiones se creó una oficina de conmutación en la cual habían cables hacía todos los usuarios y cuando alguien quería realizar una llamada a la oficina de conmutación y ahí se hacía una conexión manual hacía el destino final de la llamada con un cable puenteador. 

#### Jerarquía de dos niveles.

Aún así no se podían realizar llamadas de larga distancia por lo que se empezaron a conectar las oficinas de conmutación entre sí, pero esto dejó de ser práctico y se crearon oficinas de conmutación de nivel 2. Por último, la jerarquía creció a cinco niveles.

### 2.5.3 El circuito local: módems, ADSL e inalámbrico.   

**Problemas que pueden tener las líneas de transmisión de datos.** 

1. Atenuación: Pérdida de energía conforme la señal se propaga hacia su destino.
2. Distorsión: Diferencia de velocidad a la que los diferentes componentes de Fourier se propagan.
3. Ruido: Energía no deseada de fuentes distintas al transmisor.

#### Módems

El módem es un dispositivo que acepta un flujo de bits en serie como entrada y que produce una portadora modulada mediante el uso de diferentes tipos de modulación. Este módem se conecta a la computadora y al sistema de red telefónico. 

**Tipos de modulación.**

- Modulación de amplitud.
- Modulación de frecuencia.
- Modulación de fase.

**Conceptos importantes**

- Ancho de banda: Es el rango de frecuencias que atraviesa al medio con atenuación mínima. Es una propiedad física del medio (por lo general, de 0 a alguna frecuencia máxima) y se mide en hertzios (Hz).
- Tasa de baudios (Tasa de símbolos): Es la cantidad de muestras por segundo que se realizan, cada muestra envía una porción de información.
- Tasa de bits: Es la cantidad de información que se envía por el canal y es igual a la cantidad de símbolos por segundo por la cantidad de bits por símbolo.

**Tipos de trasmisión de datos de los Módems**

- Simplex: Conexión que permite el tráfico en una sola dirección.
- Semidúplex: Conexión que permite el tráfico en una sola dirección.
- Dúplex total: Conexión que permite el tráfico en una sola dirección.


#### Líneas digitales de suscriptor Asimétricas 

En el lugar donde cada circuito local termina en la oficina central, el cable pasa a través de un filtro que atenúa todas las frecuencias abajo de 300 Hz y arriba de 3400 Hz, por lo que los datos también se restringen a esta banda estrecha. Para evitar esto y que los ADSL funcionen, es que cuando se ocupa enviar datos se conecta el cliente a un conmutador que no realiza este filtro. 

El ADSL Funcionaba dividiendo el espectro disponible en el circuito local, de alrededor de 1.1 MHz, en tres bandas de frecuencia: servicio telefónico convencional, canal ascendente y canal descendente. Uno de los objetivos de este sistema era que superaran los 56kbps, al final el estándar ADSL permite velocidades de hasta 8 Mbps para el flujo descendente y de 1 Mbps para el flujo ascendente.

En la residencia del cliente se instala un NID (Dispositivo de Interfaz de Red. Cerca del NID o dentro de él hay un divisor, un filtro analógico que separa la banda de 0-4000 Hz utilizada por la voz (POTS) de
los datos.

### 2.5.4 Troncales y multiplexión. 

#### Multiplexión por división de frecuencia

Para realizar esto, primero se eleva la frecuencia de los canales de voz, cada uno en una cantidad diferente, después de lo cual se pueden combinar, porque en ese momento no hay dos canales que ocupen la misma porción del espectro.

![Imagen1 ](imagenes/MDF.png ) 

#### Multiplexión por división de longitud de onda

Fibras se juntan en un combinador óptico, cada una con su energía presente a diferentes longitudes de onda. Los cuatro haces se combinan en una sola fibra compartida para transmisión a un destino distante.

####  Multiplexión por división de tiempo (TDM)

***Sólo se puede utilizar para datos digitales.**

##### SONET/SDH 

Es un sistema tradicional de TDM, que buscaba la interconexión de diferentes operadores telefónicos. Es un sistema síncrono, controlado por un reloj maestro con una precisión de alrededor de 1 parte en 109. La trama básica de SONET es un bloque de 810 bytes, estas se pueden describir mejor como un rectángulo de bytes de 90 columnas de ancho por nueve filas de alto. 

Las primeras tres columnas de cada trama se reservan para información de administración del sistema. Las primeras tres filas contienen el encabezado de sección; las siguientes seis contienen el encabezado de línea. El encabezado de sección o línea se genera y verifica al comienzo y al final de cada sección o línea.
## 2.7 TELEVISIÓN POR CABLE

### 2.7.1 Televisión por antena comunal.

Se utiliza una antena que capte la señal y un amplificador (head end) para enviar la señal a través de un cable coaxial a la comunidad, se usa un derivador para tomar la señal del cable coaxial y enviarla a la casa a través de un cable derivador. 

### 2.7.2 Internet a través de cable.

Como los sistemas de televisión por cable crecieron se cambiaron los cables por fibra de ancho de banda alto como en los sistemas telefónicos, esto para las largas distancias y coaxial para llevar la señal a las casas, también conocido como HFC (Red Híbrida de Fibra Óptica y Cable Coaxial).

Una de las desventajas de usar un solo cable para toda una comunidad por lo que se comparte el ancho de banda con todos los vecinos, por otra parte, el ancho de banda del cable coaxial es mucho mayor que el del cable de par trenzado (sistema telefónico).

### 2.7.3 Asignación de espectro.

Como en este sistema se comparte el cable para televisión y para internet, se dividió el espectro, la televisión ocupa de 54–550 MHz, introdujeron canales ascendentes en la banda de 5–42 MHz y las frecuencias en el extremo superior (+550) para el flujo descendente. 

### 2.7.4 Módems de cable.

Para tener acceso a internet se necesita un módem de cable, este tiene una interfaz en la computadora y otra en la red del cable, se puede utilizar la interfaz directa de un módem a la computadora a través de Ethernet o USB.

Como el cable es compartido, los datos se encriptan en ambas direcciones para la seguridad de la transmisión de datos

### 2.7.5 ADSL en comparación con el cable.

Son similares pero cada uno tienen sus puntos fuertes, el cable usa un cable coaxial que es mejor que un cable de par trenzado, pero el cable comparte su ancho de banda entre todos sus usuarios por lo que si llega un nuevo usuario, los ya existentes se van a ver perjudicados. Al contrario en ADSL no ocurre esto, pero si alguien quiere adquirirlo y vive muy lejos de la oficina central, no podrá acceder a este servicio.

## Bibliografía 
> Tanenbaum, A. (2003). Computer Networks (4ta edición ed.). NJ: Prentice Hall.

