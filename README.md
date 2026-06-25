# Sistema de Gestión de Inventario y Clientes (SGIC)

## Concesionaria Ruedas de Oro

---

# 1. Descripción General

El Sistema de Gestión de Inventario y Clientes (SGIC) permitirá administrar el inventario de vehículos de la concesionaria "Ruedas de Oro", gestionar clientes, vendedores, registrar ventas y realizar búsquedas de vehículos según las preferencias y presupuesto de los compradores.

Todos los datos del sistema deberán persistirse mediante archivos para garantizar la conservación de la información entre ejecuciones del programa.

---

# 2. Requerimientos Funcionales

## RF01 - Gestión de Vehículos

El sistema deberá permitir:

* Registrar nuevos vehículos.
* Modificar la información de un vehículo existente.
* Eliminar vehículos del inventario.
* Consultar la información de un vehículo.
* Listar todos los vehículos registrados.

### Datos de cada vehículo

* Código único.
* Marca.
* Modelo.
* Año.
* Tipo de vehículo.
* Estado.
* Color.
* Kilometraje.
* Precio.
* Disponibilidad.

### Valores permitidos

#### Tipo de vehículo

* Automóvil
* Camioneta
* SUV
* Camión
* Otro

#### Estado

* Nuevo
* Usado

#### Disponibilidad

* Disponible
* Vendido

---

## RF02 - Búsqueda de Vehículos

El sistema deberá permitir buscar vehículos mediante:

* Marca.
* Modelo.
* Tipo de vehículo.
* Estado.
* Rango de precios.
* Año.
* Disponibilidad.

El sistema deberá permitir combinar varios criterios de búsqueda simultáneamente.

---

## RF03 - Búsqueda por Preferencias del Cliente

El sistema deberá permitir encontrar vehículos que coincidan con:

* Marca preferida.
* Tipo de vehículo preferido.
* Estado preferido.
* Presupuesto máximo del cliente.

El sistema mostrará únicamente los vehículos que cumplan todas las condiciones especificadas.

### Ejemplo

Cliente:

* Marca: Chevrolet
* Tipo: Camioneta
* Estado: Usado
* Presupuesto: $14.000

Resultado:

* Camionetas Chevrolet usadas con precio menor o igual a $14.000.

---

## RF04 - Gestión de Clientes

El sistema deberá permitir:

* Registrar clientes.
* Modificar información de clientes.
* Consultar clientes.
* Listar clientes registrados.

### Datos del cliente

* Identificación.
* Nombres.
* Apellidos.
* Edad.
* Teléfono.
* Correo electrónico.

---

## RF05 - Gestión de Vendedores

El sistema deberá permitir:

* Registrar vendedores.
* Modificar información de vendedores.
* Consultar vendedores.
* Listar vendedores registrados.

### Datos del vendedor

* Código de vendedor.
* Nombres.
* Apellidos.
* Teléfono.
* Porcentaje de comisión.

---

## RF06 - Registro de Ventas

El sistema deberá permitir registrar la venta de un vehículo.

Al registrar una venta se deberá almacenar:

* Número de venta.
* Fecha de venta.
* Cliente.
* Vehículo vendido.
* Precio de venta.
* Vendedor responsable.
* Comisión generada.

---

## RF07 - Cálculo Automático de Comisión

El sistema deberá calcular automáticamente la comisión del vendedor.

### Fórmula

Comisión = PrecioVenta × (PorcentajeComisión / 100)

### Ejemplo

Precio de venta: $14.000

Porcentaje de comisión: 3%

Comisión generada: $420

---

## RF08 - Actualización Automática del Inventario

Cuando una venta sea registrada:

* El vehículo deberá cambiar automáticamente a estado "Vendido".
* El vehículo dejará de aparecer en búsquedas de vehículos disponibles.

---

## RF09 - Consulta de Historial de Ventas

El sistema deberá permitir:

* Consultar todas las ventas registradas.
* Consultar ventas por cliente.
* Consultar ventas por vehículo.
* Consultar ventas por fecha.
* Consultar ventas por vendedor.

---

## RF10 - Consulta de Comisiones

El sistema deberá permitir:

* Consultar la comisión generada por cada venta.
* Consultar el total de comisiones por vendedor.
* Consultar el total general de comisiones generadas.

---

## RF11 - Persistencia de Datos

Toda la información deberá almacenarse en archivos.

### vehiculos.dat

Contendrá:

* Datos de vehículos.
* Estado de disponibilidad.

### clientes.dat

Contendrá:

* Información de clientes.

### vendedores.dat

Contendrá:

* Información de vendedores.
* Porcentaje de comisión.

### ventas.dat

Contendrá:

* Historial de ventas.
* Vendedor responsable.
* Comisión generada.

---

## RF12 - Carga Automática de Datos

Al iniciar el programa:

* Se deberán cargar automáticamente los datos almacenados en los archivos.

---

## RF13 - Guardado Automático

Toda modificación realizada deberá guardarse inmediatamente en los archivos correspondientes.

---

## RF14 - Menú Principal

El sistema deberá presentar un menú principal con las siguientes opciones:

1. Gestión de vehículos.
2. Gestión de clientes.
3. Gestión de vendedores.
4. Búsqueda de vehículos.
5. Registrar venta.
6. Consultar ventas.
7. Consultar comisiones.
8. Reportes.
9. Salir.

---

## RF15 - Reportes

El sistema deberá generar reportes de:

### Vehículos

* Vehículos disponibles.
* Vehículos vendidos.
* Vehículos por marca.
* Vehículos por rango de precio.

### Clientes

* Clientes registrados.

### Ventas

* Historial completo de ventas.
* Ventas por fecha.
* Ventas por cliente.
* Ventas por vendedor.

### Vendedores

* Vendedores registrados.
* Total vendido por vendedor.
* Total de comisiones por vendedor.
* Ranking de vendedores por monto vendido.

---

# 3. Requerimientos No Funcionales

## RNF01

El sistema deberá desarrollarse utilizando el lenguaje de programación C.

---

## RNF02

El sistema deberá implementar programación modular.

---

## RNF03

Las funcionalidades deberán distribuirse en archivos fuente independientes.

---

## RNF04

La persistencia de datos deberá realizarse mediante archivos.

---

## RNF05

El sistema deberá ejecutarse desde consola.

---

## RNF06

El código deberá estar documentado mediante comentarios descriptivos.

---

## RNF07

Las estructuras de datos deberán utilizar registros (struct).

---

## RNF08

El sistema deberá validar los datos ingresados por el usuario cuando sea necesario.

---

# 4. Casos de Uso Principales

## CU01 - Registrar Vehículo

Actor: Vendedor

Flujo:

1. Selecciona "Registrar vehículo".
2. Ingresa la información solicitada.
3. El sistema valida los datos.
4. El sistema almacena el vehículo.

---

## CU02 - Buscar Vehículo por Preferencias

Actor: Vendedor

Flujo:

1. Ingresa marca deseada.
2. Ingresa tipo de vehículo.
3. Ingresa estado.
4. Ingresa presupuesto máximo.
5. El sistema muestra los vehículos compatibles.

---

## CU03 - Registrar Cliente

Actor: Vendedor

Flujo:

1. Selecciona "Registrar cliente".
2. Ingresa la información requerida.
3. El sistema almacena los datos.

---

## CU04 - Registrar Venta

Actor: Vendedor

Flujo:

1. Selecciona un cliente.
2. Selecciona un vehículo disponible.
3. Selecciona el vendedor responsable.
4. El sistema calcula la comisión.
5. El sistema registra la venta.
6. El sistema actualiza el inventario.

---

## CU05 - Consultar Comisiones

Actor: Administrador

Flujo:

1. Selecciona "Consultar comisiones".
2. Elige un vendedor.
3. El sistema muestra:

   * Ventas realizadas.
   * Comisiones obtenidas.
   * Total acumulado.

---

# 5. Estructura Recomendada del Proyecto

```text
SGIC/
│
├── main.c
│
├── vehiculos.c
├── vehiculos.h
│
├── clientes.c
├── clientes.h
│
├── vendedores.c
├── vendedores.h
│
├── ventas.c
├── ventas.h
│
├── archivos.c
├── archivos.h
│
├── vehiculos.dat
├── clientes.dat
├── vendedores.dat
├── ventas.dat
│
├── README.md
├── REQUERIMIENTOS.md
└── .gitignore
```

---

# 6. Objetivo Final del Sistema

Permitir a la concesionaria administrar eficientemente su inventario de vehículos, gestionar clientes y vendedores, registrar ventas, realizar búsquedas según preferencias y presupuesto, calcular comisiones automáticamente y mantener toda la información almacenada de forma persistente mediante archivos.
