PImage img;
void setup(){
    size(500,500);
    img=loadImage("image.png");
}
void draw(){
  image(img,mouseX,mouseY);
}
