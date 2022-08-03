#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED
#define NOMBRETAM 20
#define APELLIDOTAM 20
#define CLIENTESTAM 50
#define CUIL 15
typedef struct
{
    int isEmpty;
    int clienteId;
    char cuil[CUIL];
    char nombre[NOMBRETAM];
    char apellido[NOMBRETAM];
} eClientes;


eClientes nuevoCliente(int clienteId,char nombre[],char apellido[],char cuil[]);
void iniciarClientes(eClientes vecClientes[],int tamClientes);
int buscarLibre(eClientes vecClientes[],int tamClientes);
int autoIdClientes();
int clientesActivos(eClientes vecClientes[],int tamClientes);
void encabezadoInfoClientes();
int altaCliente(eClientes vecClientes[],int tamClientes);
int primerIdRegistrado(eClientes vecClientes[],int tamClientes,int* ultimoId);
int ultimoIdRegistrado(eClientes vecClientes[],int tamClientes,int* ultimoId);
void listarCliente(eClientes unCliente,ePrestamos vecPrestamos[],int tamPrestamos);
void listarClientes(eClientes vecClientes[],int tamClientes,ePrestamos vecPrestamos[],int tamPrestamos);
int bajaCliente(eClientes vecClientes[],int tamClientes,ePrestamos vecPrestamos[],int tamPrestamos,int* idCliente);
int modCliente(eClientes vecClientes[],int tamClientes,int id,ePrestamos vecPrestamos[],int tamPrestamos);
int buscarClienteId(eClientes vecClientes[],int tamClientes,int* idCliente);
int contTotalClientes(eClientes vecClientes[],int tamClientes);
void listarClientePrestamosSaldados(eClientes unCliente,ePrestamos vecPrestamos[],int tamPrestamos);
void encabezadoInfoClientesSaldados();
int getCuilCliente(eClientes vecClientes[],int tamClientes,int idCliente,char* cuilCliente);

#endif // CLIENTES_H_INCLUDED
