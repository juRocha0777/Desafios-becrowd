cmake_minimum_required(VERSION 3.22)

# =================================================
# 🧠 Nome do projeto baseado na pasta
# =================================================
get_filename_component(PROJECT_NAME_RAW "${CMAKE_SOURCE_DIR}" NAME)
string(REPLACE " " "_" PROJECT_NAME "${PROJECT_NAME_RAW}")

project(${PROJECT_NAME}
    VERSION 1.0
    LANGUAGES C CXX
)

# =================================================
# ⚙️ Padrões das linguagens
# =================================================
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# =================================================
# 🧠 clangd / IntelliSense
# =================================================
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# =================================================
# 🔍 Arquivos fonte
# =================================================
file(GLOB_RECURSE C_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/src/c/*.c"
)

file(GLOB_RECURSE CPP_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/src/cpp/*.cpp"
)

# =================================================
# 🏗️ Executável C
# =================================================
if(C_SOURCES)

    add_executable(${PROJECT_NAME}_c
        ${C_SOURCES}
    )

    target_include_directories(${PROJECT_NAME}_c
        PRIVATE
            ${CMAKE_SOURCE_DIR}/include
    )

endif()


# =================================================
# 🏗️ Executável C++
# =================================================
if(CPP_SOURCES)

    add_executable(${PROJECT_NAME}_cpp
        ${CPP_SOURCES}
    )

    target_include_directories(${PROJECT_NAME}_cpp
        PRIVATE
            ${CMAKE_SOURCE_DIR}/include
    )

endif()


# =================================================
# ⚠️ Warnings
# =================================================
if(MSVC)

    add_compile_options(/W4)

else()

    add_compile_options(
        -Wall
        -Wextra
        -Wpedantic
    )

endif()


# =================================================
# 📦 Diretório dos executáveis
# =================================================
set_target_properties(
    ${PROJECT_NAME}_c
    ${PROJECT_NAME}_cpp
    PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY
            "${CMAKE_SOURCE_DIR}/bin"
)


# =================================================
# 💬 Informações
# =================================================
message("")
message("===========================================")
message("🚀 Projeto: ${PROJECT_NAME}")
message("⚙️ C Compiler: ${CMAKE_C_COMPILER_ID}")
message("⚙️ C++ Compiler: ${CMAKE_CXX_COMPILER_ID}")
message("📌 C Standard: ${CMAKE_C_STANDARD}")
message("📌 C++ Standard: ${CMAKE_CXX_STANDARD}")
message("===========================================")
message("")