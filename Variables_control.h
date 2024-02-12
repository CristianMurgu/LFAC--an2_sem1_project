#include <map>
#include "Variable.h"
#include <string>
#include <cstring>

using namespace std;

class Variables_control
{
public:
   map<string, Variable*> memory_vars;  /*variabilele pentru fiecare sectiune*/

   void declare(char* type, char* name); /*verifica in obiectul folosit Variables_control daca exista dupa o declara*/
   bool exists(char* name);   /*verifica existenta*/
   void assign(char* name, Variable* data);  /*aloca daca corespunde tipul de variabila si exista variabila*/ 

   Variable* get(char* name);  /*pentru a lua o singura variabila*/

   void tableprint();  /*printeaza informatii despre sectiunea curenta in in tabel_variabile.txt*/
};