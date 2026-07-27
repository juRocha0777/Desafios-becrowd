cmake_minimum_required(VERSION 3.22)

# =================================================
# 🧠 Nome do projeto automático baseado na pasta
# =================================================
get_filename_component(PROJECT_NAME_RAW "${CMAKE_SOURCE_DIR}" NAME)
string(REPLACE " " "_" PROJECT_NAME "${PROJECT_NAME_RAW}")
project(${PROJECT_NAME} LANGUAGES C CXX)

# =================================================
# ⚙️ Padrões modernos
# =================================================
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# =================================================
# 🗂️ Cria pastas se não existirem
# =================================================
file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/build")
file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/include")
file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/src")

# =================================================
# 📚 Diretórios de include
# =================================================
include_directories("${CMAKE_SOURCE_DIR}/include")

# =================================================
# 🔍 Busca automática por fontes .c e .cpp
# =================================================
file(GLOB_RECURSE SRCS
    "${CMAKE_SOURCE_DIR}/src/*.c"
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

# =================================================
# ⚠️ Verifica se encontrou fontes
# =================================================
if(NOT SRCS)
    message(WARNING "Nenhum arquivo fonte encontrado em src/. Adicione pelo menos um .cpp ou .c")
endif()

# =================================================
# 🏗️ Criação do executável
# =================================================
add_executable(${PROJECT_NAME} ${SRCS})

# =================================================
# ⚠️ Warnings e otimização
# =================================================
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -O2)
endif()

# =================================================
# 📦 Saída do binário
# =================================================
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)

# =================================================
# 🔧 Build type padrão (Release)
# =================================================
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# =================================================
# 🧹 Facilita IntelliSense
# =================================================
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# =================================================
# 💬 Mensagem personalizada
# =================================================
message(STATUS "")
message(STATUS "============================================")
message(STATUS "🚀 Projeto '${PROJECT_NAME}' configurado com sucesso!")
message(STATUS "📂 Diretório: ${CMAKE_SOURCE_DIR}")
message(STATUS "🧠 Compilador: ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "⚙️ Padrão C: ${CMAKE_C_STANDARD}")
message(STATUS "⚙️ Padrão C++: ${CMAKE_CXX_STANDARD}")
message(STATUS "📦 Saída do binário: ${CMAKE_SOURCE_DIR}/bin")
message(STATUS "📦 Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "============================================")
message(STATUS "")
