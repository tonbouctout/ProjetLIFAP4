#include <vector> 
#include <string>
using namespace std;

struct Ball {
        int catchRate;
};

struct Medic {
        int heal;
};

struct Object {
        bool holdable;
        string caracteristique;
        int effect;
};

struct Ct {
        string spell;
        int pp;
        string type;
};

struct Berry {
        bool holdable;
        string caracteristique;
        int effect;
};

struct RareObject {
        int value;
};

class Item {

        private:

                int idCategorie;
                int idItem;
                string name;
                string description;
                int nb;
 
                Ball* ball; // idCategorie 0
                Medic* medic; // idCategorie 1
                Object* object; // idCategorie 2 
                Ct* cts; // idCategorie 3
                Berry* berry; // idCategorie 4
                RareObject* rareObject; // idCategorie 5 


        public:

                Item(); 
                Item(string name,string description,int nb,int idCategory,int idItem);
                ~Item();

                void setIdCategory(int id);
                void setIdItem(int id);
                void setName(string nom);
                void setDesciption(string texte);
                void setNB(int nb);

                int getIdCategory();
                int getIdItem();
                string getName();
                string getDescription();
                int getNB();
};