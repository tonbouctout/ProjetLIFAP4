#include <iostream>
#include "inventory.h"
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;

void print(Inventory inv){
    for(long unsigned int i=0;i<inv.getBalls().size();i++){
        cout << endl << "idCategorie : " << inv.getBalls()[i].getIdCategory() << endl;
        cout << "idItem : " << inv.getBalls()[i].getIdItem() << endl;
        cout << "Nom : " << inv.getBalls()[i].getName() << endl;
        cout << "Description : " << inv.getBalls()[i].getDescription() << endl;
        cout << "nb : " << inv.getBalls()[i].getNB() << endl;
        cout << "catchRate : " << inv.getBalls()[i].getBall()->catchRate << endl;
    }
}


void initInventory(){

    ifstream textFile("obj.json");
    json jsonObj;
    jsonObj = json::parse(textFile);   
    Inventory inv;
    Item it;
    vector<Item> balls;
    vector<Item> medics;
    vector<Item> objects;
    vector<Item> cts;
    vector<Item> berries;
    vector<Item> rareObjects;
    
    // init vector balls
    for (long unsigned int i=0;i< jsonObj["0"].size();i++){  
        it.setIdCategory(0);
        it.setIdItem(i);
        it.setName(jsonObj["0"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["0"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["0"][to_string(i)]["nb"].get<string>()));
        it.setBall(new Ball);
        it.getBall()->catchRate = stoi(jsonObj["0"][to_string(i)]["catchrate"].get<string>());
        balls.push_back(it);
    } delete[] it.getBall();
    

    // init vector medics
    for (long unsigned int i=0;i< jsonObj["1"].size();i++){  
        it.setIdCategory(1);
        it.setIdItem(i);
        it.setName(jsonObj["1"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["1"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["1"][to_string(i)]["nb"].get<string>()));
        it.setMedic(new Medic);
        it.getMedic()->heal = stoi(jsonObj["1"][to_string(i)]["heal"].get<string>());
        medics.push_back(it);
    } delete[] it.getMedic();

    // init vector object
    for (long unsigned int i=0;i< jsonObj["2"].size();i++){  
        it.setIdCategory(2);
        it.setIdItem(i);
        it.setName(jsonObj["2"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["2"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["2"][to_string(i)]["nb"].get<string>()));
        it.setObject(new Object);
        if (jsonObj["2"][to_string(i)]["holdable"].get<string>() == "true"){
            it.getObject()->holdable = true;
        }
        else{
            it.getObject()->holdable = false;
        }
        it.getObject()->caracteristique = jsonObj["2"][to_string(i)]["caracteristique"].get<string>();
        it.getObject()->effect = stoi(jsonObj["2"][to_string(i)]["effect"].get<string>());
        objects.push_back(it);
    } delete[] it.getObject();

    // init vector cts
    for (long unsigned int i=0;i< jsonObj["3"].size();i++){  
        it.setIdCategory(3);
        it.setIdItem(i);
        it.setName(jsonObj["3"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["3"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["3"][to_string(i)]["nb"].get<string>()));
        it.setCt(new Ct);
        it.getCt()->type = jsonObj["3"][to_string(i)]["type"].get<string>();
        it.getCt()->power = stoi(jsonObj["3"][to_string(i)]["power"].get<string>());
        it.getCt()->pp = stoi(jsonObj["3"][to_string(i)]["pp"].get<string>());
        cts.push_back(it);
    } delete[] it.getCt();

        // init vector berry 
    for (long unsigned int i=0;i< jsonObj["4"].size();i++){  
        it.setIdCategory(4);
        it.setIdItem(i);
        it.setName(jsonObj["4"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["4"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["4"][to_string(i)]["nb"].get<string>()));
        it.setBerry(new Berry);
        if (jsonObj["4"][to_string(i)]["holdable"].get<string>() == "true"){
            it.getBerry()->holdable = true;
        }
        else{
            it.getBerry()->holdable = false;
        }
        it.getBerry()->caracteristique = jsonObj["4"][to_string(i)]["caracteristique"].get<string>();
        it.getBerry()->effect = stoi(jsonObj["4"][to_string(i)]["effect"].get<string>());
        berries.push_back(it);
    } delete[] it.getBerry();

        // init vector RareObject
    for (long unsigned int i=0;i< jsonObj["5"].size();i++){  
        it.setIdCategory(5);
        it.setIdItem(i);
        it.setName(jsonObj["5"][to_string(i)]["name"].get<string>());
        it.setDesciption(jsonObj["5"][to_string(i)]["description"].get<string>());
        it.setNB(stoi(jsonObj["5"][to_string(i)]["nb"].get<string>()));
        it.setRareObject(new RareObject);
        it.getRareObject()->value = stoi(jsonObj["5"][to_string(i)]["value"].get<string>());
        rareObjects.push_back(it);
    } delete[] it.getRareObject();

    inv.setBalls(balls);
    inv.setMedics(medics);
    inv.setObject(objects);
    inv.setCts(cts);
    inv.setBerries(berries);
    inv.setRareObjects(rareObjects);
    print(inv);
}


int main(){
    initInventory();
    return 0;
}