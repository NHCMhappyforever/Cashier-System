#include<map>
#include<iostream>
using namespace std;
map<string, string> enus = {
    {"mainMenu", R"(  ______                       __        __                     
 /      \                     /  |      /  |                    
/$$$$$$  |  ______    _______ $$ |____  $$/   ______    ______  
$$ |  $$/  /      \  /       |$$      \ /  | /      \  /      \ 
$$ |       $$$$$$  |/$$$$$$$/ $$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |
$$ |   __  /    $$ |$$      \ $$ |  $$ |$$ |$$    $$ |$$ |  $$/ 
$$ \__/  |/$$$$$$$ | $$$$$$  |$$ |  $$ |$$ |$$$$$$$$/ $$ |      
$$    $$/ $$    $$ |/     $$/ $$ |  $$ |$$ |$$       |$$ |      
 $$$$$$/   $$$$$$$/ $$$$$$$/  $$/   $$/ $$/  $$$$$$$/ $$/       
                                                                
                                                                
                                                                
                                 __                             
                                /  |                            
  _______  __    __   _______  _$$ |_     ______   _____  ____  
 /       |/  |  /  | /       |/ $$   |   /      \ /     \/    \ 
/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |
$$      \ $$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |
 $$$$$$  |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |
/     $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |
$$$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ 
          /  \__$$ |                                            
          $$    $$/                                             
           $$$$$$/                                              

-----------------------------------------------------------------
1 Settle
2 Manage
3 Language
4 About

0 Quit
-----------------------------------------------------------------)"}, 
    {"startPrompt", R"(-----------------------------------------------------------------
Welcome to Casheier System!

Please enter the admin's password (The default password is 12345678)
You have 3 times to enter the password
-----------------------------------------------------------------)"},
    {"error1", "\nWrong option, please try again\n" },
    {"error2", R"(-----------------------------------------------------------------
Invalid input, please try again
-----------------------------------------------------------------)"},
    {"error3", R"(-----------------------------------------------------------------
Invalid password, please try again
-----------------------------------------------------------------)"},
    {"error4", R"(-----------------------------------------------------------------
That name is duplicated, please try another
-----------------------------------------------------------------)"}, 
    {"maximum", R"(-----------------------------------------------------------------
You can no longer add items because the limit (1000) has been reached
-----------------------------------------------------------------)"},
    {"1prompt1", R"(-----------------------------------------------------------------
You want to:

1 Add item
2 Remove item

0 Complete
-----------------------------------------------------------------)"},
    {"1prompt11", R"(-----------------------------------------------------------------
Please enter the serial number of an item and press Enter to add an item
-----------------------------------------------------------------)" },  
    {"1prompt12", R"(-----------------------------------------------------------------
Please enter the serial number of an item and press Enter to delete an item
-----------------------------------------------------------------)" },
    {"noItem", R"(-----------------------------------------------------------------
There are currently no items in the cashier system. Please try adding some and try again
-----------------------------------------------------------------)"},
    {"total", "Total: "}, 
    {"tax", "Tax: "},
    {"subtotal", "Subtotal: "}, 
    {"tip", "Tip: "},
    {"1prompt2", R"(-----------------------------------------------------------------
Do you want to pay a tip?

Please enter the amount you want to tip
-----------------------------------------------------------------)"}, 
    {"1prompt3", R"(-----------------------------------------------------------------
Please press any key to complete payment for the above items
-----------------------------------------------------------------)"},
    {"1prompt4", R"(-----------------------------------------------------------------
Congratulations on completing the payment! Happy spending!
-----------------------------------------------------------------)"},
    {"2menu", R"( __       __                                                                                        __     
/  \     /  |                                                                                      /  |    
$$  \   /$$ |  ______   _______    ______    ______    ______   _____  ____    ______   _______   _$$ |_   
$$$  \ /$$$ | /      \ /       \  /      \  /      \  /      \ /     \/    \  /      \ /       \ / $$   |  
$$$$  /$$$$ | $$$$$$  |$$$$$$$  | $$$$$$  |/$$$$$$  |/$$$$$$  |$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$$$$$/   
$$ $$ $$/$$ | /    $$ |$$ |  $$ | /    $$ |$$ |  $$ |$$    $$ |$$ | $$ | $$ |$$    $$ |$$ |  $$ |  $$ | __ 
$$ |$$$/ $$ |/$$$$$$$ |$$ |  $$ |/$$$$$$$ |$$ \__$$ |$$$$$$$$/ $$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |  $$ |/  |
$$ | $/  $$ |$$    $$ |$$ |  $$ |$$    $$ |$$    $$ |$$       |$$ | $$ | $$ |$$       |$$ |  $$ |  $$  $$/ 
$$/      $$/  $$$$$$$/ $$/   $$/  $$$$$$$/  $$$$$$$ | $$$$$$$/ $$/  $$/  $$/  $$$$$$$/ $$/   $$/    $$$$/  
                                           /  \__$$ |                                                      
                                           $$    $$/                                                       
                                            $$$$$$/                                                        

-----------------------------------------------------------------
1 Add item
2 Delete item
3 Modify item
4 List item
5 Change password

0 Quit
-----------------------------------------------------------------)"},
    {"2prompt1", R"(-----------------------------------------------------------------
Please enter the admin's password (The default password is 12345678)
-----------------------------------------------------------------)"},
    {"21prompt1", R"(-----------------------------------------------------------------
Please enter the name of the item
-----------------------------------------------------------------)"},
    {"21prompt2", R"(-----------------------------------------------------------------
Please enter the price of the item
-----------------------------------------------------------------)"},
    {"22prompt1", R"(-----------------------------------------------------------------
Please enter the serial number of the item and press Enter to delete
-----------------------------------------------------------------)"},
    {"23menu", R"( __       __                                                                                        __     
/  \     /  |                                                                                      /  |    
$$  \   /$$ |  ______   _______    ______    ______    ______   _____  ____    ______   _______   _$$ |_   
$$$  \ /$$$ | /      \ /       \  /      \  /      \  /      \ /     \/    \  /      \ /       \ / $$   |  
$$$$  /$$$$ | $$$$$$  |$$$$$$$  | $$$$$$  |/$$$$$$  |/$$$$$$  |$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$$$$$/   
$$ $$ $$/$$ | /    $$ |$$ |  $$ | /    $$ |$$ |  $$ |$$    $$ |$$ | $$ | $$ |$$    $$ |$$ |  $$ |  $$ | __ 
$$ |$$$/ $$ |/$$$$$$$ |$$ |  $$ |/$$$$$$$ |$$ \__$$ |$$$$$$$$/ $$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |  $$ |/  |
$$ | $/  $$ |$$    $$ |$$ |  $$ |$$    $$ |$$    $$ |$$       |$$ | $$ | $$ |$$       |$$ |  $$ |  $$  $$/ 
$$/      $$/  $$$$$$$/ $$/   $$/  $$$$$$$/  $$$$$$$ | $$$$$$$/ $$/  $$/  $$/  $$$$$$$/ $$/   $$/    $$$$/  
                                           /  \__$$ |                                                      
                                           $$    $$/                                                       
                                            $$$$$$/                                                        

-----------------------------------------------------------------
1 Name
2 Price

0 Quit
-----------------------------------------------------------------)" }, 
    {"23prompt1", R"(-----------------------------------------------------------------
Please enter the serial number of the item and press Enter to modify
-----------------------------------------------------------------)" },    
    {"231prompt1", R"(-----------------------------------------------------------------
Please enter the new name of the item
-----------------------------------------------------------------)" }, 
    {"232prompt1", R"(-----------------------------------------------------------------
Please enter the new price of the item
-----------------------------------------------------------------)" },
    { "25prompt1", R"(-----------------------------------------------------------------
Please enter the current admin's password
-----------------------------------------------------------------)" },
    { "25prompt2", R"(-----------------------------------------------------------------
Please enter the new password
-----------------------------------------------------------------)" },
    { "25prompt3", R"(-----------------------------------------------------------------
Please enter the new password again to confirm
-----------------------------------------------------------------)" }, 
    {"3menu", R"(  ______                       __        __                     
 /      \                     /  |      /  |                    
/$$$$$$  |  ______    _______ $$ |____  $$/   ______    ______  
$$ |  $$/  /      \  /       |$$      \ /  | /      \  /      \ 
$$ |       $$$$$$  |/$$$$$$$/ $$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |
$$ |   __  /    $$ |$$      \ $$ |  $$ |$$ |$$    $$ |$$ |  $$/ 
$$ \__/  |/$$$$$$$ | $$$$$$  |$$ |  $$ |$$ |$$$$$$$$/ $$ |      
$$    $$/ $$    $$ |/     $$/ $$ |  $$ |$$ |$$       |$$ |      
 $$$$$$/   $$$$$$$/ $$$$$$$/  $$/   $$/ $$/  $$$$$$$/ $$/       
                                                                
                                                                
                                                                
                                 __                             
                                /  |                            
  _______  __    __   _______  _$$ |_     ______   _____  ____  
 /       |/  |  /  | /       |/ $$   |   /      \ /     \/    \ 
/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |
$$      \ $$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |
 $$$$$$  |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |
/     $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |
$$$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ 
          /  \__$$ |                                            
          $$    $$/                                             
           $$$$$$/                                              

Choose a language
-----------------------------------------------------------------
1 中文（简体）
2 English (United States)

0 Quit
-----------------------------------------------------------------)" } };
map<string, string> zhcn = { 
    {"mainMenu", R"(  ______                       __        __                     
 /      \                     /  |      /  |                    
/$$$$$$  |  ______    _______ $$ |____  $$/   ______    ______  
$$ |  $$/  /      \  /       |$$      \ /  | /      \  /      \ 
$$ |       $$$$$$  |/$$$$$$$/ $$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |
$$ |   __  /    $$ |$$      \ $$ |  $$ |$$ |$$    $$ |$$ |  $$/ 
$$ \__/  |/$$$$$$$ | $$$$$$  |$$ |  $$ |$$ |$$$$$$$$/ $$ |      
$$    $$/ $$    $$ |/     $$/ $$ |  $$ |$$ |$$       |$$ |      
 $$$$$$/   $$$$$$$/ $$$$$$$/  $$/   $$/ $$/  $$$$$$$/ $$/       
                                                                
                                                                
                                                                
                                 __                             
                                /  |                            
  _______  __    __   _______  _$$ |_     ______   _____  ____  
 /       |/  |  /  | /       |/ $$   |   /      \ /     \/    \ 
/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |
$$      \ $$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |
 $$$$$$  |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |
/     $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |
$$$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ 
          /  \__$$ |                                            
          $$    $$/                                             
           $$$$$$/                                              

-----------------------------------------------------------------
1 结算
2 管理
3 语言
4 关于

0 退出
-----------------------------------------------------------------)"}, 
    {"startPrompt",  R"(-----------------------------------------------------------------
欢迎来到收银系统

请输入管理员密码（初始密码为12345678）
你有三次机会输入密码
-----------------------------------------------------------------)"},
    {"error1", R"(-----------------------------------------------------------------
错误的选项，请重试
-----------------------------------------------------------------)" },
    {"error2", R"(-----------------------------------------------------------------
无效的输入，请重试
-----------------------------------------------------------------)"}, 
    {"error3", R"(-----------------------------------------------------------------
无效的密码，请重试
-----------------------------------------------------------------)"}, 
    {"error4", R"(-----------------------------------------------------------------
重复的名字，请尝试另一个
-----------------------------------------------------------------)"}, 
    {"maximum", R"(-----------------------------------------------------------------
不能再继续添加物品了，因为已经达到了上限（1000）
-----------------------------------------------------------------)"},
    {"1prompt1", R"(-----------------------------------------------------------------
你要：

1 添加物品
2 删除物品

0 完成
-----------------------------------------------------------------)"}, 
    {"1prompt11", R"(-----------------------------------------------------------------
请输入一个物品的序号，然后按下回车以添加物品
-----------------------------------------------------------------)" },
    {"1prompt12", R"(-----------------------------------------------------------------
请输入一个物品的序号，然后按下回车以删除物品
-----------------------------------------------------------------)" },
    {"noItem", R"(-----------------------------------------------------------------
收银系统中暂时没有物品，请尝试添加后再试
-----------------------------------------------------------------)"},
    {"total", "总计: "}, 
    {"tax", "税："}, 
    {"subtotal", "小计："}, 
    {"tip", "小费："},
    {"1prompt2", R"(-----------------------------------------------------------------
您是否需要支付小费呢？

请输入要支付小费的金额
-----------------------------------------------------------------)"}, 
    {"1prompt3", R"(-----------------------------------------------------------------
请按下任意键以完成以上物品的支付
-----------------------------------------------------------------)"},
    {"1prompt4", R"(-----------------------------------------------------------------
恭喜你完成了支付！消费愉快！
-----------------------------------------------------------------)"}, 
    {"2menu", R"( __       __                                                                                        __     
/  \     /  |                                                                                      /  |    
$$  \   /$$ |  ______   _______    ______    ______    ______   _____  ____    ______   _______   _$$ |_   
$$$  \ /$$$ | /      \ /       \  /      \  /      \  /      \ /     \/    \  /      \ /       \ / $$   |  
$$$$  /$$$$ | $$$$$$  |$$$$$$$  | $$$$$$  |/$$$$$$  |/$$$$$$  |$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$$$$$/   
$$ $$ $$/$$ | /    $$ |$$ |  $$ | /    $$ |$$ |  $$ |$$    $$ |$$ | $$ | $$ |$$    $$ |$$ |  $$ |  $$ | __ 
$$ |$$$/ $$ |/$$$$$$$ |$$ |  $$ |/$$$$$$$ |$$ \__$$ |$$$$$$$$/ $$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |  $$ |/  |
$$ | $/  $$ |$$    $$ |$$ |  $$ |$$    $$ |$$    $$ |$$       |$$ | $$ | $$ |$$       |$$ |  $$ |  $$  $$/ 
$$/      $$/  $$$$$$$/ $$/   $$/  $$$$$$$/  $$$$$$$ | $$$$$$$/ $$/  $$/  $$/  $$$$$$$/ $$/   $$/    $$$$/  
                                           /  \__$$ |                                                      
                                           $$    $$/                                                       
                                            $$$$$$/                                                        

-----------------------------------------------------------------
1 添加物品
2 删除物品
3 修改信息
4 列出物品
5 修改密码

0 退出
-----------------------------------------------------------------)"}, 
    {"2prompt1", R"(-----------------------------------------------------------------
请输入管理员密码（初始密码为12345678）
-----------------------------------------------------------------)"}, 
    {"21prompt1", R"(-----------------------------------------------------------------
请输入物品的名字
-----------------------------------------------------------------)"}, 
    {"21prompt2", R"(-----------------------------------------------------------------
请输入物品的价格
-----------------------------------------------------------------)"}, 
    {"22prompt1", R"(-----------------------------------------------------------------
请输入物品的序号，然后按下回车以删除
-----------------------------------------------------------------)"}, 
    {"23menu", R"( __       __                                                                                        __     
/  \     /  |                                                                                      /  |    
$$  \   /$$ |  ______   _______    ______    ______    ______   _____  ____    ______   _______   _$$ |_   
$$$  \ /$$$ | /      \ /       \  /      \  /      \  /      \ /     \/    \  /      \ /       \ / $$   |  
$$$$  /$$$$ | $$$$$$  |$$$$$$$  | $$$$$$  |/$$$$$$  |/$$$$$$  |$$$$$$ $$$$  |/$$$$$$  |$$$$$$$  |$$$$$$/   
$$ $$ $$/$$ | /    $$ |$$ |  $$ | /    $$ |$$ |  $$ |$$    $$ |$$ | $$ | $$ |$$    $$ |$$ |  $$ |  $$ | __ 
$$ |$$$/ $$ |/$$$$$$$ |$$ |  $$ |/$$$$$$$ |$$ \__$$ |$$$$$$$$/ $$ | $$ | $$ |$$$$$$$$/ $$ |  $$ |  $$ |/  |
$$ | $/  $$ |$$    $$ |$$ |  $$ |$$    $$ |$$    $$ |$$       |$$ | $$ | $$ |$$       |$$ |  $$ |  $$  $$/ 
$$/      $$/  $$$$$$$/ $$/   $$/  $$$$$$$/  $$$$$$$ | $$$$$$$/ $$/  $$/  $$/  $$$$$$$/ $$/   $$/    $$$$/  
                                           /  \__$$ |                                                      
                                           $$    $$/                                                       
                                            $$$$$$/                                                        

-----------------------------------------------------------------
1 名字
2 价格

0 退出
-----------------------------------------------------------------)" }, 
    {"23prompt1", R"(-----------------------------------------------------------------
请输入物品的序号，然后按下回车以修改
-----------------------------------------------------------------)" }, 
    {"231prompt1", R"(-----------------------------------------------------------------
请输入物品的新名字
-----------------------------------------------------------------)" },
    {"232prompt1", R"(-----------------------------------------------------------------
请输入物品的新价格
-----------------------------------------------------------------)" }, 
    {"25prompt1", R"(-----------------------------------------------------------------
请输入当前管理员密码
-----------------------------------------------------------------)" },
    { "25prompt2", R"(-----------------------------------------------------------------
请输入新的密码
-----------------------------------------------------------------)" },
    { "25prompt3", R"(-----------------------------------------------------------------
请再次输入新的密码以确认
-----------------------------------------------------------------)" }, 
    {"3menu", R"(  ______                       __        __                     
 /      \                     /  |      /  |                    
/$$$$$$  |  ______    _______ $$ |____  $$/   ______    ______  
$$ |  $$/  /      \  /       |$$      \ /  | /      \  /      \ 
$$ |       $$$$$$  |/$$$$$$$/ $$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |
$$ |   __  /    $$ |$$      \ $$ |  $$ |$$ |$$    $$ |$$ |  $$/ 
$$ \__/  |/$$$$$$$ | $$$$$$  |$$ |  $$ |$$ |$$$$$$$$/ $$ |      
$$    $$/ $$    $$ |/     $$/ $$ |  $$ |$$ |$$       |$$ |      
 $$$$$$/   $$$$$$$/ $$$$$$$/  $$/   $$/ $$/  $$$$$$$/ $$/       
                                                                
                                                                
                                                                
                                 __                             
                                /  |                            
  _______  __    __   _______  _$$ |_     ______   _____  ____  
 /       |/  |  /  | /       |/ $$   |   /      \ /     \/    \ 
/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |
$$      \ $$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |
 $$$$$$  |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |
/     $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |
$$$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ 
          /  \__$$ |                                            
          $$    $$/                                             
           $$$$$$/                                              

选择一个语言
-----------------------------------------------------------------
1 中文（简体）
2 English (United States)

0 退出
-----------------------------------------------------------------)" } };
