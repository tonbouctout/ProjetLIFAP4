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