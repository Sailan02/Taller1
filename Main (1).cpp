#pragma ocne
#include <iostream>
#include "Usuario_Normal.h"
#include "Niño.h"
#include "Administrador.h"
#include "Ofimatica.h"
#include "Producción.h"
#include "Navegador.h"
#include "Seguridad.h"
#include "Social.h"
#include "Juegos.h"
#include "vector"
using namespace std;
Usuario* adm= new Administrador("Kmilaza", "12345",21,"kmilaza@hotmail.com");
Usuario* nino1=new Joven("Sophia","freefire",10);
Usuario* nino2=new Joven("Thabata","iphone",16);
Usuario* nino3=new Joven("Julian","futbol123",13);
Usuario* nino4=new Joven("Dylan","lol",17);
Usuario* usuario1=new UsuarioNormal("samsung","24pulgadas",21,"samsung@gmail.com");
Usuario* usuario2=new UsuarioNormal("reddragon","teclado",24,"reddragon@gmail.com");
Usuario* usuario3=new UsuarioNormal("benito","martinez",27,"badbunny@gmail.com");
Usuario* usuario4=new UsuarioNormal("hotwheels","autito",20,"fiaaaau@gmail.com");
Usuario* usuario5=new UsuarioNormal("naruto","uzumaki",30,"konoha@gmail.com");
Usuario* usuario6=new UsuarioNormal("hp","impresora",26,"deskjet@gmail.com");
Usuario* usuario7=new UsuarioNormal("conejito","pascua",19,"chocolate@gmail.com");
Usuario* usuario8=new UsuarioNormal("omen","humos",21,"site@gmail.com");
Usuario* usuario9=new UsuarioNormal("team","liquid",33,"frtt@gmail.com");
Usuario* usuario10=new UsuarioNormal("logitch","mouse",20,"blanquito@gmail.com");
//JUEGOS
Software* game1=new Juegos("Lol","Riot Games",0,0,"Moba");
Software* game2=new Juegos("Dota","Valve",18,15,"Moba");//mayor
Software* game3=new Juegos("CS GO","Valve",18,10,"FPS");//mayor
Software* game4=new Juegos("Valorant","Riot Games",0,0,"FPS");
Software* game5=new Juegos("Sudoku","No Conocido",0,0,"PUZZLE");
Software* game6=new Juegos("Tetris","No Conocido",0,0,"PUZZLE");
Software* game7=new Juegos("WOW","Blizard",0,10,"MMO");
Software* game8=new Juegos("Lost Ark","Keum Kang Sun",0,20,"MMO");
Software* game9=new Juegos("FIFA23","EA",0,30,"DEPORTES");
Software* game10=new Juegos("NBA24","EA",0,20,"DEPORTES");
Software* game11=new Juegos("Age Of Empires","Ensemble Studios",0,15,"ESTRATEGIA");
Software* game12=new Juegos("Plants vs Zombies","PopCap Games",0,5,"ESTRATEGIA");
Software* game13=new Juegos("Dark Souls","FromSoftware",18,25,"RPG");//mayor
Software* game14=new Juegos("Elden Ring","FromSoftware",18,30,"RPG");//mayor
Software* game15=new Juegos("Super Mario Bross","Nintendo",0,5,"RETRO");
Software* game16=new Juegos("Pokemon Rojo Fuego","Nintendo",0,15,"RETRO");
Software* game17=new Juegos("Pac-Man","Tōru Iwatani",0,0,"ARCADE");
Software* game18=new Juegos("Space Invaders","Toshihiro Nishikado",0,0,"ARCADE");
Software* game19=new Juegos("Mortal Kombat 1","Ed Boon",18,40,"PELEA");//mayor
Software* game20=new Juegos("Street Fighter VI","Capcon",0,20,"PELEA");
/////////////////////////////////////////////////////////
//OFIMATICA
Software* ofimimatica1=new Ofimatica("Word","Microsoft",0,15,0);
Software* ofimimatica2=new Ofimatica("PowerPoint","Microsoft",0,10,0);
Software* ofimimatica3=new Ofimatica("Excel","Microsoft",0,20,0);
Software* ofimimatica4=new Ofimatica("OneNote","Microsoft",0,5,0);
Software* ofimimatica5=new Ofimatica("Outlook","Microsoft",0,5,0);
///////////////////////////////////
//Produccion
Software* produccion1=new Produccion("Capcut","Chiang",18,15,"video");
Software* produccion2=new Produccion("Photo","Vallejos",18,1,"fotos");
Software* produccion3=new Produccion("MP3","Bernal",18,5,"musica");
Software* produccion4=new Produccion("Twitch","Diego",18,10,"streaming");
//////////////////////////////////
//Navegadores
Software* navegador1=new Navegador("Google","Nancy",0,0,"");
Software* navegador2=new Navegador("Opera","Renegado",0,0,"");
///////////////////////
//Seguridad
Software* seguridad1=new Seguridad("Avast","sus",0,10,"Ransomware");
Software* seguridad2=new Seguridad("WindowsDF","microsoft",0,15,"Spyware");
Software* seguridad3=new Seguridad("Sion","Tank",0,13,"botnets");
Software* seguridad4=new Seguridad("Aro","Diamante",0,19,"rootkits");
Software* seguridad5=new Seguridad("Chilean","america",0,20,"gusanos");
Software* seguridad6=new Seguridad("Seguryty","Ayia",0,0,"troyanos");
//////////////////////////////////////////////////////////////////////
//Social
Software* social1=new Social("Facebook","Mark",0,0,0);
Software* social2=new Social("Tinder","Elon",18,0,0);


vector<Social*> basesocial;
vector<Navegador*> basenavegador;
vector<Produccion*> baseproduccion;
vector<Seguridad*> baseseguridad;
vector<Ofimatica*> baseofimatica;
vector<Juegos*> basejuegos;
vector<Usuario*> baseusuario;//CREANDO BASE DE DATOS


bool seguirEjecutando() { //Despues de realizar la accion que desea, le pregunta si quiere seguir o irse
    std::string seguir;

    while (true) {
        std::cout << "Deseas Seguir? (si/no)" << std::endl;
        std::cin >> seguir;

        if (seguir == "si") {
            return true;
        } else if (seguir == "no") {
            std::cout << "Nos vemos bro" << std::endl;
            return false;
        } else {
            std::cout << "Entrada no válida. Por favor, ingresa 'si' o 'no'." << std::endl;
        }
    }
}
Usuario* devolverUsuario(string nombre){ //Dado un nombre se devuelve un usuario
    for(int i=0;i<baseusuario.size();i++){
        if(baseusuario[i]->getNombre()==nombre){
            return baseusuario[i];
        }

    }
    return NULL;
}
string mostrarsocial(){//Muestra los nombres de los softwares social
     string print="";
    for(int i=0;i<basesocial.size();i++){
        print+=basesocial[i]->getNombre()+" // ";
    }
    return print;
}
string mostrarproduccion(){//Muestra los nombres de los softwares produccion
     string print="";
    for(int i=0;i<baseproduccion.size();i++){
        print+=baseproduccion[i]->getNombre()+" // ";
    }
    return print;
}
string mostrarseguridad(){//Muestra los nombres de los softwares de seguridad
    string print="";
    for(int i=0;i<baseseguridad.size();i++){
        print+=baseseguridad[i]->getNombre()+" // ";
    }
    return print;
}
string mostrarnavegador(){//Muestra los nombres de los navegadores
     string print="";
    for(int i=0;i<basenavegador.size();i++){
        print+=basenavegador[i]->getNombre()+" // ";
    }
    return print;  
}
string mostrarofimatica(){//Muestra los nombres de los softwares de ofimatica
     string print="";
    for(int i=0;i<baseofimatica.size();i++){
        print+=baseofimatica[i]->getNombre()+" // ";
    }
    return print;
}
string mostrarjuegos(){//muestra el nombre de todos los juegos
    string print="";
    for(int i=0;i<basejuegos.size();i++){
        print+=basejuegos[i]->getNombre()+" // ";
    }
    return print;
}
string mostrarjuegosmenos18(){//Muestra los juegos aptos para niños
    string print="";
    for(int i=0;i<basejuegos.size();i++){
        if(basejuegos[i]->getClasificacionDeEdad()<18){
            print+=basejuegos[i]->getNombre()+" // ";
        }
       
    }
    return print;

}
string mostraramigosmenos18(){//Muestra los amigos de los niños 
    string print="";
    for(int i=0;i<baseusuario.size();i++){
        if(baseusuario[i]->getEdad()<18){
            print+=baseusuario[i]->getNombre()+" // ";
        }
       
    }
    return print;

}
string mostrarusuario(){ //Muestra los nombres de los usuarios
    string print="";
    for(int i=0;i<baseusuario.size();i++){
        print+=baseusuario[i]->getNombre()+" // ";
    }
    return print;

}
void rellenarsocial(Social* soft){//llena la base da datos tipo social, con los softwares de tipo social
    basesocial.push_back(soft);
}
void rellenarnavegador(Navegador* soft){//llena la base de datos tipo navegador, con los softwares de tipo navegador
    basenavegador.push_back(soft);
}
void rellenaproduccion(Produccion* soft){//llena la base de datos tipo produccion, con los softwares de tipo produccion
    baseproduccion.push_back(soft);
}
void rellenarsefuridad(Seguridad* soft){//llena la base de datos tipo seguridad, con los softwares de tipo seguridad
    baseseguridad.push_back(soft);
}
void rellenarofimatica(Ofimatica* soft){//llena la base de datos tipo odimatica, con los softwares de tipo ofimatica
    baseofimatica.push_back(soft);
}
void rellenarjuegos(Juegos* soft){//llena la base de datos tipo juego, con los softwares de tipo juego
    basejuegos.push_back(soft);
}
void rellenarbasededatos(Usuario* user){//llena la de datos tipo usuario
    baseusuario.push_back(user);
}
bool verificarjoven(Usuario* usuario){//Casteo para que el usuario sea niño
    Joven * nino = dynamic_cast<Joven*>(usuario);
    if(nino){
        return true;
    }else{
        return false;
    }
}
bool validarLogin(const string& usuario, const string& contrasena) {// buscar si el usuario existe y si conincide con la contraseña
    for(int i=0;i<baseusuario.size();i++){
        if(baseusuario[i]->getNombre()==usuario&&baseusuario[i]->getPassword()==contrasena){
            return true;
        }
    } 
    return false; 
}
Juegos* casteojuego  (Software* soft){//casteo para que el software, sea juego
    Juegos * juegos = dynamic_cast<Juegos*>(soft);
    return juegos;
}
Ofimatica* casteoofima  (Software* soft){//casteo para que el software, sea ofimatica
    Ofimatica * ofima = dynamic_cast<Ofimatica*>(soft);
    return ofima;
}
Social* casteosocial  (Software* soft){//casteo para que el software, sea social
    Social * social = dynamic_cast<Social*>(soft);
    return social;
}
Produccion* casteoproduccion  (Software* soft){//casteo para que el software, sea produccion
    Produccion * produccion = dynamic_cast<Produccion*>(soft);
    return produccion;
}
Seguridad* casteoseguridad  (Software* soft){//casteo para que el software, sea seguridad
    Seguridad * seguridad = dynamic_cast<Seguridad*>(soft);
    return seguridad;
} 
void realizarOfimatica(Ofimatica* ofima){// realizar el metodo unico de ofimatica
        int opcion;
    std::cout << "1. Agregar archivo" << std::endl;
    std::cout << "2. Eliminar archivo" << std::endl;
    std::cin >> opcion;
     switch (opcion) {
            case 1: {
                std::cout << "Un archivo aregado." << std::endl;
                ofima->agregarcantidad(1);
                break;
            }
            case 2: {
                std::cout << "Un archivo eliminado." << std::endl;
                ofima->borrarcantidad(1);
                break;
                default:
                std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
                }


        }
    }   
Navegador* casteonavegador  (Software* soft){//casteo para que el software, sea navegador
    Navegador * nave = dynamic_cast<Navegador*>(soft);
    return nave;
}
bool verificarADM(Usuario* user){//casteo para que el usuario, sea ADM
    Administrador * adm = dynamic_cast<Administrador*>(user);
    if (adm) {  
        return true;
        
    } else {
       return false;
    }
}
bool verificarNormal(Usuario* user){//casteo para que el usuario, sea normal
       UsuarioNormal * normal = dynamic_cast<UsuarioNormal*>(user);
    if (normal) {  
        return true;
    } else {
       return false;
    }
}
void menuADM(Administrador* adm){//menu del adm
    while(true){

    
        int opcion;

        std::cout << "Bienvenido al Menú de Administrador" << std::endl;
        std::cout << "1. Descargar juego" << std::endl;
        std::cout << "2. Descargar software de ofimática" << std::endl;
        std::cout << "3. Descargar software de producción" << std::endl;
        std::cout << "4. Descargar navegador" << std::endl;
        std::cout << "5. Descargar software de seguridad" << std::endl;
        std::cout << "6. Descargar software social" << std::endl;
        std::cout << "7. Agregar amig@s" << std::endl;
        std::cout << "8. Eliminar amig@s" << std::endl;
        std::cout << "9. Ver amigos" << std::endl;
        std::cout << "Ingrese el número de la opción deseada: ";
    
        std::cin >> opcion;
        std::string nombreaplicaion;
        bool aplicaionencontrada = false;
        bool amigoencontrado = false;
        switch (opcion) {
             case 1:
                while (true) {
                    cout << "Que juego deseas descargar: ";
                    cout << mostrarjuegos();
                    std::cin >> nombreaplicaion;

                for (int i = 0; i < basejuegos.size(); i++) {
                    if (basejuegos[i]->getNombre() == nombreaplicaion) {
                        adm->agregarSoftware(basejuegos[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando juego..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de juego válido." << std::endl;
                }
            }
            break;
        
        case 2:
            while (true) {
                cout << "Que software de ofimática deseas descargar: ";
                cout << mostrarofimatica();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseofimatica.size(); i++) {
                    if (baseofimatica[i]->getNombre() == nombreaplicaion) {
                        adm->agregarSoftware(baseofimatica[i]);
                        realizarOfimatica(baseofimatica[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 3:
       

            while (true) {
                cout << "Que software de Produccion deseas descargar: ";
                cout << mostrarproduccion();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseproduccion.size(); i++) {
                    if (baseproduccion[i]->getNombre() == nombreaplicaion) {
                        adm->agregarSoftware(baseproduccion[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando software..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 4:
        

            while (true) {
                cout << "Que navegador deseas descargar: ";
                cout << mostrarnavegador();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < basenavegador.size(); i++) {
                    if (basenavegador[i]->getNombre() == nombreaplicaion) {
                        adm->agregarSoftware(basenavegador[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando navegador..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un navegador  válido." << std::endl;
                }
            }
            break;
        case 5:
         

            while (true) {
                cout << "Que software de seguridad deseas descargar: ";
                cout << mostrarseguridad();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseseguridad.size(); i++) {
                    if (baseseguridad[i]->getNombre() == nombreaplicaion) {
                        adm->agregarSoftware(baseseguridad[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando software..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 6:
            while (true) {
                cout << "Que software social deseas descargar: ";
                cout << mostrarsocial();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < basesocial.size(); i++) {
                    if (basesocial[i]->getNombre() == nombreaplicaion) {
                        adm->agregarSoftware(basesocial[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando software..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
            case 7:
                if(adm->getListaSoftwares().tieneSoftSocial()){
                    std::cout << "No puedes agregar amigos, ya que tu biblioteca de software esta vacia" << std::endl;

                }else{
                    while (true) {
                         cout << "Que quien deseas agregar: ";
                        cout << mostrarusuario();
                        std::cin >> nombreaplicaion;

                        for (int i = 0; i < baseusuario.size(); i++) {
                             if (baseusuario[i]->getNombre() == nombreaplicaion) {
                                adm->agregaramigos(baseusuario[i]);
                                amigoencontrado = true;
                            }       
                        }       

                        if (amigoencontrado) {
                            std::cout << "Amigo agregado" << std::endl;
                            break;  
                        } else {
                        std::cout << "Opción no válida. Por favor, ingresa un nombre  válido." << std::endl;
                            }   
                    }  
                }
             break;

              case 8:
                if(adm->mostraramigos().size()==0){
                    std::cout << "No puedes eliminar amigos, ya que no tienes" << std::endl;

                }else{
                     while (true) {
                        cout << "Quien deseas eliminar: ";
                        cout << adm->mostraramigos();
                        std::cin >> nombreaplicaion;
                        if (adm->buscarnombre(nombreaplicaion)) {
                            adm->eliminaramigo(devolverUsuario(nombreaplicaion));
                            amigoencontrado = true;
                        }       
                        if (amigoencontrado) {
                            std::cout << "Amigo eliminado" << std::endl;
                            break;  
                        } else {
                            std::cout << "Opción no válida. Por favor, ingresa un nombre  válido." << std::endl;
                        }   
                    }   
                }
             break;
             case 9:
                 std:: cout<<adm->mostraramigos();
                 break;
        default:
        break;
    }
    if(!seguirEjecutando()){
        break;
         }  
    }
}
void menunormal(UsuarioNormal* user){//menu del usuario normal
    while(true){

    
        int opcion;

        std::cout << "Bienvenido al Menú de Usuario Normal" << std::endl;
        std::cout << "1. Descargar juego" << std::endl;
        std::cout << "2. Descargar software de ofimática" << std::endl;
        std::cout << "3. Descargar software de producción" << std::endl;
        std::cout << "4. Descargar navegador" << std::endl;
        std::cout << "5. Descargar software social" << std::endl;
        std::cout << "6. Agregar amig@s" << std::endl;
        std::cout << "7. Eliminar amig@s" << std::endl;
        std::cout << "8. Ver amigos" << std::endl;
        std::cout << "Ingrese el número de la opción deseada: ";
    
        std::cin >> opcion;
        std::string nombreaplicaion;
        bool aplicaionencontrada = false;
        bool amigoencontrado = false;
        switch (opcion) {
             case 1:
                while (true) {
                    cout << "Que juego deseas descargar: ";
                    cout << mostrarjuegos();
                    std::cin >> nombreaplicaion;

                for (int i = 0; i < basejuegos.size(); i++) {
                    if (basejuegos[i]->getNombre() == nombreaplicaion) {
                        user->agregarSoftware(basejuegos[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando juego..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de juego válido." << std::endl;
                }
            }
            break;
        
        case 2:
            while (true) {
                cout << "Que software de ofimática deseas descargar: ";
                cout << mostrarofimatica();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseofimatica.size(); i++) {
                    if (baseofimatica[i]->getNombre() == nombreaplicaion) {
                        user->agregarSoftware(baseofimatica[i]);
                        realizarOfimatica(baseofimatica[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 3:
       

            while (true) {
                cout << "Que software de Produccion deseas descargar: ";
                cout << mostrarproduccion();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseproduccion.size(); i++) {
                    if (baseproduccion[i]->getNombre() == nombreaplicaion) {
                        user->agregarSoftware(baseproduccion[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando software..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 4:
        

            while (true) {
                cout << "Que navegador deseas descargar: ";
                cout << mostrarnavegador();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < basenavegador.size(); i++) {
                    if (basenavegador[i]->getNombre() == nombreaplicaion) {
                        user->agregarSoftware(basenavegador[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando navegador..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un navegador  válido." << std::endl;
                }
            }
            break;
        case 5:
            while (true) {
                cout << "Que software social deseas descargar: ";
                cout << mostrarsocial();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < basesocial.size(); i++) {
                    if (basesocial[i]->getNombre() == nombreaplicaion) {
                        user->agregarSoftware(basesocial[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando software..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
            case 6:
                if(user->getListaSoftwares().tieneSoftSocial()){
                    std::cout << "No tiene un APP Social" << std::endl;

                }else{
                    while (true) {
                         cout << "Que quien deseas agregar: ";
                        cout << mostrarusuario();
                        std::cin >> nombreaplicaion;

                        for (int i = 0; i < baseusuario.size(); i++) {
                             if (baseusuario[i]->getNombre() == nombreaplicaion) {
                                user->agregaramigos(baseusuario[i]);
                                amigoencontrado = true;
                            }       
                        }       

                        if (amigoencontrado) {
                            std::cout << "Amigo agregado" << std::endl;
                            break;  
                        } else {
                        std::cout << "Opción no válida. Por favor, ingresa un nombre  válido." << std::endl;
                            }   
                    }  
                }
             break;

              case 7:
                if(user->mostraramigos().size()==0){
                    std::cout << "No puedes eliminar amigos, ya que no tienes" << std::endl;

                }else{
                     while (true) {
                        cout << "Quien deseas eliminar: ";
                        cout << user->mostraramigos();
                        std::cin >> nombreaplicaion;
                        if (user->buscarnombre(nombreaplicaion)) {
                            user->eliminaramigo(devolverUsuario(nombreaplicaion));
                            amigoencontrado = true;
                        }       
                        if (amigoencontrado) {
                            std::cout << "Amigo eliminado" << std::endl;
                            break;  
                        } else {
                            std::cout << "Opción no válida. Por favor, ingresa un nombre  válido." << std::endl;
                        }   
                    }   
                }
             break;
             case 8:
                 std:: cout<<user->mostraramigos();
                 break;
        default:
        break;
    }
    if(!seguirEjecutando()){
        break;
         }  
    }

}
void menujoven(Joven* joven){//menu del usuario niño
    
    while(true){
        int opcion;

        std::cout << "Bienvenido al Menú de Joven" << std::endl;
        std::cout << "1. Descargar juego" << std::endl;
        std::cout << "2. Descargar software de ofimática" << std::endl;
        std::cout << "3. Descargar software de Producción" << std::endl;
        std::cout << "4. Descargar Navegador" << std::endl;
        std::cout << "5. Descargar Facebook" << std::endl;
        std::cout << "6. Agregar amig@s" << std::endl;
        std::cout << "7. Eliminar amig@s" << std::endl;
        std::cout << "8. Ver amig@s" << std::endl;
        std::cout << "Ingrese el número de la opción deseada: ";
    
        std::cin >> opcion;
        std::string nombreaplicaion;
        bool aplicaionencontrada = false;
        bool amigoencontrado = false;
        switch (opcion) {
             case 1:
                while (true) {
                    cout << "Que juego deseas descargar: ";
                    cout << mostrarjuegosmenos18();
                    std::cin >> nombreaplicaion;

                for (int i = 0; i < basejuegos.size(); i++) {
                    if (basejuegos[i]->getNombre() == nombreaplicaion) {
                        joven->agregarSoftware(basejuegos[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando juego..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de juego válido." << std::endl;
                }
            }
            break;
        
        case 2:
            while (true) {
                cout << "Que software de ofimática deseas descargar: ";
                cout << mostrarofimatica();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseofimatica.size(); i++) {
                    if (baseofimatica[i]->getNombre() == nombreaplicaion) {
                        joven->agregarSoftware(baseofimatica[i]);
                        realizarOfimatica(baseofimatica[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 3:
       

            while (true) {
                cout << "Que software de Produccion deseas descargar: ";
                cout << mostrarproduccion();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < baseproduccion.size(); i++) {
                    if (baseproduccion[i]->getNombre() == nombreaplicaion) {
                        joven->agregarSoftware(baseproduccion[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando software..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un software válido." << std::endl;
                }
            }
            break;
        case 4:
        

            while (true) {
                cout << "Que navegador deseas descargar: ";
                cout << mostrarnavegador();
                std::cin >> nombreaplicaion;

                for (int i = 0; i < basenavegador.size(); i++) {
                    if (basenavegador[i]->getNombre() == nombreaplicaion) {
                        joven->agregarSoftware(basenavegador[i]);
                        aplicaionencontrada = true;
                         break;  
                    }       
                }       

                if (aplicaionencontrada) {
                    std::cout << "Descargando navegador..." << std::endl;
                break;  
                } else {
                std::cout << "Opción no válida. Por favor, ingresa un nombre de un navegador  válido." << std::endl;
                }
            }
            break;
        case 5:
                  std::cout << "Descargando software..." << std::endl;
                  joven->agregarSoftware(social1);
                
            break;
            case 6:
                if(joven->getListaSoftwares().tieneSoftSocial()){
                    cout << "No tiene una  APP Social"<< std::endl;
                    

                }else{
                    while (true) {
                         cout << "Que quien deseas agregar: "<< std::endl;
                        cout << mostraramigosmenos18();
                        std::cin >> nombreaplicaion;

                        for (int i = 0; i < baseusuario.size(); i++) {
                             if (baseusuario[i]->getNombre() == nombreaplicaion) {
                                joven->agregaramigos(baseusuario[i]);
                                amigoencontrado = true;
                            }       
                        }       

                        if (amigoencontrado) {
                            std::cout << "Amigo agregado" << std::endl;
                            break;  
                        } else {
                        std::cout << "Opción no válida. Por favor, ingresa un nombre  válido." << std::endl;
                            }   
                    }  
                }
             break;

              case 7:
                if(joven->mostraramigos().size()==0){
                     cout << "No tienes amigos "<< std::endl;
                }else{
                     while (true) {
                        cout << "Quien deseas eliminar: "<< std::endl;
                        cout << joven->mostraramigos();
                        std::cin >> nombreaplicaion;
                        if (joven->buscarnombre(nombreaplicaion)) {
                            joven->eliminaramigo(devolverUsuario(nombreaplicaion));
                            amigoencontrado = true;
                        }       
                        if (amigoencontrado) {
                            std::cout << "Amigo eliminado" << std::endl;
                            break;  
                        } else {
                            std::cout << "Opción no válida. Por favor, ingresa un nombre  válido." << std::endl;
                        }   
                    }
                }   
                
             break;
             case 8:
                 std:: cout<<joven->mostraramigos();
                 break;
        default:
        break;
    }
    if(!seguirEjecutando()){
        break;
         }  
    }
    
}
int main()
{   
rellenarbasededatos(adm);
rellenarbasededatos(nino1);
rellenarbasededatos(nino2);
rellenarbasededatos(nino3);
rellenarbasededatos(nino4);
rellenarbasededatos(usuario1);
rellenarbasededatos(usuario2);
rellenarbasededatos(usuario3);
rellenarbasededatos(usuario4);
rellenarbasededatos(usuario5);
rellenarbasededatos(usuario6);
rellenarbasededatos(usuario7);
rellenarbasededatos(usuario8);
rellenarbasededatos(usuario9);
rellenarbasededatos(usuario10);
//juego
rellenarjuegos(casteojuego(game1));rellenarjuegos(casteojuego(game2));rellenarjuegos(casteojuego(game3));rellenarjuegos(casteojuego(game4));rellenarjuegos(casteojuego(game5));
rellenarjuegos(casteojuego(game6));rellenarjuegos(casteojuego(game7));rellenarjuegos(casteojuego(game8));rellenarjuegos(casteojuego(game9));rellenarjuegos(casteojuego(game10));
rellenarjuegos(casteojuego(game11));rellenarjuegos(casteojuego(game12));rellenarjuegos(casteojuego(game13));rellenarjuegos(casteojuego(game14));rellenarjuegos(casteojuego(game15));
rellenarjuegos(casteojuego(game16));rellenarjuegos(casteojuego(game17));rellenarjuegos(casteojuego(game18));rellenarjuegos(casteojuego(game19));rellenarjuegos(casteojuego(game20));
//ofimatica
rellenarofimatica(casteoofima(ofimimatica1));rellenarofimatica(casteoofima(ofimimatica2));rellenarofimatica(casteoofima(ofimimatica3));rellenarofimatica(casteoofima(ofimimatica4));rellenarofimatica(casteoofima(ofimimatica5));
//produccion
rellenaproduccion(casteoproduccion(produccion1));rellenaproduccion(casteoproduccion(produccion2));rellenaproduccion(casteoproduccion(produccion3));rellenaproduccion(casteoproduccion(produccion4));
//navegador
rellenarnavegador(casteonavegador(navegador1));rellenarnavegador(casteonavegador(navegador2));
//seguridad
rellenarsefuridad(casteoseguridad(seguridad1));rellenarsefuridad(casteoseguridad(seguridad2));rellenarsefuridad(casteoseguridad(seguridad3));
rellenarsefuridad(casteoseguridad(seguridad4));rellenarsefuridad(casteoseguridad(seguridad5));rellenarsefuridad(casteoseguridad(seguridad6));
//SOCIAL
rellenarsocial(casteosocial(social1));rellenarsocial(casteosocial(social2));
//agregar amigos
    usuario1->agregaramigos(usuario2);  usuario1->agregaramigos(usuario3); 
    usuario2->agregaramigos(usuario1);  usuario2->agregaramigos(usuario3);
    usuario3->agregaramigos(usuario1);  usuario3->agregaramigos(usuario2);
    
string usuario;
string contrasena;
  while (true) {
        cout << "Ingrese su nombre de usuario: ";
        cin >> usuario;

        cout << "Ingrese su contrasena: ";
        cin >> contrasena;

        // Validar el inicio de 
        if (validarLogin(usuario, contrasena)) {
            cout << "Inicio de sesion exitoso. ¡Bienvenido, " << usuario << "!" << endl;
                for(int i=0;i<baseusuario.size();i++){
                    if(baseusuario[i]->getNombre()==usuario){
                        if(verificarADM(baseusuario[i])){
                          Administrador * adm = dynamic_cast<Administrador*>(baseusuario[i]);
                             cout << "SEXO TILLLIIN  ESO " << usuario << "!" << endl;
                               menuADM(adm);


                        }else if(verificarjoven(baseusuario[i])){
                             Joven * joven = dynamic_cast<Joven*>(baseusuario[i]);    
                             cout << "SEXO JOVEN TILLIN  ESO " << usuario << "!" << endl;
                            menujoven(joven);


                        }else if(verificarNormal(baseusuario[i])){
                          UsuarioNormal * normal = dynamic_cast<UsuarioNormal*>(baseusuario[i]);    
                             cout << "SEXO NORMAL TILLIN  ESO " << usuario << "!" << endl;
                             menunormal(normal);

                        }
                        
                        
                    }

                }
          
            break;
        } else {
            cout << "Inicio de sesion fallido. Intente nuevamente." << endl;
        }
    }

   
    
    return 0;
}
