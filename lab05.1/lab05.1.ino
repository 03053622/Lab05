#include <Keypad.h>
const byte ROWS = 4; // 4 Rows
const byte COLS = 4; // 4 Columns
// 定義 Keypad 的按鍵
char keys[ROWS][COLS] = {
{'7', '8', '9', 'C'},
{'4', '5', '6', 'D'},
{'1', '2', '3', 'E'},
{'0', 'A', 'B', 'F'}};
// 定義 Keypad 連到 Arduino 的接腳
byte rowPins[ROWS] = {10,11,12,13};
// 連到 Keypad 的 4 個 Rows
byte colPins[COLS] = {6,7,8,9};
// 連到 Keypad 的 4 個 Columns
// 建立 Keypad 物件
Keypad keypad = Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );
void setup(){
Serial.begin(9600);
}
void loop(){
char key = keypad.getKey(); // 讀取 Keypad
if (key != NO_KEY){
Serial.println(key);
}
}
