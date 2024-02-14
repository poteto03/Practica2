//Ariana Garcia 23310171 2P
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Usuario{//clase padre
    protected: //atributos, caracteristicas
       string nombre;
       string telefono;
       int edad;
       string pwd;
    public: //metodos, acciones 
       Usuario(string _nombre,int _telefono,int _edad,string _pwd){
        nombre=_nombre;
        telefono=_telefono;
        edad=_edad;
        pwd=_pwd;
       };//constructor, iniciliza
       void login(string,string);
       void logout();
       void cambiarpwd(string,string);//constructor, iniciliza
};
void Usuario::login(string nombre,string pwd){
    if (this->nombre == nombre && this-> pwd==pwd){
        cout<<"Usuario ingresado: "<<nombre<<endl;

    } else{
        cout<<"error"<<endl;
    }
}
void Usuario::logout(){
    cout<<"El usuario ha cerrado sesion"<<endl;
}
void Usuario::cambiarpwd(string oldpwd,string newpwd){
    if (this->pwd == oldpwd ){
        pwd=newpwd;
        cout<<"Clave actualizada"<<endl;
    } else{
        cout<<"error"<<endl;
    }
}
class Cliente : public Usuario{//clase hija
    public: //metodos
       Cliente(string nombre,int telefono,int edad,string pwd):Usuario(nombre,telefono,edad,pwd){};
       void comprar();
       void reclamar();
       void devolver();
       
};
void Cliente::comprar(){
    cout<<"El cliente compro un articulo"<<endl;
}
void Cliente::reclamar(){
    cout<<"El cliente reclamo una venta"<<endl;
}
void Cliente::devolver(){
    cout<<"El cliente devolvio un articulo"<<endl;
}

class Vendedor : public Usuario{//clase hija
    public: //metodos
       Vendedor(string nombre,int telefono,int edad,string pwd):Usuario(nombre,telefono,edad,pwd){};
       void vender();
       void actuprecio();
};
void Vendedor::vender(){
    cout<<"Se vendio un articulo"<<endl;
}
void Vendedor::actuprecio(){
    cout<<"Se actualizo el precio"<<endl;
}

int main()
{
    //Usuario cliente1 ("paco",34564,65,"gatos");
    //cliente1.login("paco","gatos");
    //cliente1.logout();
    //cliente1.cambiarpwd("gatos","perros");

    //Cliente c2("luis",56574,23,"gg");
    //c2.comprar();
    //c2.reclamar();
    //c2.devolver();
    
    Vendedor v1("Tito",56234,29,"zzz");
    v1.vender();
    v1.actuprecio();
    
    return 0;
}