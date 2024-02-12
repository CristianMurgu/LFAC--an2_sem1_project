#include <vector>
#include "Variables_control.h"
#include <iostream>
#include <set>
#include <string>

using namespace std;

class Controller {
public:
   vector<Variables_control*> list;  
   set<string> functions;
   set<string> classes;

   void insert_funct(char* name);   /*adauga in seturi functiile si clasele*/
   void insert_class(char* name);  

   bool is_funct(char* name); /*verifica daca exista*/
   bool is_class(char* name);  

   void push_Variables_control();   /*pentru fiecare sectiune si dam pop cand o terminam*/
   void pop_Variables_control();    
   
   void declare(char* type,char* name);
   bool exists(char* name);
   Variable* get(char* name); /*cauta variabila cu nameul*/
   void assign(char* name,Variable* data);

   void table_print();  /* afisam pentru fiecare clasa Variables_control elementele */
};