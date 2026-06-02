# Exercícios Beecrowd

Repositório dedicado às minhas soluções dos problemas do **Beecrowd**, organizadas por linguagem.  
A ideia é manter tudo arrumado, fácil de navegar e com espaço para evoluir tanto em lógica quanto em estrutura de código.

---

## 📁 Estrutura

┣ 📂 C++  
│ ┣ 📂 1001  
│ ┣ 📂 1002  
│ ┗ 📂 ...     
│ ┗ 📂 ...  
┣ 📂 Python  
│ ┣ 📂 1001  
│ ┣ 📂 1002  
│ ┗ 📂 ...  
┗ README.md

Cada exercício fica em uma pasta com o número do problema.  
Cada linguagem tem sua própria árvore independente.

---

## 👤 Sobre mim

Sou **Júnior**, estudante de **Engenharia de Computação**, e estou usando este repositório para treinar lógica, reforçar a base de programação e criar um histórico sólido de prática.  
Aqui ficam meus exercícios em **C++** e **Python**.

---

## 🔧 C++ com CMake

Todos os exercícios em C++ usam o mesmo modelo de CMake.  
Isso mantém o projeto limpo, padronizado e fácil de compilar em qualquer ambiente.

### CMakeLists.txt padrão

```cmake
cmake_minimum_required(VERSION 3.22)

# Nome do projeto baseado na pasta
get_filename_component(PROJECT_NAME_RAW "${CMAKE_SOURCE_DIR}" NAME)
string(REPLACE " " "_" PROJECT_NAME "${PROJECT_NAME_RAW}")
project(${PROJECT_NAME} LANGUAGES C CXX)

# Padrões modernos
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Diretórios de include
include_directories("${CMAKE_SOURCE_DIR}/include")

# Fontes
file(GLOB_RECURSE SRCS
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_SOURCE_DIR}/src/*.c"
)

if(NOT SRCS)
    message(WARNING "Nenhum arquivo fonte encontrado em src/. Adicione pelo menos um .cpp ou .c")
endif()

# Executável
add_executable(${PROJECT_NAME} ${SRCS})

# Warnings
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -O2)
endif()

# Diretório do executável
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)

# Build type padrão
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

# Facilita IntelliSense
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Mensagem de status
message(STATUS "Projeto '${PROJECT_NAME}' configurado!")
message(STATUS "Binário em: ${CMAKE_SOURCE_DIR}/bin")
```

▶️ Como compilar (C++)

Dentro da pasta do exercício:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

O executável ficará em `bin/` dentro da pasta do exercício.

No Windows (PowerShell), você pode executar os mesmos passos em uma linha:

```powershell
mkdir build; cd build; cmake ..; cmake --build .
```

---

## 🐍 Como rodar os exercícios em Python

```bash
cd python/1001
python3 main.py
```

No Windows (PowerShell) use `python` em vez de `python3`:

```powershell
cd python/1001
python main.py
```

---

## 📌 Objetivo do repositório

- Registrar progresso real em algoritmos
- Produzir código limpo e organizado
- Criar uma base de referência para estudos futuros
- Preparar-me para o mercado de trabalho
- Consolidar fundamentos de programação e aplicação de estruturas de dados

---

## 🌟 Considerações finais

Este repositório está em constante evolução.  
Cada exercício aqui representa um passo real na minha formação como desenvolvedor e como estudante de Engenharia de Computação.

Embora o foco deste repositório seja programação, meu objetivo sempre foi ir além do software: tudo isso se conecta ao meu estudo de **hardware, arquitetura de computadores, Assembly, FPGA e design de processadores**.  
A lógica que desenvolvo resolvendo problemas é a mesma que aplico quando penso em instrução, pipeline, CPU, memória ou em qualquer coisa que aproxima software do silício.

Se você chegou até aqui, fique à vontade para explorar, estudar ou comparar soluções.  
Sugestões e melhorias são sempre bem-vindas — aprender é um processo contínuo.

Obrigado por visitar! 🚀
