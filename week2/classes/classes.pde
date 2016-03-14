Ball[] objects;

void setup() {
  size(500, 500);
  objects  = new Ball[100];
  for(int i=0;i<objects.length;i++){
    objects[i] = new Ball(random(10,100));
  }
}

void draw() {
 // background(255,255,255,1);
  for(int i=0;i<objects.length;i++){
    objects[i].Update();
  }
}