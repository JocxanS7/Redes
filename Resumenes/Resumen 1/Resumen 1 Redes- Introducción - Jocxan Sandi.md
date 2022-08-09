Tecnológico de Costa Rica.

Escuela de Ingeniería en Computación.

IC: 7602-Redes - 2 Semestre 2022.

2018086509 - Jocxan Sandi Batista.

---
# Redes de ejemplo

En esta sección del capitulo se cubren los diversos tipos de redes que existe.

## Internet 

Es la red más conocida de todas, aún así no es considerada una red del todo, ya que en su lugar es un conjunto de diferentes redes que utilizan protocolos en común.

## ARPANET

Inicia a fines de la decada de 1950, por motivos de seguridad, ya que el Departamento de Defensa (DoD) quería una red de control y comando que sobreviviera a una guerra nuclear. Esto debido a que en esos años las comunicaciones dependían de la red de telefónica pública, que contaba con muchas vulnerabilidades.

Para encontrar una solución se crea una organización de investigación para la defensa, ARPA (Agencia de Proyectos de Investigación Avanzada). Ya en 1967 se propone una subred de conmutación de paquetes, siendo esta la solución al problema de la red de telefónia pública. 

Esta subred llamada ARPANET consistía en dar a cada host su propio enrutador, con minicomputadoras IMPs, para dar confiadibilidad, cada IMP estaría conectado al menos a otros dos IMPS. *"El software de la subred constaba del extremo IMP de la conexión host a IMP, del protocolo IMP a IMP y de un protocolo de IMP origen a IMP destino diseñado para mejorar la confiabilidad"* (Tanenbaum, 2003)

Con la llegada de ARPANET tambiém llegaron diferentes utilerías de red como lo son los protocolos TCP/IP que fueron necesarios para que varias redes pudieran juntarse, además, aparecieron los sockets como un programa de interfaz adecuado para la red. Las LANs se unieron a ARPANET gracias a esta utilería de forma sencilla.

## NSFNET 

Fue creada en busca de que todas la universidades de los Estados Unidos pudieran tener una red, ya que la existente solo permitía a universidades que tuvieran un contrato de investigación con el DoD. 

La National Science Foundation (NSF), dicidió contruir una red dorsal para conectar seis centros de suspercomputadoras, que a su vez cada una tenía una minicomputadora que estaban conectadas entre sí formando una subred. Lo que dió como resultado la primera red WAN TCP/IP.

Además, la NSF creó algunas redes regionales que se conectaban a la red dorsal para que miles de usuarios tuvieran acceso a estas supercomputadoras, dandole el nombre de NSFNET.


## Uso del Internet

Menciona que estar en Internet es tener una computadora con la pila de protocolos de TCP/IP y que tiene una dirección IP que puede recibir y enviar paquetes a culquier otra maquina conectada a internet. Internet tenía cuatro aplicaciones principales desde sus inicios:

* Correro Electrónico.
* Noticias.
* Inicio remoto de sesión. (Iniciar sesión en cualquier otra maquina)
* Transferencia de archivos. 

## Arquitectura del Internet 

La forma en que funciona el internet desde un cliente, para utilizar una maquinan que se conecte a internet, se necesita un moden que cambie las señales para que entren o salgan, este moden puede estar conectado al sistema telefónico, este a su vez puede estar conectado a un POP (Punto de Presencia), puede ser o no local, luego se conecta el ISP regional que a su vez está conectada a una red dorsal. 

Si la información necesita ir a otra red dorsal primero debe ir a un NAP, un cuarto en el cual al menos hay un enrutador para cada red dorsal. 


## Ethernet

Surge por la necesidad de muchas empresas que tenían multiples computadoras que requieren interconexión. Se contaba con un sistema llamado ALOHANET pero este se caía cuando el trafico hacia la computadora central era muy pesado.

Para este problema surgio Ethernet que consistía en un cable coaxial grueso al cual las computadoras estaban conectadas, y para evitar que el sistema se cayera, las computadoras tienen que escuchar para verificar si otra estaba emitiendo información, si esto sucede tiene que esperar para poder emitir. 

## LANs inalámbricas

Surgen a raíz de la creación de las computadoras personales, en las que los usuarios querían conectarse a la red. Se estandarizó las LANS inalámbricas con el nombre de 802.11 comunmente conocido como WiFi. Se hizo que las LANs inalámbricas fueran compatibles con el sistema Ethernet.



## Bibliografía 
> Tanenbaum, A. (2003). Computer Networks (4ta edición ed.). NJ: Prentice Hall.

