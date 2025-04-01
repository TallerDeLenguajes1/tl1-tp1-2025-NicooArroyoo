[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# ¿Por qué incluir un `.gitignore`?

-  **Evita archivos innecesarios**: Como archivos temporales, binarios, logs o configuraciones locales.
-  **Mejora el rendimiento**: Git no perderá tiempo rastreando archivos irrelevantes.
-  **Protege información sensible**: Evita exponer claves (ej: en `.env`).
-  **Mantiene el repositorio limpio**: Omite dependencias o archivos autogenerados.


# ¿Cuándo crear el `.gitignore`?

1. **Al iniciar un proyecto**: Primera acción recomendada (buena practica).
2. **Al agregar herramientas nuevas**: IDEs (VS Code, IntelliJ), frameworks, o entornos virtuales.
3. **Si hay archivos no deseados en commits**: Añade reglas y elimína los archivos del historial con `git rm --cached`.


# Pasos para Crear y Configurar el `.gitignore`

## 1. Crear el Archivo
- **Ubicación**: Crear archivo en la raíz del proyecto (o en subdirectorios si se necesitan reglas específicas).
- **Comando por terminal Bash**  touch .gitignore

## 2. Especificar elementos a ignorar
 Abrir el archivo .gitignore y definir los patrones de archivos/directorios que se desea excluir. Por ejemplo: 
- **Extensiones de archivo**
         *.log
         *.tmp
- **Archivos específicos**
        .env
        config.local.json
- **Archivos específicos**
        .env
        config.local.json
        
## 3.Validar el Funcionamiento
 Verifica que Git ignore los elementos listados:
        git status --ignored

## 4.Agregar el .gitignore al repositorio
 Agregar y commit a el archivo:
        git add .gitignore
        git commit -m "Agregar archivo .gitignore"   


----


# Regla para ingnorar archivo `ignorado.txt`

Añadir una línea específica en el archivo .gitignore para excluir el archivo ignorado.txt

- **Dentro de .gitignore**
     ignorado.txt

- **Notas**
    - Si el archivo está en un subdirectorio, especificar la ruta relativa (ej: carpeta/ignorado.txt).
    - Usar *.txt si deseas ignorar todos los archivos con extensión .txt.