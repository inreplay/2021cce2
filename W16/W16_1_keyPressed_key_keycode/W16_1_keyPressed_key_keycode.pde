void setup(){
  size(300,300);
}
String line="";
void draw(){
  background(#FFFFF2);
  textSize(50);
  fill(0);text(line,50,50);

}
void keyPressed(){
  line="now key:"+key;
  line+="\nkeyCode: "+keyCode;
}
void keyReleased(){
  line="";
}
