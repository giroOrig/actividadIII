#include <iostream>
#include <list>
#include <algorithm>


using namespace std;

class Contacto 
{
    private:
        string nombre;
        int telefono;
        string email;
    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel, string email)  
        {
            nombre = nom;
            telefono = tel;
            email = email;
        }

        string getNombre() 
        {
            return nombre;
        }
        int getTelefono() 
        {
            return telefono;
        }
        string getEmail()
        {
            return email;
        }
};

class Agenda 
{
    private:    
        list <Contacto> contactos;
    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto)
        {
            contactos.push_back(*nContacto);
        }
        
       
        void listarContactos()
            {
            cout<<"-------------------------"<<endl;
            cout<<" Agenda de Contactos "<<endl;
            cout<<"-------------------------"<<endl;
         
            for_each(contactos.begin(), contactos.end(), /*falta funcion void que recorre la lista*/)
            {
            cout << "Nombre: " << currentContact->getNombre() << endl;
            cout << "Teléfono: " << currentContact->getTelefono() << endl;
            cout << "Email: " << currentContact->getEmail() << endl;
            };
            
            cout<<"-------------------------"<<endl;
            }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4324324, "celes@gmail.com");
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Luis", 9399929, "luis@gmail.com");

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;
        return 0;
}