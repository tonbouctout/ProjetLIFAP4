#include "item.h"

class Inventory {

    private:

        vector<Item> balls;
        vector<Item> medics;
        vector<Item> objects;
        vector<Item> cts;
        vector<Item> berries;
        vector<Item> rareObjects;

    public:

        Inventory();
        Inventory(vector<Item> category);
        Inventory(vector<Item> balls,vector<Item> medics,vector<Item> objects,vector<Item> cts,vector<Item> berries,vector<Item> rareObjets);
        ~Inventory();

        void setBalls(vector<Item> b);
        void setMedics(vector<Item> m);
        void setObject(vector<Item> o);
        void setCts(vector<Item> c);
        void setBerries(vector<Item> b);
        void setRareObjects(vector<Item> ro);

        vector<Item> getBalls(); 
        vector<Item> getMedics(); 
        vector<Item> getObject(); 
        vector<Item> getCts(); 
        vector<Item> getBerries();
        vector<Item> getRareObject();
};