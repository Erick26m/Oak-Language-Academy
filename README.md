# Leviathan-Gym--POO
Proyecto Integrador POO
Mi proyecto consiste en un sistema básico para administrar un gimnasio. El sistema permite representar clientes, entrenadores, membresías y rutinas. Para resolver el problema, utilicé una clase madre llamada Persona, ya que tanto los clientes como los entrenadores comparten datos como nombre, edad e ID. A partir de esta clase se crean las clases hijas Cliente y Entrenador, aplicando herencia.

La clase Cliente se relaciona con Membresia porque cada cliente debe contar con una membresía activa. También se relaciona con Rutina, ya que el cliente puede tener una rutina asignada según su objetivo físico. La clase Entrenador se encarga de asignar rutinas a los clientes.

Casos donde el proyecto puede dejar de funcionar:

Edad ≤ 0

Peso o altura negativos

IMC con altura = 0

Rutina inexistente

Membresía inválida

IDs repetidos

Cliente no registrado
