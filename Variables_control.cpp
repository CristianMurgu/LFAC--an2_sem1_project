#include "Variables_control.h"
#include <iostream>
#include <fstream>

using namespace std;
void Variables_control::declare(char* type,char* name) /*pentru fiecare declarare cream un obiect Variable*/
{

    if(exists(name))
        cout<<"Variabila "<<name<<" a fost deja declarata anterior\n";
    else
    {
        Variable* data;

        if(strstr(type,"int"))          
            data=new Variable(0);
        if(strstr(type,"float"))
            data=new Variable(0.0f);
        if(strstr(type,"string"))
            data=new Variable("empty_string");
        if(strstr(type,"char"))
            data=new Variable("empty_char");
        if(strstr(type,"bool"))
            data=new Variable(false);

        memory_vars[string(name)]=data;   /* aloca pt fiecare declare */
    }
}

bool Variables_control::exists(char* name)
{    
    if(memory_vars.find(string(name))!=memory_vars.end())
        return true;
    return false;
}

void Variables_control::tableprint()
{
    ofstream fd;
    fd.open("tabel_variabile.txt");
    for(auto i : memory_vars)
    {
        fd<<"Variabila cu id: "<<i.first<<','<<" de tip:"<<i.second->get_type()<<','<<"cu valoarea: "<<i.second->value_to_string()<<'\n';
    }
    fd.close();
}

void Variables_control::assign(char* name, Variable* data)
{
    if(strstr(memory_vars[name]->type, data->type) && exists(name))
        memory_vars[name]=data;
    else
        cout<<"Erorr, tipuri diferite sau nu e declarata."<<'\n';
}

Variable* Variables_control::get(char* name)
{
    return memory_vars[string(name)];
}