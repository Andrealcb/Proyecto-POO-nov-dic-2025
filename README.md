# Proyecto: Tienda ⌂

Simulador de una tienda desarrollado en **C++** utilizando **Programación Orientada a Objetos**, **herencia**, **composición**, múltiples archivos (`.h` y `.cpp`), y un menú interactivo en consola. 

---

## ¿Para qué sirve este proyecto? (ᵔᵕᵔ)　

Este programa permite simular una tienda básica con las siguientes capacidades:

* Crear productos con nombre, precio y cantidad.
* Registrar usuarios y administradores (herencia).
* Agregar productos al carrito (composición).
* Comprar productos (actualizar inventario).
* Mostrar el inventario existente.
* Mostrar contenido del carrito.
* Encapsular correctamente datos mediante getters/setters.
* Probar clases organizadas en múltiples archivos.

---

## ¿Para qué NO sirve? ┬┬﹏┬┬

* No guarda datos en archivos ni bases de datos. 
* No mantiene la información después de cerrar el programa.
* No aplica descuentos avanzados, reportes ni interfaz gráfica.

---

##  Estructura del proyecto

```
Proyecto/
tienda.dev
│
├── main.cpp
│
├── Producto.h
├── Producto.cpp
│
├── Usuario.h
├── Usuario.cpp
│
├── Admin.h
├── Admin.cpp
│
├── Carrito.h
├── Carrito.cpp
│
├── Tienda.h
└── Tienda.cpp
```

---

## Descripción de las clases (según UML)

### **Producto**

* Atributos: nombre, precio, cantidad
* Métodos: mostrarInfo(), vender(), getters/setters
* Ubicación: `Producto.h / Producto.cpp`

### **Usuario**

* Atributos: nombre
* Métodos: getters, mostrarInfo
* Ubicación: `Usuario.h / Usuario.cpp`

### **Admin (hereda de Usuario)**

* Atributos: ninguno extra
* Métodos extra: agregarProducto(), eliminarProducto()
* Relación UML: **Herencia**
* Ubicación: `Admin.h / Admin.cpp`

### **Carrito (composición)**

* Contiene una lista de productos
* Métodos: agregarProducto(), mostrarCarrito(), total()
* Relación UML: **Composición**
* Ubicación: `Carrito.h / Carrito.cpp`

### **Tienda (composición + agregación)**

* Contiene: lista de productos y lista de usuarios
* Métodos: mostrarProductos(), registrarUsuario(), comprar(), menú principal
* Ubicación: `Tienda.h / Tienda.cpp`

---

## ¿Cómo se usa?

### **1. Descarga**
```
Descarga la cargeta "proyecto" con todos los archivos o descargue todos los archivos y guardelos en una carpeta.
```

### **2. Compilar**

Compila todos los archivos juntos, por ejemplo (en consola):

```
g++ main.cpp Tienda.cpp Producto.cpp Usuario.cpp Admin.cpp Carrito.cpp -o tienda
```
Si tienes DEV C++:
```
Solo debes abrir el archivo tienda.dev en el IDE y presionar en "Compilar y ejecutar"
```

### **2. Ejecutar**

```
./proyecto
```

### **3. Interactuar con el programa**

Cuando entres al comienzo, te pedira una contraseña para Admin.

Luego volveras a ingresarla despues de haber elegido tu rango (Administrador).

Y asi ya podras interactuar con el menú y todo lo demás del programa.

El menú muestra opciones como:

* Ver productos
* Agregar productos (solo Admin)
* Agrgar gerentes o empleados (depende el rango)
* Comprar
* Ver carrito
* Salir
* Y más...

Las opciones del menú dependeran de que rango eres, entre más alto el rango mas opciones tendrás.

---


