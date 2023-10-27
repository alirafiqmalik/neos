#!/bin/sh
set -x
g++-9 -std=c++2a -I../src/ -lpthread -lreadline -lboost_program_options ./oracle.cpp ../bin/libneos.a -o ./comb.out
g++-9 -std=c++2a -I../src/ -lpthread -lreadline -lboost_program_options ./oracle_seq.cpp ../bin/libneos.a -o ./seq.out
