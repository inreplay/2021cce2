void setup(){//只做一次
  size(300,300);//大小
  background(#EA6B6B);//背景色
  fill(#FFFCFC);//字體色
  textSize(50);//字大小
  textAlign(CENTER,CENTER);
  //文字顯示，對齊正中間
}
void draw(){//每秒60次
  background(#2E2121);//背景色
  //text("1",mouseX,mouseY);
  text("Dinner1",150,50);
  text("Dinner1",150,150);
  text("Dinner1",150,250);
  //隨著鼠標移動並秀出
  
}
