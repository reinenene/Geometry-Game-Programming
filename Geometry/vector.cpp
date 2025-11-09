#include<iostream>
#include<math.h>
#include"point.h"
#include"vector.h"

Vector2f MakeV2f(float x, float y){
    Vector2f v;
    v.x = x;
    v.y = y;
    return v;
}
Vector2f MakeV2f(const Point2f& a, const Point2f& b){
    Vector2f v;
    v.x = b.x - a.x;
    v.y = b.y - a.y;
    return v;
}
Vector2f Add(const Vector2f& a, const Vector2f& b){
    Vector2f vf;
    vf.x = a.x + b.x;
    vf.y = a.y + b.y;
    return vf;
}
Vector2f Sub(const Vector2f a, const Vector2f b){
    Vector2f vf;
    vf.x = a.x - b.x;
    vf.y = a.y - b.y;
    return vf;
}
Vector2f Scale(const Vector2f& v, float scalar){
    Vector2f vf;
    vf.x = v.x * scalar;
    vf.y = v.y * scalar;
    return vf;
}
float Dot(const Vector2f& a, const Vector2f& b){
    return a.x * b.x + a.y * b.y;
}
float Length(const Vector2f v){
    return sqrt(v.x * v.x + v.y * v.y);
}
Vector2f Normalize(const Vector2f& v){
    float t = Length(v);
    float xf;
    float yf;
    xf = v.x / t;
    yf = v.y / t;
    return (xf, yf);
}
Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t){
    return {a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t};
}
float Determinant(const Vector2f& a, const Vector2f& b){
    return a.x * b.y - a.y * b.x;
}
std::string ToString(const Vector2f& v) {
    return "(" + std::to_string(v.x) + ", " + std::to_string(v.y) + ")";
}