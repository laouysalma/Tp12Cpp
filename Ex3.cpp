#include<iostream>
#include <stdexcept>
using namespace std;
 class Tableau{
    private:
        int* data;
        int taille;
    public:
        Tableau(int t):taille(t){
            data=new int[taille];
            for(int i=0;i<taille;i++){
                data[i]=0;
            } 
        }
            
       int& operator [](int indice){
            if(indice<0 || indice>=taille){
                throw out_of_range("indice non existant");
            }else return data[indice];
        }
    ~Tableau() {
        delete[] data;
    }

 };
 int main(){
 Tableau tab(3);
  for (int i=0;i<3;i++){
    tab[i]=i;
  }
      for(int i = 0; i < 5; i++)
        cout << tab[i] << endl;
   try{
    tab[-1]=13;
   }catch(const out_of_range& e)  {
    cout<<e.what()<<endl;
   } 
 }
 