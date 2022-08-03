#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED

int menuInformesClientes();
void informesClientes(eClientes vecClientes[],ePrestamos vecPrestamos[],int tamClientes,int tamPrestamos);
void informesPrestamos(eClientes vecClientes[],ePrestamos vecPrestamos[],int tamPrestamos,int tamClientes);
void clienteMaxPrestamosSaldados(eClientes vecClientes[],ePrestamos vecPrestamos[],int tamClientes,int tamPrestamos);
int menuInformesPrestamos();
void clienteMaxPrestamosActivos(eClientes vecClientes[],ePrestamos vecPrestamos[],int tamClientes,int tamPrestamos);
void prestamosMayores1000(ePrestamos vecPrestamos[],eClientes vecClientes[],int tamPrestamos,int tamClientes);

#endif // INFORMES_H_INCLUDED
