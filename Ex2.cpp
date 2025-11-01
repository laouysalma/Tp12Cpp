#include<iostream>
using namespace std;

class Date{
    private:
       int annee,mois,jour;
    public:
       Date(int a,int m,int j):annee(a),mois(m),jour(j){}
       bool  operator==(const Date& autre) const{
          return annee==autre.annee && 
          mois==autre.mois && 
          jour==autre.jour ;
          
       }
        bool  operator!=(const Date& autre) const{
          return  annee != autre.annee || mois != autre.mois || jour != autre.jour;
          
       }

};
int main(){
 Date d1(2025,10,31),d2(2025,10,31);
 if(d1==d2) cout<<"la meme date !"<<endl;
 Date d3(2023,10,31);
 if( d1!=d3) cout<<"les deux dates ne sont pas identique"<<endl;
 if(d1!=d2)cout<<"les deux dates ne sont pas identique"<<endl;


}