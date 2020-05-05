#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

sf::RenderWindow window(sf::VideoMode(330, 500), "Calculator");
sf::RectangleShape rectangle(sf::Vector2f(50, 50));

class Calculator {
public:

    void look() {

        rectangle.setFillColor(sf::Color(105, 105, 105));
        rectangle.setOutlineThickness(1.f);
        rectangle.setOutlineColor(sf::Color(0, 0, 0));


        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }


            window.clear(sf::Color::White);

            rectangle.setPosition(0, 0);
            window.draw(rectangle);

            rectangle.setPosition(0, 100);
            window.draw(rectangle);

            rectangle.setPosition(100, 0);
            window.draw(rectangle);

            rectangle.setPosition(0, 200);
            window.draw(rectangle);

            rectangle.setPosition(200, 0);
            window.draw(rectangle);

            rectangle.setPosition(0, 300);
            window.draw(rectangle);

            rectangle.setPosition(300, 0);
            window.draw(rectangle);

            rectangle.setPosition(100, 100);
            window.draw(rectangle);

            rectangle.setPosition(200, 100);
            window.draw(rectangle);

            rectangle.setPosition(200, 200);
            window.draw(rectangle);

            rectangle.setPosition(200, 300);
            window.draw(rectangle);

            rectangle.setPosition(300, 100);
            window.draw(rectangle);

            rectangle.setPosition(300, 200);
            window.draw(rectangle);

            rectangle.setPosition(300, 300);
            window.draw(rectangle);

            rectangle.setPosition(100, 200);
            window.draw(rectangle);

            rectangle.setPosition(100, 300);
            window.draw(rectangle);


            window.display();
        }
    }
    void mult() {
        rectangle.setPosition(100, 300);
        window.draw(rectangle);
    }
    void sub() {
        rectangle.setPosition(100, 300);
        window.draw(rectangle);
    }
    void add() {
        rectangle.setPosition(100, 300);
        window.draw(rectangle);
    }
    void div() {
        rectangle.setPosition(100, 300);
        window.draw(rectangle);
    }
};


int main()
{

    Calculator user;
    user.look();
    return 0;
}