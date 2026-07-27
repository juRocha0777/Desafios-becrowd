# Exercícios Beecrowd

Repositório dedicado às minhas soluções dos problemas do **Beecrowd**, organizadas por linguagem.

O objetivo é registrar minha evolução em algoritmos, lógica de programação e boas práticas de desenvolvimento, mantendo uma estrutura organizada e consistente para facilitar os estudos e futuras consultas.

---

## 📁 Estrutura

```text
.
├── C++
│   ├── 1001
│   ├── 1002
│   └── ...
├── Python
│   ├── 1001
│   ├── 1002
│   └── ...
└── README.md
```

Cada exercício possui sua própria pasta identificada pelo número do problema, permitindo manter as soluções organizadas e independentes entre as linguagens.

---

## 👨‍💻 Sobre mim

Sou **Júnior**, estudante de **Engenharia de Computação**, e utilizo este repositório para praticar programação, fortalecer minha base em algoritmos e construir um histórico consistente de estudos.

Atualmente resolvo os exercícios principalmente em **C++** e **Python**.

---

# 🛠 Ambiente de desenvolvimento (C++)

Os exercícios em C++ utilizam um ambiente moderno baseado em:

* **C++23**
* **C17**
* **CMake**
* **Ninja**
* **MSYS2 UCRT64 (GCC)**
* **clangd** para IntelliSense
* **Cursor** *(recomendo utilizar o modo IDE com as sugestões inline desativadas durante os estudos para incentivar a resolução dos problemas por conta própria).*

Cada exercício possui seu próprio `CMakeLists.txt`, permitindo compilação independente e uma estrutura próxima da utilizada em projetos profissionais.

---

## 📄 CMakeLists.txt padrão

```cmake
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
```

---

## ▶️ Como compilar (C++)

Dentro da pasta do exercício:

```bash
cmake -B build -G Ninja
cmake --build build
```

O executável será gerado automaticamente na pasta `bin/`.

---

## 🐍 Executando os exercícios em Python

Linux/macOS

```bash
cd Python/1001
python3 main.py
```

Windows

```powershell
cd Python/1001
python main.py
```

---

## 📌 Objetivos

* Evoluir em algoritmos e lógica de programação;
* Consolidar fundamentos de Ciência da Computação;
* Escrever código limpo, organizado e legível;
* Criar um histórico consistente da minha evolução;
* Aplicar boas práticas de desenvolvimento em projetos simples.

---

## 🚀 Considerações finais

Este repositório está em constante evolução e acompanha minha jornada como estudante de Engenharia de Computação.

Além da resolução dos problemas do Beecrowd, ele também serve como um ambiente para praticar organização de projetos, utilização do CMake, estruturação de código em C e C++, além do uso de ferramentas modernas do ecossistema de desenvolvimento.

Meu maior interesse está na interseção entre **software e hardware**, especialmente em áreas como arquitetura de computadores, sistemas computacionais, Assembly, FPGA e projeto de processadores. A lógica desenvolvida na resolução desses exercícios serve como base para compreender sistemas computacionais em níveis cada vez mais baixos de abstração.

Se este repositório puder ajudar alguém nos estudos, ficarei muito feliz. Sugestões, correções e melhorias são sempre bem-vindas.

**Bons estudos!** 🚀
