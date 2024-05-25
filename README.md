# LibraryLab
## Требования

- **GCC 13.1.0 MinGW (SEH) - 64-bit**
- **CMAKE**

## Настройка
### 1. Установите MinGW-w64 c GCC и CMAKE

Если вы еще этого не сделали, скачайте и установите MinGW-w64, который включает GCC. А также CMAKE.
### 2. Добавьте каталог bin SFML в PATH

Перед сборкой проекта необходимо добавить каталог `SFML-2.6.1\bin`  в переменную среды PATH. Это гарантирует, что исполняемый файл сможет найти DLL-файлы SFML при запуске.

#### Windows 10/11

1. Нажмите `Win + R`, введите `sysdm.cpl` и нажмите `Enter`.
2. Перейдите на вкладку `Дополнительно` и нажмите кнопку `Переменные среды`.
3. В разделе `Системные переменные` найдите переменную `Path`, выберите ее и нажмите `Изменить`.
4. Нажмите `Создать` и добавьте путь к каталогу `bin` SFML (например, `C:\path\to\repo\SFML-2.6.1\bin`).
5. Нажмите `OK`, чтобы закрыть все окна.

