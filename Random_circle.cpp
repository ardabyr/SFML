#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <fstream>
#include <string>

using namespace std;
using namespace sf;

int main()
{
    string path;
    cout << "Enter Path to the file(do not forget .txt): ";
    cin >> path;
    ifstream fin;
    fin.open(path);
    int sp[10][6];
    string s;
    int k = 0, t = 0;
    while (getline(fin, s)) {
        int j = 0;
        string f = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                sp[k][j] = stoi(f);
                f = ' ';
                j++;
            }
            else {
                f = f + s[i];
            }
        }

        sp[k][5] = stoi(f);
        k++;
    }




    RenderWindow window(VideoMode(800, 800), "SFML works!");

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
        
        CircleShape shape_0(sp[0][2]);
        Uint8 ss_0 = sp[0][3], dd_0 = sp[0][4], ff_0 = sp[0][5];
        float
            gg_0 = sp[0][0], hh_0 = sp[0][1];
        shape_0.setPosition({ gg_0, hh_0 });
        shape_0.setFillColor(Color
            { ss_0, dd_0, ff_0 });
        window.draw(shape_0);
        CircleShape
            shape_1(sp[1][2]);
        Uint8
            ss_1 = sp[1][3], dd_1 = sp[1][4], ff_1 = sp[1][5];
        float
            gg_1 = sp[1][0], hh_1 = sp[1][1];
        shape_1.setPosition({ gg_1, hh_1 });
        shape_1.setFillColor(Color
            { ss_1, dd_1, ff_1 });
        window.draw(shape_1);
        CircleShape
            shape_2(sp[2][2]);
        Uint8
            ss_2 = sp[2][3], dd_2 = sp[2][4], ff_2 = sp[2][5];
        float
            gg_2 = sp[2][0], hh_2 = sp[2][1];
        shape_2.setPosition({ gg_2, hh_2 });
        shape_2.setFillColor(Color
            { ss_2, dd_2, ff_2 });
        window.draw(shape_2);
        CircleShape
            shape_3(sp[3][2]);
        Uint8
            ss_3 = sp[3][3], dd_3 = sp[3][4], ff_3 = sp[3][5];
        float
            gg_3 = sp[3][0], hh_3 = sp[3][1];
        shape_3.setPosition({ gg_3, hh_3 });
        shape_3.setFillColor(Color
            { ss_3, dd_3, ff_3 });
        window.draw(shape_3);
        CircleShape
            shape_4(sp[4][2]);
        Uint8
            ss_4 = sp[4][3], dd_4 = sp[4][4], ff_4 = sp[4][5];
        float
            gg_4 = sp[4][0], hh_4 = sp[4][1];
        shape_4.setPosition({ gg_4, hh_4 });
        shape_4.setFillColor(Color
            { ss_4, dd_4, ff_4 });
        window.draw(shape_4);
        CircleShape
            shape_5(sp[5][2]);
        Uint8
            ss_5 = sp[5][3], dd_5 = sp[5][4], ff_5 = sp[5][5];
        float
            gg_5 = sp[5][0], hh_5 = sp[5][1];
        shape_5.setPosition({ gg_5, hh_5 });
        shape_5.setFillColor(Color
            { ss_5, dd_5, ff_5 });
        window.draw(shape_5);
        CircleShape
            shape_6(sp[6][2]);
        Uint8
            ss_6 = sp[6][3], dd_6 = sp[6][4], ff_6 = sp[6][5];
        float
            gg_6 = sp[6][0], hh_6 = sp[6][1];
        shape_6.setPosition({ gg_6, hh_6 });
        shape_6.setFillColor(Color
            { ss_6, dd_6, ff_6 });
        window.draw(shape_6);
        CircleShape
            shape_7(sp[7][2]);
        Uint8
            ss_7 = sp[7][3], dd_7 = sp[7][4], ff_7 = sp[7][5];
        float
            gg_7 = sp[7][0], hh_7 = sp[7][1];
        shape_7.setPosition({ gg_7, hh_7 });
        shape_7.setFillColor(Color
            { ss_7, dd_7, ff_7 });
        window.draw(shape_7);
        CircleShape
            shape_8(sp[8][2]);
        Uint8
            ss_8 = sp[8][3], dd_8 = sp[8][4], ff_8 = sp[8][5];
        float
            gg_8 = sp[8][0], hh_8 = sp[8][1];
        shape_8.setPosition({ gg_8, hh_8 });
        shape_8.setFillColor(Color
            { ss_8, dd_8, ff_8 });
        window.draw(shape_8);
        CircleShape
            shape_9(sp[9][2]);
        Uint8
            ss_9 = sp[9][3], dd_9 = sp[9][4], ff_9 = sp[9][5];
        float
            gg_9 = sp[9][0], hh_9 = sp[9][1];
        shape_9.setPosition({ gg_9, hh_9 });
        shape_9.setFillColor(Color
            { ss_9, dd_9, ff_9 });
        window.draw(shape_9);


        window.display();
    }

    return 0;
}
