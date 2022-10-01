# Comandos de Docker

### Docker images | head 
Muestra las imágenes que tiene.

### Docker ps 
Muestra los contenedores que están corriendo. 

### Docker pull image_name
Descarga la imagen con este nombre.

### Docker rm image_id/name 
Eliminar una imagen.

### Docker create image_name 
Crea un contenedor de la imagen dada.

En caso de que se le quiera dar un nombre al contenedor se hace de la siguiente manera:
Docker create --name "nombre" image_name 

Para mapear los puertos se hace de la siguiente manera:
Docker create -p#puerto1:#puerto2 --name "nombre" image_name.

#puerto1: hace referencia al puerto de la computadora donde esta instalado docker.
#puerto2: hace referencia al puerto del contenedor.

Esto se hace en casos de que se tengan 2 o mas contenedores de una misma imagen. 



### Docker start container_id/name 
Inicia el contenedor dado.

###  Docker stop container_id/name 
Detiene el contenedor dado. 


### Docker run -d imagen_name
Primero verifica si exista la imagen, en caso de que no exista, se descarga.
Segundo se hace un contenedor de esta imagen. 

El -d es para evitar ver los logs y poder salirse y que el contenedor se pueda seguir ejecutando. 


### Docker compose up
Ejecuta el archivo docker-compose.yml

### Docker compose down
Elimina todo lo que son imágenes, redes y contenedores 