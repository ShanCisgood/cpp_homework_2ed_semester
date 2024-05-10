#include <bits/stdc++.h>
using namespace std;

const float pi = 3.14;
// 基底類別 Shape
// Parent class Shape
class Shape {
   public:
    // 虛擬函式計算面積
    // Virtual function to calculate the area
    virtual float getArea() {};
};

// 矩形類別 Rectangle，繼承自 Shape
// Rectangle class inherits from Shape
class Rectangle : public Shape {
   private:
    float width;
    float height;

   public:
    Rectangle(float w, float h) : width(w), height(h) {}
    virtual float getArea() override { return width * height; }
    /* 請填入計算矩形面積的程式碼 */
    /* please complete the code to calculate the area of rectangle */
};

// 圓形類別 Circle，繼承自 Shape
// Circle class inherits from Shape
class Circle : public Shape {
   private:
    float radius;

   public:
    Circle(float r) : radius(r) {}
    virtual float getArea() override { return pi * radius * radius; }
    /* 請填入計算圓形面積的程式碼 */
    /* please complete the code to calculate the area of circle */
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int numShapes;
    cin >> numShapes;

    vector<Shape*> shapes;

    for (int i = 0; i < numShapes; i++) {
        char shapeType;
        cin >> shapeType;

        if (shapeType == 'R') {
            float x, y, width, height;
            cin >> x >> y >> width >> height;
            shapes.push_back(new Rectangle(width, height));
        }
        else if (shapeType == 'C') {
            float x, y, radius;
            cin >> x >> y >> radius;
            shapes.push_back(new Circle(radius));
        }
    }

    for (const auto& shape : shapes) {
        cout << "area of the figure: " << shape->getArea() << endl;
    }

    float totalArea = 0;

    /* 請填入計算所有圖形總面積的程式碼 */
    /* please complete the code to calculate the sum of all shapes' area */
    for (auto& shap : shapes)
        totalArea += shap->getArea();

    cout << "total area of all shapes: " << totalArea << endl;

    // 釋放記憶體
    // Release memory
    for (const auto& shape : shapes) {
        delete shape;
    }

    return 0;
}
