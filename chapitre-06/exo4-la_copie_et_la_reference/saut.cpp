#include <iostream>
#include<cmath>
    struct Vec2{

         double x;
         double y;

    };
     Vec2 operator+( const Vec2& a,  const Vec2& b){
         return{
             a.x + b.x, a.y + b.y
         };
     }
       Vec2 operator*( const Vec2& v, double scalar){

        return { v.x * scalar, v.y * scalar};
       }
void eulerSemiImplicite( Vec2& p, Vec2& v , Vec2 a, double dt){
     v = v+ a*dt;
     p= p+ v*dt;

}
 double simulerSaut(double dt, double v0){

    Vec2 p = { 0.0, 0.0};
    Vec2 v = {0.0, v0};
     Vec2 a = {0.0, -9.81};
      double max_hauteur = 0.0;

        while(p.y >=0.0){
            if(p.y > max_hauteur){
                max_hauteur = p.y;
            }
            eulerSemiImplicite( p, v, a, dt);
        }
         return max_hauteur;
 }
  int main(){
    double g = 9.81;
    double h = 3.0;
     double v0 = std::sqrt(2.0 *g *h);
 
     double h_120 = simulerSaut(1.0/120.0 ,v0);
     double h_30 = simulerSaut(1.0/ 1000.0, v0);
      double h_small = simulerSaut(1.0/ 1000.0, v0);

       std::cout << "v0 :" << v0 << std::endl ;
       std:: cout<< "1/120 :"<< h_120 << std ::endl;
       std:: cout <<" 1/30: " <<h_30 << std::endl;
        std::cout << " mon pas : 1/1000 (hauteur max : " << h_small<<")" <<std::endl;
         std::cout <<"l'ecart vient : de la simulation numerique( discretisation par euler semi-implication), l'accumulation des ereurs sur les pas de temps dt empeche d'atteindre exactement 3m. "<< std::endl;
          return 0;

  }