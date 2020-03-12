#include "inventory.h"

Inventory::Inventory(){

}

Inventory::Inventory(vector<Item> category){

}

Inventory::Inventory(vector<Item> balls,vector<Item> medics,vector<Item> objects,vector<Item> cts,vector<Item> berries,vector<Item> rareObjets){

}

Inventory::~Inventory(){

}

void Inventory::setBalls(vector<Item> b){
    balls = b;
}

void Inventory::setMedics(vector<Item> m){
    medics = m;
}

void Inventory::setObject(vector<Item> o){
    objects = o;
}

void Inventory::setCts(vector<Item> c){
    cts = c;
}

void Inventory::setBerries(vector<Item> b){
    berries = b;
}

void Inventory::setRareObjects(vector<Item> ro){
    rareObjects = ro;
}

vector<Item> Inventory::getBalls(){
    return balls;
} 

vector<Item> Inventory::getMedics(){
    return medics;
} 

vector<Item> Inventory::getObject(){
    return objects;
}
    
vector<Item> Inventory::getCts(){
    return cts;
} 

vector<Item> Inventory::getBerries(){
    return berries;
}

vector<Item> Inventory::getRareObject(){
    return objects;
}