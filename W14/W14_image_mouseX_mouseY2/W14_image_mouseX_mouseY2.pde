PImage img,img2;
void setup(){
    size(500,500);
    img=loadImage("2.jpg");
    img2=loadImage("1.jpg");
}
int dy=0;//子彈遠度
void draw(){
  background(#FFFFFF);
  imageMode(CENTER);
  image(img,mouseX,mouseY);
  if(mousePressed){
    image(img2,mouseX,mouseY-dy);
    dy++;
  }
}
