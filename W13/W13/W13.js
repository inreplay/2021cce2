//java(W13-5)改p5.js
//  https://pde2js.herokuapp.com/轉檔
//貼製這裡執行
//Run開啟網頁
//放上github  https://github.com/inreplay/inreplay.github.io
function setup() {
    // 文字顯示，對齊正中間
    initializeFields();
    // 只做一次
    // 大小
    createCanvas(300, 300);
    // 背景色
    background(color(0xEA, 0x6B, 0x6B));
    // 字體色
    fill(color(0xFF, 0xFC, 0xFC));
    // 字大小
    textSize(50);
    textAlign(CENTER, CENTER);
}

var choice;

function draw() {
    // 每秒60次
    // 背景色
    background(color(0x2E, 0x21, 0x21));
    // text("1",mouseX,mouseY);
    text("Dinner1", 150, 50);
    text("Dinner2", 150, 150);
    text("Dinner3", 150, 250);
    // int choice=mouseX%3;
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
// 任意圓 x, y, w, h
}

function mousePressed() {
    // mouse按下時
    // 在0.00~2.99(不包括3.0)
    choice = int(random(3));
// 取出0,1,2
}

function initializeFields() {
    choice = -1;
}
