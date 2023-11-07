#include "Sucursal.h"

Sucursal::Sucursal(string codigo_paquete,string codigo_SMT,string repartidor,int timepo_entrega)
{
    this->codigo_paquete = codigo_paquete;
    this->codigo_SMT = codigo_SMT;
    this->repartidor = repartidor;
    this->tiempo_entrega = tiempo_entrega;
}

Sucursal::~Sucursal()
{
}

string Sucursal::get_codigo_paquete()
{
    return this->codigo_paquete;
}

string Sucursal::get_codigo_SMT()
{
    return this->codigo_SMT;
}

string Sucursal::get_repartidor()
{
    return this->repartidor;
}

int Sucursal::get_tiempo_entrega()
{
    return this->tiempo_entrega;
}

string Sucursal::get_codigo_paquete(string codigo_paquete)
{
    this->codigo_paquete=codigo_paquete;
}

string Sucursal::get_codigo_SMT(string codigo_smt)
{
    this->codigo_SMT = codigo_smt;
}

string Sucursal::get_repartidor(string repartidor)
{
    this->repartidor = repartidor;
}

int Sucursal::get_tiempo_entrega(int tiempo_entrega)
{
    this->tiempo_entrega = tiempo_entrega;;
}
