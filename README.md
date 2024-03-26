# tl1-tp1-2024-franCordobaDeveloper - Córdoba Francisco Javier

## ¿ Por qué es conveniente incluir un archivo .gitignore?
El archivo .gitignore es conveniente incluirlo en un repositorio de Git para especificar qué archivos y directorios deben ser ignorados por Git y no deben ser rastreados ni versionados. Esto es útil para evitar que archivos y directorios irrelevantes o sensibles, como archivos de configuración local, dependencias de proyectos, archivos de compilación y otros archivos generados, sean incluidos en el control de versiones.

## Es conveniente incluir un archivo .gitignore en los siguientes casos:
- Proyectos con múltiples colaboradores: Cuando trabajas en un proyecto con otros colaboradores, cada desarrollador puede tener diferentes entornos de trabajo o preferencias de herramientas. Incluir un .gitignore ayuda a mantener la coherencia entre los desarrolladores al ignorar los mismos archivos y directorios en todos los entornos.
- Proyectos con dependencias y archivos generados: Muchos proyectos de desarrollo tienen dependencias que generan archivos o directorios, como bibliotecas externas, módulos de compilación, archivos de caché, registros, entre otros. Ignorar estos archivos generados evita el ruido en el control de versiones y mantiene el repositorio limpio.
- Proyectos sensibles: En proyectos que contienen información sensible, como contraseñas, claves de API, tokens de acceso, etc., es fundamental evitar que estos datos se incluyan en el repositorio. Un archivo .gitignore puede especificar patrones para ignorar archivos que contienen información confidencial.

## ¿Cómo configuraría el archivo .gitignore?

Para crear un archivo .gitignore local, crea un archivo de texto y llámalo .gitignore (recuerda incluir el . al principio). Después se edita el archivo. Cada línea nueva debería contener el archivo o carpeta que quieres que Git ignore. Por ejemplo: 

#### Ignorar archivos del sistema de Mac
.DS_store

#### Ignorar carpeta node_modules
node_modules

#### Ignorar todos los archivos de texto
*.txt

#### Ignorar archivos relacionados con claves de una API
.env

#### Ignorar archivos de configuración SASS
.sass-cache

