#include<iostream>
using namespace std;

class Vecteur2D{
    private:
      int x,y;
    public:
      Vecteur2D (int x1, int y1): x(x1),y(y1){}
      Vecteur2D operator+(const Vecteur2D& autre) const{
        return Vecteur2D(x + autre.x,y+autre.y);
    
      }
      void afficher(){
        cout<<"le nouveau vecteur : ( "<<x<<" , "<<y<<" ) "<<endl;
      }
};

int main(){
   Vecteur2D v1(12,0) ,v2(1,1);
   Vecteur2D v3=v1+v2;
   v3.afficher();

}