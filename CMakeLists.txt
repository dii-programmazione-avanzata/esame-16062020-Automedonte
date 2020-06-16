cmake_minimum_required(VERSION 3.15)
project(Esame_TPA)

set(CMAKE_CXX_STANDARD 11)

add_executable(Esame_TPA
        main.cpp
        include/data.h
        include/ora.h
        src/iscritto.cpp
        include/iscritto.h
        src/studente.cpp
        include/studente.h
        src/docente.cpp
        include/docente.h
        src/aula.cpp include/aula.h src/lezione.cpp include/lezione.h src/corso.cpp include/corso.h src/percorso.cpp include/percorso.h)