# Лабораторная работа №8
## Подключение библиотеки SFML через CMake 


## Как использовать

1. Установите Git и CMake.
1. Клонируйте новый репозиторий GitHub и откройте его в текстовом редакторе по вашему выбору.
1. Откройте [CMakeLists.txt](CMakeLists.txt). Переименуйте проект и исполняемый файл в любое имя.
1. Если вы хотите добавить или удалить какие-либо файлы .cpp, измените исходные файлы, перечисленные в вызове [`add_executable`](CMakeLists.txt#L10) в CMakeLists.txt, чтобы они соответствовали исходным файлам, которые требуются вашему проекту. Если вы планируете сохранить файл main.cpp по умолчанию, никаких изменений не требуется.
1. Если вы используете Linux, установите зависимости SFML с помощью системного менеджера пакетов. В Ubuntu и других дистрибутивах на основе Debian вы можете использовать следующие команды:
    ```
    sudo apt update
    sudo apt install \
        libxrandr-dev \
        libxcursor-dev \
        libudev-dev \
        libfreetype-dev \
        libopenal-dev \
        libflac-dev \
        libvorbis-dev \
        libgl1-mesa-dev \
        libegl1-mesa-dev
    ```
1. Настройте и создайте свой проект. Большинство популярных IDE поддерживают проекты CMake без особых усилий с вашей стороны.
    - [VS Code](https://code.visualstudio.com) через [расширение CMake](https://code.visualstudio.com/docs/cpp/cmake-linux)
    - [Visual Studio](https://docs.microsoft.com/en-us/cpp/build/cmake-projects-in-visual-studio?view=msvc-170)
    - [CLion](https://www.jetbrains.com/clion/features/cmake-support.html)
    - [Qt Creator](https://doc.qt.io/qtcreator/creator-project-cmake.html)

    Использовать CMake из командной строки также просто.

    Для генератора с одной конфигурацией (обычно в Linux и macOS):
    ```
    cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
    cmake --build build
    ```

    Для генератора с несколькими конфигурациями (обычно в Windows):
    ```
    cmake -S . -B build
    cmake --build build --config Release
    ```
1. Наслаждайтесь!
