class Anillo{
  
float x,y,d;
boolean on = false;
void inicio(float xpos, float ypos){
  x = xpos;
  y = ypos;
  on = true;
  d = 1;
}
void crecer(){
  if(on == true){
    d += 0.5;
    if (d > 400) {
      on = false;
    }
  }
}
void mostrar(){
 if (on == true){
   noFill();
   strokeWeight(4);
   stroke(155,153);
   ellipse(x, y, d, d);
      
        }
    }
}
Anillo[] anillos;
int numAnillos = 50;
int anilloActual = 0;

void setup(){
  size(1000,1000);
  smooth();
  anillos = new Anillo[numAnillos];
  for (int i = 0; i < numAnillos; i++){
  anillos[i] = new Anillo();
  }
 
}

void draw(){
 background(0);
 for(int i = 0; i < numAnillos; i++){
   anillos[i].crecer();
   anillos[i].mostrar();
  
  }
}

void mousePressed() {
  anillos[anilloActual].inicio(mouseX, mouseY);
  anilloActual++;
  if (anilloActual >= numAnillos){
    anilloActual = 0;
  }
 
}