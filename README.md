# Oak-Language-Academy
Proyecto Integrador POO

Mi proyecto consiste en un sistema básico para una academia de idiomas. El programa permite registrar datos desde consola de un estudiante, un profesor, una inscripción y un curso. Después de capturar la información, el sistema asigna el curso al estudiante por medio del profesor y permite mostrar los datos registrados.

El sistema funciona como una simulación básica de una academia de idiomas. Permite registrar un estudiante, un profesor, una inscripción y un curso. Después, el sistema realiza la asignación del curso y muestra los datos usando los métodos de cada clase.

 ## Diagrama UML
<img width="1012" height="768" alt="image" src="https://github.com/user-attachments/assets/ec714d2d-8ed6-432f-87d9-2ec6b4bf9961" />




## Funcionalidad
El sistema Oak Language Academy está compuesto por 6 clases principales que mantienen relaciones claras entre sí: Persona, Estudiante, Profesor, Inscripcion, Curso y Academia.

La clase Persona funciona como una clase abstracta que contiene la información común de cualquier persona dentro de la academia, como nombre, edad y matrícula. A partir de esta clase se derivan las clases Estudiante y Profesor mediante herencia. Además, se utiliza un método virtual puro llamado obtenerResumen(), lo que permite aplicar polimorfismo al mostrar la información de estudiantes y profesores.

La clase Estudiante representa al alumno registrado dentro de la academia. Esta clase almacena información propia del estudiante, como su promedio, su inscripción y el curso que tiene asignado. También cuenta con métodos para asignar un curso y para mostrar un resumen de sus datos principales.

La clase Profesor representa al personal docente encargado de asignar cursos a los estudiantes. Además de los atributos heredados de Persona, cada profesor cuenta con un idioma que enseña y años de experiencia. Esta clase puede asignar un curso a un estudiante mediante el método asignarCurso().

La clase Inscripcion administra la información relacionada con el tipo de inscripción del estudiante. En esta clase se almacena el tipo de inscripción, el costo y la duración en meses. En el programa, el usuario puede elegir entre diferentes tipos de inscripción y el sistema asigna automáticamente el costo y la duración correspondiente.

La clase Curso representa el curso que será asignado al estudiante. El curso almacena el nombre y la duración en horas.

La clase Academia funciona como la clase principal que administra el flujo del programa. Esta clase se encarga de mostrar el menú, registrar los datos desde consola, crear los objetos principales, asignar el curso al estudiante mediante el profesor y mostrar la información registrada.

## Consideraciones
Como el programa usa cin, los datos de texto deben escribirse sin espacios. En caso de necesitar varias palabras, se recomienda usar guion bajo.

También se consideran posibles casos donde el sistema podría generar resultados incorrectos:

Ingresar datos numéricos en campos de texto o texto en campos numéricos.

Registrar edades menores o iguales a cero.

Elegir una opción de inscripción no válida.

Intentar mostrar datos antes de registrarlos.
