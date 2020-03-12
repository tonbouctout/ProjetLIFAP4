#include "item.h"

Item::Item(){
    
} 

Item::Item(string name,string description,int nb,int idCategory,int idItem){
    
}

Item::~Item(){}

void Item::setIdCategory(int id){
    idCategorie = id;
}

void Item::setIdItem(int id){
    idItem = id;
}

void Item::setName(string nom){
    name = nom;
}

void Item::setDesciption(string texte){
    description = texte;
}

void Item::setNB(int nombre){
    nb = nombre;
}

void Item::setBall(Ball* b){
    ball = b;
}
void Item::setMedic(Medic* m){
    medic = m;
}
void Item::setObject(Object* o){
    object = o;
}
void Item::setCt(Ct* c){
    ct = c;
}
void Item::setBerry(Berry* b){
    berry = b;
}
void Item::setRareObject(RareObject* ro){
    rareObject = ro;
}

int Item::getIdCategory(){
    return idCategorie;
}

int Item::getIdItem(){
    return idItem;
}

string Item::getName(){
    return name;
}

string Item::getDescription(){
    return description;
}

int Item::getNB(){
    return nb;
}

Ball* Item::getBall(){
    return ball;
}
Medic* Item::getMedic(){
    return medic;
}
Object* Item::getObject(){
    return object;
}
Ct* Item::getCt(){
    return ct;
}
Berry* Item::getBerry(){
    return berry;
}
RareObject* Item::getRareObject(){
    return rareObject;
}