#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

/*tip + valoare variabila*/

class Variable
{
public:
    char type[15];

    int int_value;
    float float_value;
    char* string_value;
    bool bool_value;
    char char_value;

    Variable(char* x)
    {
       string_value=x;
       strcpy(type,"string");
    }
    Variable(bool x)
    {
        bool_value=x;
        strcpy(type, "bool");
    }
    Variable(int x)
    {
        int_value=x;
        strcpy(type,"int");
    }
    Variable(float x)
    {
        float_value=x;
        strcpy(type,"float");
    }


    char* value_to_string()
    {
        char* text= new char[32];
        if(strstr(type,"string"))
        {
            return string_value;
        }
        if(strstr(type,"int"))
        {
            sprintf(text,"%d",int_value);
            return text;
        }
        if(strstr(type,"float"))
        {
            sprintf(text,"%f",float_value);
            return text;
        }
        if(strstr(type,"bool"))
        {
            sprintf(text,"%d",bool_value);
            return text;
        }
        return "string";
    }

    char* get_type()
    {
        if(strstr(type,"string"))
        {
            return "string";   
        }
        if(strstr(type,"int"))
        {
            return "int";
        }
        if(strstr(type,"float"))
        {
            return "float";
        }
        if(strstr(type,"char"))
        {
            return "char";
        }
        if(strstr(type,"bool"))
        {
            return "bool";
        }
    }

    friend Variable* operator-(Variable &a, Variable &b)
    {
        if(strstr(a.type,"bool") || strstr(b.type,"bool"))
        {
            std::cout<<"Bool nu este un operand valid la scadere. "<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"String nu este un operand valid la scadere. "<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value-b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(float(a.float_value-b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(float(a.int_value-b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(float(a.float_value-b.float_value));
        }
    }

    friend Variable* operator+(Variable &a, Variable &b)
    {
        if(strstr(a.type,"bool") || strstr(b.type,"bool"))
        {
            cout<<"Bool nu este un operand valid la adunare."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            cout<<"String nu este un operand valid la adunare."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value+b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(float(a.float_value+b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(float(a.int_value+b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(float(a.float_value+b.float_value));
        }
    }

    friend Variable* operator/(Variable &a, Variable &b)
    {
        if(strstr(a.type,"bool") || strstr(b.type,"bool"))
        {
            cout<<"Nu se pot imparti booluri."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            cout<<"Nu se pot imparti stringuri."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {   
            if(b.int_value==0)
            {
                cout<<"Nu poti imparti la 0."<<'\n';
                return new Variable("string");
            }
            return new Variable(int(a.int_value/b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            if(b.int_value==0)
            {
                cout<<"Nu poti imparti la 0."<<'\n';
                return new Variable("string");
            }
            return new Variable(float(a.float_value / b.int_value)); //l
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            if(b.float_value==0)
            {
                cout<<"Nu poti imparti la 0."<<'\n';
                return new Variable("string");
            }
            return new Variable(float(a.int_value / b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            if(b.float_value==0)
            {
                cout<<"Nu poti imparti la 0."<<'\n';
                return new Variable("string");
            }
            return new Variable(float(a.float_value / b.float_value));
        }
    }

    friend Variable* operator*(Variable &a, Variable &b)
    {
        if(strstr(a.type,"bool") || strstr(b.type,"bool"))
        {
            cout<<"Nu se pot inmulti booluri."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            cout<<"Nu se pot inmulti stringuri."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value*b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(float(a.float_value*b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(float(a.int_value*b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(float(a.float_value*b.float_value));
        }
    }
    

    friend Variable* operator==(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") && strstr(b.type,"string"))
        {   
            if(strstr(a.string_value,b.string_value))
                return new Variable(1);
            else
                return new Variable(0);
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value == b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value == b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value == b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value == b.float_value));
        }
    }
    friend Variable* operator!=(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") && strstr(b.type,"string"))
        {   
            if(!strstr(a.string_value,b.string_value))
                return new Variable(1);
            else
                return new Variable(0);
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value!=b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value!=b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value!=b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value!=b.float_value));
        }
    }
    friend Variable* operator>(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") && strstr(b.type,"string"))
        {   
            if(!strstr(a.string_value,b.string_value))
                return new Variable(1);
            else
                return new Variable(0);
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value>b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value>b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value>b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value>b.float_value));
        }
    }

    friend Variable* operator>=(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") && strstr(b.type,"string"))
        {   
            if(!strstr(a.string_value,b.string_value))
                return new Variable(1);
            else
                return new Variable(0);
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value>=b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value>=b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value>=b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value>=b.float_value));
        }
    }

    friend Variable* operator<(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") && strstr(b.type,"string"))
        {   
            if(!strstr(a.string_value,b.string_value))
                return new Variable(1);
            else
                return new Variable(0);
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value < b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value < b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value < b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value < b.float_value));
        }
    }

    friend Variable* operator<=(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") && strstr(b.type,"string"))
        {   
            if(!strstr(a.string_value,b.string_value))
                return new Variable(int(1));
            else
                return new Variable(int(0));
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value <= b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value <= b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value <= b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value <= b.float_value));
        }
    }

    friend Variable* operator||(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            if(a.string_value || b.string_value)
                return new Variable(int(1));
            return new Variable(int(0));
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value || b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value || b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value || b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value || b.float_value));
        }
    }

    friend Variable* operator&&(Variable &a, Variable &b)
    {
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            if(a.string_value && b.string_value)
                return new Variable(int(1));
            return new Variable(int(0));
        }
        if(strstr(a.type,"string") || strstr(b.type,"string"))
        {
            std::cout<<"Stringul se compara doar cu un string."<<'\n';
            return new Variable("string");
        }
        if(strstr(a.type,"int") && strstr(b.type,"int"))
        {
            return new Variable(int(a.int_value && b.int_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"int"))
        {
            return new Variable(int(a.float_value&&b.int_value));
        }
        if(strstr(a.type,"int") && strstr(b.type,"float"))
        {
            return new Variable(int(a.int_value && b.float_value));
        }
        if(strstr(a.type,"float") && strstr(b.type,"float"))
        {
            return new Variable(int(a.float_value && b.float_value));
        }
    }
    
};