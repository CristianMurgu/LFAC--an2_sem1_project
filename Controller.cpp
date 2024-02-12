
/*unsigned int-urile faceau belele */

#include "Controller.h"

using namespace std;

void Controller::push_Variables_control()
{
    Variables_control* vars = new Variables_control();
    list.push_back(vars);
}

void Controller::pop_Variables_control()
{
    list.pop_back();
}

void Controller::declare(char* type,char* name)
{
    Variables_control* vars = list[list.size()-1]; 
    vars->declare(type, name);
}


bool Controller::exists(char* name)
{
    for(int i=list.size()-1; i>=0; i--)
    {
        Variables_control* vars = list[i];
        if(vars->exists(name))
            return true;
    }
    return false;
}


void Controller::assign(char* name, Variable* data)
{
    Variables_control* vars = list[list.size()-1];
    vars->assign(name,data);
}

Variable* Controller::get(char* name)
{
    for(int i=list.size()-1; i>=0; i--)
    {
        Variables_control* vars = list[i];
        if(vars->exists(name))
            return vars->get(name);
    }
    cout<<"Variabila cu id-ul: "<<name<<" nu exista.\n";
    return new Variable("0"); /*aici dadea segmentation fault ca noi avem string la get )))) */
}

void Controller::insert_funct(char* name)
{
    if(!is_funct(name))
        functions.insert(string(name));
}

bool Controller::is_funct(char* name)
{
    if(functions.find(string(name))==functions.end())
        return false;
    return true;
}
void Controller::insert_class(char* name)
{
     classes.insert(std::string(name));
}
      
bool Controller::is_class(char* name)
{
    if(classes.find(string(name))==classes.end())
        return false;
    return true;

}

void Controller::table_print()
{
    for(int i=list.size()-1; i>=0; i--)
    {
        Variables_control* vars = list[i];
        vars->tableprint();
    }
}