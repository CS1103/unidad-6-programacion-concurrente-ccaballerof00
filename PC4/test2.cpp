//
// Created by cristian on 6/21/19.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Concurrente.h"
SCENARIO("Cálculo de la diagonal de la matriz que resulta de la multiplicación concurrente de 2 matrices")
{
    GIVEN("Matriz 1 - 3x4 y Matriz 2 - 4x5"
    )
    {
        WHEN("Matriz 1 rellena de 2's y Matriz 2 rellena de 3's")
        {
            Matriz<int> m1=Matriz<int>(6,7);
            for(int i=0;i<6;i++){
                for(int j=0;j<7;j++){
                    m1.AnadirElemento(5,i,j);
                    }
                }
            Matriz<int> m2=Matriz<int>(7,5);
            for(int i=0;i<7;i++){
                for(int j=0;j<5;j++){
                    m2.AnadirElemento(4,i,j);
                    }
                }

                Matriz<int> m3 = m1 * m2;

            auto Total = m3.diagonal();
            THEN("La diagonal es 700")
            {
                REQUIRE(Total==700);
            }
        }
    }
}

