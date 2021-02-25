cmake_minimum_required(VERSION 3.17)
project(26_02_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(26_02_Project
        main.cpp Material.h Gas.h Fluid.h Solid.h Metal.h NonMetal.h Metal.cpp Fluid.cpp Material.cpp Gas.cpp Solid.cpp NonMetal.cpp WaterVapour.h WaterVapour.cpp Oxygen.h Oxygen.cpp Hydrogen.h Hydrogen.cpp NewGas.h NewGas.cpp Water.h Water.cpp MeltedTin.h MeltedTin.cpp LiquidNitrogen.h LiquidNitrogen.cpp HydrochloridAcid.h HydrochloridAcid.cpp NewLiquid.h NewLiquid.cpp Iron.h Iron.cpp Wolfram.h Wolfram.cpp NewMetal.h NewMetal.cpp Glass.h Glass.cpp Ice.h Ice.cpp NewNonMetal.h NewNonMetal.cpp)
