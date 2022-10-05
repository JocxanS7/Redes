IC: 7602-Redes - Semestre 2.

Jocxan Sandi Batista.

Clase del 27/09/2022


---

## Dudas sobre la tarea


![Imagen1](imagenes/Dudas.png)

**Se pueden tener más de 2 redes en el docker, se puede usar host, no solo bridge.**

### Conexiones:

**MACVLAN 1 :**

- Tiene una conexión a la computadora.
- Los usuarios del MACVLAN 1 y quieran salir a internet se conectan al Router 1 y este a la red bridge que sale por la red pública. 


**MACVLAN 1 :**

- Los usuarios del MACVLAN 2 y quieran salir a internet se conectan al Router 2, luego se envían los datos por el DF al Router 1 y este a la red bridge que sale por la red pública.

### DNS

- El DNS solo establece una jerarquía:

www.lan01.com -> FQDN.

com -> Clasificador.
lan01 -> Dominio.
www -> Host. 

**Los dominios se usan para filtro de contenido.**

En relación con el proyecto, el usuario le pide el IP al DHCP, se le da un nombre aleatorio y registra en el DNS: nmk.lan01.1039.


## Materia en relación con el proyecto.  

### IP Address

Notación decimal con: XXXXY, donde el Y es el prefijo de red de 0-32, cantidad de bits que tiene la mascara de red. 

**Configuraciones básicas que tiene una red:**

- Mask: Numero de host que puede tener, cantidad de IPs que puede asignar.
- Numero de red: Identidad al grupo de IPs. Permite hacer un filtro de contenido. Se usa en conjunto con Mask. 
- Default gateway: Es opcional, porque puede ser una red local.
Cuando no se sabe una dirección que no pertenece a una red local, se manda por aquí y el DW sabra que hacer.


**Cómo obtener el numero de host de una red.**

IP = 185/5

10111011   -> 187
00000111   -> /5

Se le aplica un AND.

00000011   -> 3  # de host.


**Cómo obtener el numero de red.**

10111011   -> 187
11111000   -> /5 -> Mask

Se le aplica un AND.

10111000   -> 184  # de red.


- Si el AND de IP1 con Mask y IP2 con Mask da igual, significa que es trafico local.
- Para ver la tabla de routeo de la computadora en el CMD se escribe: "route print"
![Imagen1](imagenes/TABLA_DE_ROUTEO.JPG)

### En relación con el proyecto**

**Reglas Router 1.**

- Trafico red local.
- Red externa -> Router 2.
- 0.0.0.0.000 -> Default gateway.

**Reglas Router 2.**

- Trafico red local.
- Red externa. -> Router 1.
- 0.0.0.0.000 -> Router 1 -> Default gateway.

**Routeo**

![Imagen2](imagenes/ROUTEO.png)

Cuando se envía un paquete, como capa de transporte y capa de red se conocen, en el router se cambia el IP source, que antes era el IP de la computadora, ahora es la IP del router. 


**Investigar para el proyecto:**

- NAT
- Post rooting masquerade.
- Firewall para el router.
