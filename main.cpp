#include <iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout<<*numberPtr<<endl;
}
void printLetter(char* charPtr){
    cout<<*charPtr<<endl;
}


//funcion para crear un puntero tipo void
void print(void* ptr, char type){
    switch(type){
        case 'i': cout<<*((int*)ptr)<<endl; break;
        case 'c': cout<<*((char*)ptr)<<endl; break;//handle char
    }
}
void minAndMax(int numbers[],int size, int* min, int* max){
    for(int i=1;i<size;i++){
        if(numbers[i]>*max){
            *max = numbers[i];
        }
        if(numbers[i]<*min){
            *min = numbers[i];
        }
    }
}
int  main(){
    int number = 5;
    char letter = 'a';
    printNumber(&number); // el simbolo & sirve para pasar la direccion del valor  
    printLetter(&letter);
    cout<<" a void pointer: "<<endl;
    print(&number,'i');
    print(&letter,'c');



    cout<<endl;
    cout<<"acceder a un arreglo utilizando punteros"<<endl;
    //acceder a una lista utilizando punteros: 
    int magicNumbers[5] = {1,2,3,4,5};
    cout<<"Si imprimes el solo el nombre del arreglo te regresa la direccion del primer dato:"<<magicNumbers<<endl;//te imprime la direccion del primer numero
    cout<<"Ejemplo del primer dato: &magicNumber = "<<&magicNumbers<<endl;

    cout<<"magicNumbers[2] = "<<magicNumbers[2]<<endl;
    cout<<"*(magicnumbers+2) = " <<*(magicNumbers+2)<<endl;

    for(int i = 0; i<=5;i++){
        cout<<*(magicNumbers+i)<<endl;
    }
    cout<<"El ultimo dato es un dato basura debido a que se pasa del tamaño del arreglo"<<endl;



    cout<<endl;
    cout<<"acceder a dos variables o más en una misma funcion usando punteros"<<endl;
    int min = magicNumbers[0];
    int max = magicNumbers[0];

    minAndMax(magicNumbers,4,&min,&max);
    cout<<"Max number = "<<max<<endl;
    cout<<"Min number = "<<min<<endl;





}