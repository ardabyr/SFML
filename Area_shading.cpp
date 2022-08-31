#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 800), "SFML works!");
    int s_0 = 0, s_1 = 0, s_2 = 0, s_3 = 0, s_4 = 0, s_5 = 0, s_6 = 0, s_7 = 0, x, y;
    int d_0[1000][2], d_1[1000][2], d_2[1000][2], d_3[1000][2], d_4[1000][2], d_5[1000][2], d_6[1000][2], d_7[1000][2];
    CircleShape shape_0(10), shape_1(10), shape_2(10), shape_3(10), shape_4(10), shape_5(10), shape_6(10), shape_7(10), s(30);
    RectangleShape rect_0, rect_1, rect_2, rect_3, rect_4, rect_5, rect_6, rect_7;
    rect_0.setSize(Vector2f(98, 500));
    rect_0.setPosition(0, 300);

    rect_1.setSize(Vector2f(98, 470));
    rect_1.setPosition(100, 330);

    rect_2.setSize(Vector2f(98, 318));
    rect_2.setPosition(200, 600);

    rect_3.setSize(Vector2f(98, 718));
    rect_3.setPosition(300, 200);

    rect_4.setSize(Vector2f(98, 478));
    rect_4.setPosition(400, 378);

    rect_5.setSize(Vector2f(98, 839));
    rect_5.setPosition(500, 220);

    rect_6.setSize(Vector2f(98, 800));
    rect_6.setPosition(600, 670);

    rect_7.setSize(Vector2f(98, 800));
    rect_7.setPosition(700, 419);


    shape_0.setFillColor(Color{ 100,50,200 });
    shape_1.setFillColor(Color{ 100,50,100 });
    shape_2.setFillColor(Color{ 100,50,0 });
    shape_3.setFillColor(Color{ 100,150,200 });
    shape_4.setFillColor(Color{ 100,250,200 });
    shape_5.setFillColor(Color{ 0,50,200 });
    shape_6.setFillColor(Color{ 200,50,200 });
    shape_7.setFillColor(Color{ 100,100,100 });
    while (window.isOpen())
    {
        Vector2i mousePoz = Mouse::getPosition(window);

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear(Color{ 100,50,100 });


        window.draw(rect_0);
        window.draw(rect_1);
        window.draw(rect_2);
        window.draw(rect_3);
        window.draw(rect_4);
        window.draw(rect_5);
        window.draw(rect_6);
        window.draw(rect_7);

        if (Mouse::isButtonPressed(Mouse::Left)) {
            x = mousePoz.x;
            y = mousePoz.y;
            if (rect_0.getGlobalBounds().contains(x, y)) {
                d_0[s_0][0] = x;
                d_0[s_0][1] = y;
                s_0++;
            }
            else if (rect_1.getGlobalBounds().contains(x, y)) {
                d_1[s_1][0] = x;
                d_1[s_1][1] = y;
                s_1++;
            }
            else if (rect_2.getGlobalBounds().contains(x, y)) {
                d_2[s_2][0] = x;
                d_2[s_2][1] = y;
                s_2++;
            }
            else if (rect_3.getGlobalBounds().contains(x, y)) {
                d_3[s_3][0] = x;
                d_3[s_3][1] = y;
                s_3++;
            }
            else if (rect_4.getGlobalBounds().contains(x, y)) {
                d_4[s_4][0] = x;
                d_4[s_4][1] = y;
                s_4++;
            }
            else if (rect_5.getGlobalBounds().contains(x, y)) {
                d_5[s_5][0] = x;
                d_5[s_5][1] = y;
                s_5++;
            }
            else if (rect_6.getGlobalBounds().contains(x, y)) {
                d_6[s_6][0] = x;
                d_6[s_6][1] = y;
                s_6++;
            }
            if (rect_7.getGlobalBounds().contains(x, y)) {
                d_7[s_7][0] = x;
                d_7[s_7][1] = y;
                s_7++;
            }
        }


        for (int i = 0; i < s_0; i++) {
            shape_0.setPosition(d_0[i][0] - 10, d_0[i][1] - 10);
            window.draw(shape_0);
        }
        for (int i = 0; i < s_1; i++) {
            shape_1.setPosition(d_1[i][0] - 10, d_1[i][1] - 10);
            window.draw(shape_1);
        }
        for (int i = 0; i < s_2; i++) {
            shape_2.setPosition(d_2[i][0] - 10, d_2[i][1] - 10);
            window.draw(shape_2);
        }
        for (int i = 0; i < s_3; i++) {
            shape_3.setPosition(d_3[i][0] - 10, d_3[i][1] - 10);
            window.draw(shape_3);
        }
        for (int i = 0; i < s_4; i++) {
            shape_4.setPosition(d_4[i][0] - 10, d_4[i][1] - 10);
            window.draw(shape_4);
        }
        for (int i = 0; i < s_5; i++) {
            shape_5.setPosition(d_5[i][0] - 10, d_5[i][1] - 10);
            window.draw(shape_5);
        }
        for (int i = 0; i < s_6; i++) {
            shape_6.setPosition(d_6[i][0] - 10, d_6[i][1] - 10);
            window.draw(shape_6);
        }
        for (int i = 0; i < s_7; i++) {
            shape_7.setPosition(d_7[i][0] - 10, d_7[i][1] - 10);
            window.draw(shape_7);
        }

        window.display();
    }

    return 0;
}




