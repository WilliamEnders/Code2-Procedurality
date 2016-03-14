class Ball {

  PVector pos, speed;
  float diam, grav, bounceFactor;
  color c;

  Ball(float _diam) {
    diam = _diam;
    bounceFactor = -.8;
    grav = .8;
    
    float sX = random(diam/2,width-diam/2);
    float sY = random(diam/2,height-diam/2);
    
    float sXV = random(-10,10);
    
    pos = new PVector(sX, sY);
    speed = new PVector(sXV, 0);
  }

  void Update() {
    pos.x += speed.x;
    pos.y += speed.y;
    speed.y += grav;
    noStroke();
    fill(c);
    ellipse(pos.x, pos.y, diam, diam);
    
    if(pos.y >= height-diam/2){
      speed.y *= bounceFactor;
      c = color(random(0,255),random(0,255),random(0,255));
    }
    if(pos.x >= width-diam/2 || pos.x <= 0+diam/2){
      speed.x *= -1;
    }
    if(mousePressed){
    speed.y = -3;
  }
  }
}