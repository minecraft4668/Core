#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <fstream>
#include <sys/ioctl.h>
using namespace std;

class 
{
    public:
        const string bg_black="\e[40m";             // 黑色 black
        const string bg_red="\e[41m";               // 红色 red
        const string bg_green="\e[42m";             // 绿色 green
        const string bg_yellow="\e[43m";            // 黄色 yellow
        const string bg_blue="\e[44m";              // 蓝色 blue
        const string bg_magenta="\e[45m";           // 紫色 magenta
        const string bg_cyan="\e[46m";              // 青色 cyan
        const string bg_white="\e[47m";             // 白色 white

        const string bg_bright_black="\e[100m";     // 稍亮的黑色 bright black
        const string bg_bright_red="\e[101m";       // 亮红色 bright red
        const string bg_bright_green="\e[102m";     // 浅绿色 bright green
        const string bg_bright_yellow="\e[103m";    // 亮黄色 bright yellow
        const string bg_bright_blue="\e[104m";      // 亮蓝色 bright blue
        const string bg_bright_magenta="\e[105m";   // 亮紫色 bright magenta
        const string bg_bright_cyan="\e[106m";      // 亮青色 bright cyan
        const string bg_bright_white="\e[107m";     // 亮白色 bright white

        // 前景色（文本色）  front color (text color)
        const string text_black="\x1B[30;1m";       // 黑色 black
        const string text_white="\x1B[37;1m";       // 白色 white
        const string text_yellow="\x1B[33;1m";      // 黄色 yellow
        const string text_green="\x1B[32;1m";       // 绿色 green
        const string text_cyan="\x1B[36;1m";        // 青色 cyan
        const string text_red="\x1B[31;1m";         // 红色 red
        const string text_blue="\x1B[34;1m";        // 蓝色 blue 
        const string text_magenta="\x1B[35;1m";     // 紫色 magenta

        // 字体样式  font style
        const string text_ul="\x1B[4m";             // 下划线 underline
        const string text_bold="\x1B[1m";           // 加粗   bold
        const string text_blink="\x1B[5m";          // 闪烁   blink
        const string text_opposite="\x1B[7m";       // 反转   opposite
        const string text_disapp="\x1B[8m";         // 消失   disappear

        // 清空当前层效果 clear current layer effect

        const string clear="\x1B[0m";
        
} __shclr;

class drawer_ 
{
    private:

        // 获取终端大小
        
        int wid, hei;

        struct element
        {
            
        };
        
    public:
    
        ~drawer_() {

            struct winsize w;
            wid = w.ws_col, hei = w.ws_row;

            if(wid <= 10 || hei <= 10) 
            {
                cerr << __shclr.text_red << "[Core/Drawer] Couldn't draw on this screen! Screen size is to small!" << __shclr.clear << '\n';
                return 1;
            }

            if()

        }
};