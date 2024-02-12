#!/bin/bash

rm -f lex.yy.c
rm -f run
lex limbaj.l
yacc -d limbaj.y
g++ -o run lex.yy.c y.tab.c Controller.cpp Variables_control.cpp

