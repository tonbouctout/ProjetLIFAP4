#include <iostream>
#include "inventory.h"
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;

void initInventory(){

    Inventory inv;
    json jsonObj;
    ifstream textFile("obj.json");
    jsonObj = json::parse(textFile);   
    vector<Item> balls;
    vector<Item> medics;
    vector<Item> objects;
    vector<Item> cts;
    vector<Item> berries;
    vector<Item> rareObjects;
    Item it;
    //cout << jsonObj["0"]["0"]["name"].get<string>();
    
    for (int i=0;i<3;i++){  
        it.setIdCategory(0);
        it.setIdItem(i);
        it.setName(jsonObj["0"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["0"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["0"][to_string(i)]["nb"].get<string>()));
        cout << endl << "idCategorie : " << it.getIdCategory() << endl << "idItem : " << it.getIdItem() << endl << "Nom : " << it.getName() << endl << "description : " << it.getDescription() << endl << "Nombre : " << it.getNB() << endl;
        balls.push_back(it);
    }
}

int main(){
    initInventory();
    return 0;
}