#include <stdio.h>
enum type { Circle=1, Rectangle };
struct shape {
    enum type shapeType;
    union {
        float length[2];
        float radius;
    } dimension;
} s;
float recarea(float length, float bredth) {
    return length*bredth;
}
float cirarea(float radius) {
    return 3.14 *radius*radius;
}
int main() {
    float a1;
    scanf("%d", &s.shapeType);
    if (s.shapeType == Circle) {
                scanf("%f", &(s.dimension.radius));
        a1 = cirarea(s.dimension.radius);
        printf("Area of the circle: %.4f units\n", a1);
    }
    else if (s.shapeType == Rectangle) {
                scanf("%f", &s.dimension.length[0]);
               scanf("%f", &s.dimension.length[1]);
        a1 = recarea(s.dimension.length[0], s.dimension.length[1]);
        printf("Area of the rectangle: %.4f units\n",a1);
    }
    else {
        printf("Invalid choice!");
    }
    return 0;
}

