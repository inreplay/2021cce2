PShape img;
void setup(){
    size(600,600,P3D);
    img=loadShape("Gundam.obj");
}
void draw(){
  background(128);
  translate(300,550);
  scale(20,-20,20);
  rotateY(radians(frameCount));
  shape(img);
}
