void setup(){//只做一次
  size(300,300);//大小
  background(#EA6B6B);//背景色
  fill(#FFFCFC);//字體色
  textSize(50);//字大小
  textAlign(CENTER,CENTER);
  //文字顯示，對齊正中間
}
int choice=-1;
void draw(){//每秒60次
  background(#2E2121);//背景色
  //text("1",mouseX,mouseY);
  text("Dinner1",150,50);
  text("Dinner2",150,150);
  text("Dinner3",150,250);
  //隨著鼠標移動並秀出
  //int choice=mouseX%3;
  if(choice==0)ellipse(30,50,50,50);
  if(choice==1)ellipse(30,150,50,50);
  if(choice==2)ellipse(30,250,50,50);
  //任意圓 x, y, w, h
}
void mousePressed(){//mouse按下時
  choice=int(random(3));//在0.00~2.99(不包括3.0)
  //取出0,1,2


}
