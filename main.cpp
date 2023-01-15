#include <iostream>
#include <discordpp/bot.h>

int main()
{
    discordpp::bot bot("TOKEN");
  
    bot.on_message([](discordpp::message msg)
    {
        std::cout << msg.content << std::endl;
        if (msg.content.find("!ping") == 0)
        {
            msg.channel.send_message("Pong!");
        }
    });
  
    bot.connect();
  
    while (true)
    {
        bot.handle_events();
    }

    return 0;
}
