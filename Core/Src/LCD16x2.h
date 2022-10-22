#pragma once

// stolen from Arduino library
// does actually nothing

void LCD_Init() {                  // Initialize The LCD For 4-Bit Interface

}
void LCD_Clear() {                 // Clear The LCD Display

}
void LCD_SL() {                    // Shift The Entire Display To The Left

}
void LCD_SR() {                    // Shift The Entire Display To The Right

}
void LCD_CMD(unsigned char _) {      // Send Command To LCD

}
void LCD_DATA(unsigned char _) {     // Send 4-Bit Data To LCD

}
void LCD_Set_Cursor(unsigned char _, unsigned char __) {  // Set Cursor Position

}
void LCD_Write_Char(char _) {        // Write Character To LCD At Current Position

}
void LCD_Write_String(char* _) {     // Write A String To LCD

}
