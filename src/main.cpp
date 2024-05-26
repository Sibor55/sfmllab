#include <SFML/Graphics.hpp>
#include <cmath>

// Константы для траектории в виде восьмерки
const float PI = 3.14159265358979323846;
const float SPEED = 1.0f;
const float RADIUS = 50.0f; // радиус круга
const float SCALE_X = 200.0f; // масштаб по оси X
const float SCALE_Y = 100.0f; // масштаб по оси Y
const float CENTER_X = 400.0f; // центр по оси X
const float CENTER_Y = 300.0f; // центр по оси Y

int main()
{
    // Создаем окно
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFMLLab");

    // Создаем круг
    sf::CircleShape circle(RADIUS);
    circle.setFillColor(sf::Color::White);

    sf::Clock clock;

    // Запускаем основной цикл программы
    while (window.isOpen())
    {
        // Обрабатываем события
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Получаем время с момента запуска
        float time = clock.getElapsedTime().asSeconds() * SPEED;

        // Вычисляем новые координаты круга по формуле
        float x = SCALE_X * std::sin(time) * std::cos(time);
        float y = SCALE_Y * std::sin(time);

        // Устанавливаем новую позицию круга
        circle.setPosition(CENTER_X + x - RADIUS, CENTER_Y + y - RADIUS);

        // Очищаем окно
        window.clear(sf::Color::Black);

        // Рисуем круг
        window.draw(circle);

        // Отображаем изменения
        window.display();
    }

    return 0;
}
