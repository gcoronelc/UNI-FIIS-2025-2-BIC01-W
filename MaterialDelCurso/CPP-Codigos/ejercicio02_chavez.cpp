#include <iostream>
#include <string>
using namespace std;

int main(){

    string nameCourse;
    float grade1, grade2, grade3, finalAverage;

    cout<<"Inserte el nombre del curso: "; getline(cin,nameCourse);
    cout<<"Inserte el promedio de las practicas calificadas: "; cin>>grade1;
    cout<<"Inserte la nota del examen parcial: "; cin>>grade2; 
    cout<<"Inserte la nota del examen final: "; cin>>grade3; 
    
    finalAverage = (3 * grade1 + 3 * grade2 + 4 * grade3)/10;
    finalAverage = (int) (finalAverage + 0.5 );
    
    cout<<"El promedio final es: "<<finalAverage;
    return 0;
}