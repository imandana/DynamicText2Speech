#include <string>

class TextParser
{
    public:
    TextParser( std::string& input)
    {
        raw = input;
    }
    ~TextParser(){}
    
    std::string raw;
    std::string xmlData;
    
    void ParseToMusicXML()
    {
        
    }
    
    std::string& GetXml()
    {
        return xmlData;
    }
}
