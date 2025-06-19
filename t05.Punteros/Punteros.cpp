#include<iostream> 
#include<string>
using namespace std; 
int main(){  
  string word = "Columna";
  string *p = &word;
  string arr[] = {"perro","gato","loro"};
  string *pArr = arr;

  cout << *p << " " << *pArr << '\n';

  //Probamos puntero nulo
  int *pX = nullptr;
  int x = 123;
  pX = &x; 
  
  if (pX == nullptr){
    cout << "Puntero nulo."<< '\n';
  }else{
    cout << *pX << '\n';
  }
  
  
  return 0;
}