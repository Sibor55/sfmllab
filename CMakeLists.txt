# Устанавливаем минимально необходимую версию CMake
cmake_minimum_required(VERSION 3.16)

# Название проекта и языки программирования, которые будут использоваться
project(CMakeSFMLProject LANGUAGES CXX)

# Указываем директорию для выходных файлов
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Опция для выбора типа библиотек (статические или динамические)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# Подключаем модуль FetchContent для загрузки внешних зависимостей
include(FetchContent)

# Задаем репозиторий и ветку для загрузки SFML
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
# Загружаем и делаем доступным контент SFML
FetchContent_MakeAvailable(SFML)

# Создаем исполняемый файл из исходного файла src/main.cpp (При необходимости добавить или изменить на нужный Вам)
add_executable(main src/main.cpp)

# Линкуем SFML-графику к нашему исполняемому файлу (При необходимости также можно добавить или изменить, больше на https://www.sfml-dev.org/documentation/2.6.1/topics.php)
target_link_libraries(main PRIVATE sfml-graphics)

# Устанавливаем стандарт C++ 17 для компиляции
target_compile_features(main PRIVATE cxx_std_17)

# Если проект собирается на Windows
if(WIN32)
    # Добавляем команду для копирования DLL библиотеки OpenAL перед сборкой
    add_custom_command(
        TARGET main
        COMMENT "Copy OpenAL DLL"  # Комментарий, который будет выведен при выполнении команды
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:main>
        VERBATIM)
endif()
