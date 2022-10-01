Prueba Corta # 4

Jocxan Sandi Batista

2018086509 

---

# Prueba corta 4

## 1. Explique el concepto de Time Division Multiplexing y Frequency Division Multiplexing. (25 pts)

**Frequency Division Multiplexing:**

Divide el espectro en bandas de frecuencia (sub canales), en donde cada usuario tiene posesión exclusiva de cierta banda en la que puede enviar su señal. 

**Time Division Multiplexing:**

El medio es utilizado por un único usuario en un determinado periodo de tiempo, es decir se da todo el espectro a un solo usuario, luego este va cambiando entre los usuarios que lo necesiten.

## 2. Explique el concepto de colisión durante el proceso de asignación del canal, comente las diferencias entre medios guiados y medios no guiados. (25 pts)

Ocurre cuando diferentes dispositivos comparten un mismo canal, el canal podría ser una parte del espectro inalámbrico en una región geográfica, o un solo alambre o fibra óptica y cualquier usuario que utilice el canal podría interferir en las señales en envíen otros usuarios en el mismo canal. 

**Medios guiados:**

Entre los cuales se encuentran el par trenzado, cable coaxial, líneas eléctricas, fibra óptica.

En estos puede ocurrir cuando el canal sea semi-duplex, ya que solo hay un canal para enviar y recibir paquetes, si un usuario está enviando el información entonces el canal está ocupado, los demás usuarios tienen que estar leyendo el canal para ver si este se encuentra en uso, en ocasiones un usuario X escucha el canal y se da cuenta que el canal está sin uso, entonces X inicia a transmitir, pero en el mismo instante en el que X estaba escuchando un Y también estaba escuchando y también detecto que el canal estaba vacío por lo que también empezó a trasmitir, en este momento ocurre una colisión.

Para asignar el canal en medios guiados hay diferentes formas, como está el paso de un TOKEN, que le indica al usuario que puede transmitir en el momento en que este lo tenga, una vez termine el pasa el TOKEN al siguiente usuario para que este pueda transmitir. Entre otros algoritmos que pueden seguir este principio.

**Medios no guiados:**

Entre los cuales se encuentran la radio-transmisión, transmisión por microondas y transmisión infrarroja.

Al ser transmisiones por aire este cuesta más la asignación del canal, en una red wireless puede ocurrir colisión si dos modems, están transmitiendo en un mismo canal, por lo que se pueden buscar otro canal para así no chocar y destruir los paquetes.

Se pueden utilizar algoritmos de asignación del canal como Aloha y Aloha Ranurado, además de que estos cuentas con protocolos CSM que sirven para mejorar la asignación del canal y evitar colisiones.

## 3. ¿Como funciona el algoritmo de asignación del canal Aloha y Aloha Ranurado? Explique (20 pts)

**Aloha Puro:**

Permite a los usuarios transmitir cuando tengan datos por enviar, cuando se envía un paquete a la estación se sabe que llegó porque lo devuelve. Utiliza time out logic para garantizar la llegada de los paquetes.


**Aloha Ranurado:**

Se utilizan slots para el envió de datos, cuando se inicia el slot solo se envían las estaciones que están listas para transmitir. Con los slots se puede perder datos pero tiene de ventaja que tiene un tick de reloj que permite a las estaciones enviar los datos.


## 4. ¿Cuáles son las diferencias entre Hub y Switch? ¿Porqué razón el Switch es mejor?

**Hub**
- Conecta NICS de las computadoras.
- Todos los dispositivos conectados usan un solo bus (tienen un mismo dominio de colisión).
- Envía los paquetes a todos los dispositivos conectados. 

**Switch**
- Similares a un bridge.
- Sabe los dispositivos que están conectados y por eso sabe a cual dispositivo enviar el paquete.
- No usa un bus común (No hay colisión entre todos los dispositivos)

**¿Porqué razón el Switch es mejor?**

A diferencia de un Hub, el Switch utiliza un circuito virtual, lo que quiere decir que solo envía los datos al dispositivo que deben ir, esto mejora el dominio de colisión por lo que ya no habrá colisión entre todos los dispositivos, solamente entre el dispositivo que envía, el que recibe y el switch. 


## 5. ¿Es posible transportar tramas Ethernet embebidas en imágenes PNG? Justifique su respuesta. (30 pts)

Sí, como las tramas están compuestas por 1s y 0s, se hace de forma más sencilla, ya que se pueden utilizar ciertas tramas de un PNG y cambiarlas por las tramas Ethernet, esto siguiendo el principio de los archivos BMP, que se puede utilizar para ocultar información en el bitmap. 
