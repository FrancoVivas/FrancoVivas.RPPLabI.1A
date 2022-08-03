#ifndef PRESTAMOS_H_INCLUDED
#define PRESTAMOS_H_INCLUDED
#define PRESTAMOSTAM 50
#define ACTIVO 1
#define INACTIVO 0
#define SALDADO 2
typedef struct
{
    int isEmpty;
    int prestamoId;
    int clienteId;
    float prestamoImporte;
    int prestamoCuotas;
    int prestamoEstado;
} ePrestamos;
#include "clientes.h"

void encabezadoInfoPrestamo();
void listarPrestamo (ePrestamos Prestamo,eClientes vecClientes[],int tamClientes);
int reanudarPrestamo(ePrestamos vecPrestamos[],int tamPrestamos,int prestamoId,eClientes vecClientes[],int tamClientes);
int saldarPrestamo(ePrestamos vecPrestamos[],int tamPrestamos,int prestamoId,eClientes vecClientes[],int tamClientes);
void listarPrestamos(ePrestamos vecPrestamos[],int tamPrestamos,eClientes vecClientes[],int tamClientes);
void listarPrestamosSaldados(ePrestamos vecPrestamos[],int tamPrestamos,eClientes vecClientes[],int tamClientes);
void iniciarPrestamos(ePrestamos vecPrestamos[],int tamPrestamos);
int cantidadPrestamosCliente(ePrestamos vecPrestamos[],int tamPrestamos,int clienteId);
int cantidadPrestamosSaldadosCliente(ePrestamos vecPrestamos[],int tamPrestamos,int clienteId);
void listarPrestamosCliente(eClientes vecClientes[],ePrestamos vecPrestamos[],int tamClientes,int tamPrestamos,int* clienteId);
int prestamosActivos(ePrestamos vecPrestamos[],int tamPrestamos);
int cantidadPrestamosSaldados(ePrestamos vecPrestamos[],int tamPrestamos);
int buscarPrestamoId(ePrestamos vecPrestamos[],int tamPrestamos,int* idPrestamo,eClientes vecClientes[],int tamClientes);
int altaPrestamo(ePrestamos vecPrestamos[],int tamPrestamos,eClientes vecClientes[],int tamClientes);
ePrestamos nuevoPrestamo(int clienteId,float prestamoImporte,int prestamoCuotas,int prestamoId);
int autoIdPrestamos();
int buscarPrestamoSaldadoId(ePrestamos vecPrestamos[],int tamPrestamos,int* idPrestamo,eClientes vecClientes[],int tamClientes);
int buscarPrestamoActivoId(ePrestamos vecPrestamos[],int tamPrestamos,int* idPrestamo,eClientes vecClientes[],int tamClientes);
int cantidadPrestamosActivos(ePrestamos vecPrestamos[],int tamPrestamos);


#endif // PRESTAMOS_H_INCLUDED
