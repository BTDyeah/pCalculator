#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>


class Calculator {
public:
    void mult() {
    }
    void sub() {
        
    }
    void add() {
       
    }
    void div() {
        
    }
};


int main()
{
    sf::RenderWindow window(sf::VideoMode(305, 500), "Calculator");
    sf::RectangleShape rectangle(sf::Vector2f(70, 50));

    
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

        window.clear(sf::Color::Black);

        rectangle.setFillColor(sf::Color(35, 43, 43));

        rectangle.setPosition(5, 445);
        window.draw(rectangle);
        rectangle.setPosition(80, 445);
        window.draw(rectangle);
        rectangle.setPosition(155, 445);
        window.draw(rectangle);
        
        
        rectangle.setPosition(5, 390);
        window.draw(rectangle);
        rectangle.setPosition(80, 390);
        window.draw(rectangle);
        rectangle.setPosition(155, 390);
        window.draw(rectangle);
        
       
        rectangle.setPosition(5, 335);
        window.draw(rectangle);
        rectangle.setPosition(80, 335);
        window.draw(rectangle);
        rectangle.setPosition(155, 335);
        window.draw(rectangle);
        
        
        rectangle.setPosition(5, 280);
        window.draw(rectangle);
        rectangle.setPosition(80, 280);
        window.draw(rectangle);
        rectangle.setPosition(155, 280);
        window.draw(rectangle);
        
        rectangle.setFillColor(sf::Color(105, 105, 105));

        rectangle.setPosition(5, 225);
        window.draw(rectangle);
        rectangle.setPosition(80, 225);
        window.draw(rectangle);
        rectangle.setPosition(155, 225);
        window.draw(rectangle);
        

        rectangle.setPosition(5, 170);
        window.draw(rectangle);
        rectangle.setPosition(80, 170);
        window.draw(rectangle);
        rectangle.setPosition(155, 170);
        window.draw(rectangle);
        

        rectangle.setPosition(230, 445);
        window.draw(rectangle);
        rectangle.setPosition(230, 390);
        window.draw(rectangle);
        rectangle.setPosition(230, 335);
        window.draw(rectangle);
        rectangle.setPosition(230, 280);
        window.draw(rectangle);
        rectangle.setPosition(230, 225);
        window.draw(rectangle);
        rectangle.setPosition(230, 170);
        window.draw(rectangle);

        window.display();
    }

  
    return 0;
}