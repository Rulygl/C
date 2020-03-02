Punto pt;

void setup(){
  size(100,100);
  smooth();
  noStroke();
  pt = new Punto();
  pt.x = 33;
  pt.y = 50;
  pt.d =30;
}

void draw(){
 background(0);
 ellipse(pt.x, pt.y, pt.d, pt.d);
  
}

class Punto{
  float x,y,d;
}