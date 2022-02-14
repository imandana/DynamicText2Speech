#include <iostream>

#include <sinsy.h>

int main()
{
    TextParser pars("Kitaa adaaalah cintaaaa");
    
    pars.ParseToMusicXML();
    
    GenerateVoice audio;
    audio.SaveToWav( pars.GetXml() );
    
    return 0;
}
