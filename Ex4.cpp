#include<iostream>
using namespace std;

class Produit {
    private:
        string nom;
        double prix;
        int quantite;
    public:
        Produit(string n,double p,int q):nom(n),prix(p),quantite(q){}
        friend ostream& operator<<(ostream& os,const Produit p){
            os<<p.nom<<" : "<<p.prix<<" dh "<<p.quantite<<" pieces"<<endl;
            return os;
        }
};
int main(){
    Produit p1("cle_usb",70.00,3);
    cout<<p1<<endl;
}
