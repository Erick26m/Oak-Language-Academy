# Leviathan-Gym--POO
Proyecto Integrador POO

Mi proyecto consiste en un sistema básico para administrar un gimnasio. El sistema permite representar clientes, entrenadores, membresías y rutinas. Para resolver el problema, utilicé una clase madre llamada Persona, ya que tanto los clientes como los entrenadores comparten datos como nombre, edad e ID. A partir de esta clase se crean las clases hijas Cliente y Entrenador, aplicando herencia.

<img width="734" height="697" alt="image" src="https://github.com/user-attachments/assets/cd6d4e51-6d13-4eca-992a-255a67bb3c79" />

## Funcionalidad
El sistema Leviathan Gym está compuesto por 5 clases principales que mantienen relaciones claras entre sí: Persona, Cliente, Entrenador, Membresia y Rutina.

La clase Persona funciona como una clase abstracta que contiene la información común de cualquier persona dentro del gimnasio, como nombre, edad e id. A partir de esta clase se derivan Cliente y Entrenador mediante herencia.

La clase Cliente representa a los usuarios del gimnasio y almacena información adicional relacionada con su condición física y objetivos de entrenamiento. Cada cliente posee una Membresia y una Rutina asociadas, lo que permite gestionar tanto el acceso al gimnasio como el plan de entrenamiento que seguirá durante su proceso.

Por otro lado, la clase Entrenador representa al personal encargado de diseñar y asignar rutinas a los clientes. Además de los atributos heredados de Persona, cada entrenador cuenta con una especialidad y años de experiencia, lo que permite identificar su área de conocimiento dentro del gimnasio.

La clase Membresia administra la información relacionada con los distintos planes ofrecidos por el gimnasio, incluyendo el tipo de membresía, costo y duración. Esta información es utilizada por los clientes para determinar las características de su acceso al servicio.

La clase Rutina gestiona los planes de entrenamiento asignados a los clientes. En ella se almacena información como el nombre de la rutina, el objetivo principal, la duración y el nivel de dificultad. Esto permite adaptar los entrenamientos a las necesidades específicas de cada cliente.


## Consideraciones

Casos donde el proyecto podría dejar de funcionar:

- Registrar un cliente con edad menor o igual a 0
- Registrar peso o altura negativos
- Calcular el IMC con altura igual a 0
- Registrar dos personas con el mismo ID
