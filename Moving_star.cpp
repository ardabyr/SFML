#include <iostream>
#include <cmath>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main()
{
    RenderWindow window;
    window.create(VideoMode(800, 600), "STAR");


    ConvexShape star; star.setPointCount(10);
    star.setFillColor(Color{ 255,255,0 });

    int r_1 = 75, r_2 = 25;

    CircleShape shape_small(r_2), shape_big(r_1);

    double sh_1x = 311, sh_1y = 211, sh_2x = 362, sh_2y = 262, sx = 311, sy = 211;

    double sx1 = 75, sy1 = 0, sx2 = 90, sy2 = 57, sx3 = 142, sy3 = 57, sx4 = 96, sy4 = 77, sx5 = 113, sy5 = 133,
        sx6 = 75, sy6 = 105, sx7 = 37, sy7 = 133, sx8 = 55, sy8 = 77, sx9 = 9, sy9 = 57, sx10 = 64, sy10 = 57;

    star.setPosition(sx, sy);

    shape_big.setPosition(sh_1x, sh_1y);
    shape_big.setFillColor(Color{ 30, 70, 100 });
    shape_big.setOutlineThickness(5);
    shape_big.setOutlineColor(Color{ 255,0,0 });

    shape_small.setPosition(sh_2x, sh_2y);
    shape_small.setFillColor(Color{ 255,255,0 });
    shape_small.setOutlineThickness(5);
    shape_small.setOutlineColor(Color{ 0,255,0 });

    RectangleShape p_1, p_3;

    ConvexShape p_2, p_4;
    p_2.setPointCount(12);
    p_4.setPointCount(12);

    p_1.setSize(Vector2f(30, 15));
    p_1.setPosition(20, 35);
    p_1.setFillColor(Color{ 255,0,0 });

    p_3.setSize(Vector2f(30, 15));
    p_3.setPosition(620, 35);
    p_3.setFillColor(Color{ 0,255,0 });

    p_2.setPoint(0, Vector2f(70, 35));
    p_2.setPoint(1, Vector2f(85, 35));
    p_2.setPoint(2, Vector2f(85, 20));
    p_2.setPoint(3, Vector2f(100, 20));
    p_2.setPoint(4, Vector2f(100, 35));
    p_2.setPoint(5, Vector2f(115, 35));
    p_2.setPoint(6, Vector2f(115, 50));
    p_2.setPoint(7, Vector2f(100, 50));
    p_2.setPoint(8, Vector2f(100, 65));
    p_2.setPoint(9, Vector2f(85, 65));
    p_2.setPoint(10, Vector2f(85, 50));
    p_2.setPoint(11, Vector2f(70, 50));
    p_2.setFillColor(Color{ 255,0,0 });

    p_4.setPoint(0, Vector2f(670, 35));
    p_4.setPoint(1, Vector2f(685, 35));
    p_4.setPoint(2, Vector2f(685, 20));
    p_4.setPoint(3, Vector2f(700, 20));
    p_4.setPoint(4, Vector2f(700, 35));
    p_4.setPoint(5, Vector2f(715, 35));
    p_4.setPoint(6, Vector2f(715, 50));
    p_4.setPoint(7, Vector2f(700, 50));
    p_4.setPoint(8, Vector2f(700, 65));
    p_4.setPoint(9, Vector2f(685, 65));
    p_4.setPoint(10, Vector2f(685, 50));
    p_4.setPoint(11, Vector2f(670, 50));
    p_4.setFillColor(Color{ 0,255,0 });

    int k_1 = 0, j_1 = 0, k_2 = 0, j_2 = 0, k_3 = 0, j_3 = 0, k_4 = 0, j_4 = 0;



    Event event;

    while (window.isOpen())
    {

        Vector2i mousePoz = Mouse::getPosition(window);

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::MouseButtonPressed) {
                if (event.key.code == Mouse::Left) {
                    if (p_1.getGlobalBounds().contains(mousePoz.x, mousePoz.y)) {
                        if (r_1 - r_2 - 2 > r_1 / 3 ) {
                            sh_1x = sh_1x + 2;
                            sh_1y = sh_1y + 2;
                            r_1 = r_1 - 2;
                            shape_big.setRadius(r_1);
                            sy1 = sy1 + 2;
                            sx3 = sx3 - 2;
                            sy3 = sy3 + 2;
                            sx5 = sx5 - 2;
                            sy5 = sy5 - 2;
                            sx7 = sx7 + 2;
                            sy7 = sy7 - 2;
                            sx9 = sx9 + 2;
                            sy9 = sy9 + 2;
                            k_1++;

                            shape_big.setPosition(sh_1x, sh_1y);
                        }
                    }
                    else if (p_2.getGlobalBounds().contains(mousePoz.x, mousePoz.y)) {
                        if (r_1 < 100 ) {
                            sh_1x = sh_1x - 2;
                            sh_1y = sh_1y - 2;
                            r_1 = r_1 + 2;
                            shape_big.setRadius(r_1);
                            sy1 = sy1 - 2;
                            sx3 = sx3 + 2;
                            sy3 = sy3 - 2;
                            sx5 = sx5 + 2;
                            sy5 = sy5 + 2;
                            sx7 = sx7 - 2;
                            sy7 = sy7 + 2;
                            sx9 = sx9 - 2;
                            sy9 = sy9 - 2;
                            k_2++;

                            shape_big.setPosition(sh_1x, sh_1y);
                        }
                    }
                    else if (p_3.getGlobalBounds().contains(mousePoz.x, mousePoz.y)) {
                        if ( r_2 > 18 ) {
                            sh_2x = sh_2x + 2;
                            sh_2y = sh_2y + 2;
                            r_2 = r_2 - 2;
                            shape_small.setRadius(r_2);
                            sx2 = sx2 - 2;
                            sy2 = sy2 + 2;
                            sx4 = sx4 - 2;
                            sy4 = sy4 - 2;
                            sy6 = sy6 - 2;
                            sx8 = sx8 + 2;
                            sy8 = sy8 - 2;
                            sx10 = sx10 + 2;
                            sy10 = sy10 + 2;
                            k_3++;

                            shape_small.setPosition(sh_2x, sh_2y);
                        }
                    }
                    else if (p_4.getGlobalBounds().contains(mousePoz.x, mousePoz.y)) {
                        if ( r_1 - r_2 - 2 > r_1 / 3 ) {
                            sh_2x = sh_2x - 2;
                            sh_2y = sh_2y - 2;
                            r_2 = r_2 + 2;
                            shape_small.setRadius(r_2);
                            sx2 = sx2 + 2;
                            sy2 = sy2 - 2;
                            sx4 = sx4 + 2;
                            sy4 = sy4 + 2;
                            sy6 = sy6 + 2;
                            sx8 = sx8 - 2;
                            sy8 = sy8 + 2;
                            sx10 = sx10 - 2;
                            sy10 = sy10 - 2;
                            k_4++;

                            shape_small.setPosition(sh_2x, sh_2y);
                        }
                    }
                }
            }
        }

        window.clear(Color{ 30, 70, 100 });

        star.setPoint(0, Vector2f(sx1, sy1));
        star.setPoint(1, Vector2f(sx2, sy2));
        star.setPoint(2, Vector2f(sx3, sy3));
        star.setPoint(3, Vector2f(sx4, sy4));
        star.setPoint(4, Vector2f(sx5, sy5));
        star.setPoint(5, Vector2f(sx6, sy6));
        star.setPoint(6, Vector2f(sx7, sy7));
        star.setPoint(7, Vector2f(sx8, sy8));
        star.setPoint(8, Vector2f(sx9, sy9));
        star.setPoint(9, Vector2f(sx10, sy10));



        int x, y;
        if (Mouse::isButtonPressed(Mouse::Left)) {
            x = mousePoz.x;
            y = mousePoz.y;
            if (star.getGlobalBounds().contains(x, y)) {
                sh_2x = x - 25 - 2 * abs(k_4 - k_3);
                sh_2y = y - 25 - 2 * abs(k_4 - k_3);
                sh_1x = x - 75 - 2 * abs(k_2 - k_1);
                sh_1y = y - 75 - 2 * abs(k_2 - k_1);
                sx = x - 75;
                sy = y - 75;
                star.setPosition(sx, sy);
                shape_big.setPosition(sh_1x, sh_1y);
                shape_small.setPosition(sh_2x, sh_2y);
            }
        }


        window.draw(p_1);
        window.draw(p_2);
        window.draw(p_3);
        window.draw(p_4);
        window.draw(shape_big);
        window.draw(star);
        window.draw(shape_small);


        window.display();
    }

    return 0;
}
