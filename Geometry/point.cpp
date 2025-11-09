#include<iostream>
#include<math.h>
#include"point.h"
#include"vector.h"

Point2f MakeP2f(float x, float y){
    Point2f p;
    p.x = x;
    p.y = y;
    return p;
}
Point2f Translate(const Point2f& p, float dx, float dy){
    Point2f pointf;
    pointf.x = p.x + dx;
    pointf.y = p.y + dy;
    return pointf;
}
Point2f Translate(const Point2f& p, const Vector2f& v){
    Point2f pointf;
    pointf.x = p.x + V.x;
    pointf.y = p.y + v.y;
    return pointf;
}
Point2f Scale(const Point2f& p, float sx, float sy){
    Point2f pointf;
    pointf.x = p.x * sx;
    pointf.y = p.y * sy;
    return pointf;
}
Point2f Scale(const Point2f& p, const Vector2f& v){
    Point2f pointf;
    pointf.x = p.x * v.x;
    pointf.y = p.x * v.y;
    return pointf;
}
Point2f Rotate(const Point2f& p, float angleDegree){
    float angle = angleDegree * 0.0175;
    Point2f pointf;
    pointf.x = p.x * cos(angle) - p.y * sin(angle);
    pointf.y = p.x * sin(angle) - p.y * cos(angle);
    return pointf;
}
