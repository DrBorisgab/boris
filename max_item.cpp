#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main() {
    
    
    std::string head ("<html>\n<svg wight=\"1500\" height=\"1500\">");
    std::fstream fs;
    fs.open("figure.html",std::fstream::out);
    fs << head << std::endl;

    
    std::string beegin("<ellipse rx=\"100\" ry=\"40%\" cx=\"360%\"cy=\"100%\"/>");
    fs << beegin << std::endl;
                     
    std::string line1("<line x1=\"360\" y1=\"120\" x2=\"360\" y2=\"200\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line1 << std::endl;
    
    std::string input("<polygon points=\"320,200 460,200 400,280 260,280 \"\n fill=\"none\"\n stroke=\"black\"/>");
    fs << input << std::endl;
    
    std::string line2("<line x1=\"360\" y1=\"280\" x2=\"360\" y2=\"340\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line2 << std::endl;
    
    std::string action1("<polygon points=\"260,320 460,320 460,420 260,420\"\n fill=\"none\"\n stroke=\"black\"/>");
    fs << action1 << std::endl;
                     
    std::string line3("<line x1=\"360\" y1=\"420\" x2=\"360\" y2=\"480\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line3 << std::endl;
                    
    std::string condition("<polygon points = \"360,480 460,540 360,600 540\"\n fill=\"none\"\n stroke=\"black\"/>");
    fs << condition << std::endl;
    
    std::string line4("<line x1=\"360\" y1=\"600\" x2=\"360\" y2=\"660\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line4 << std::endl;
    
    std::string action2("<polygon points=\"260,660 460,660 460,740 260,740\"\n fill=\"none\"\n stroke=\"black\"/>");
    fs << action2 << std::endl;
                     
    std::string line5("<line x1=\"360\" y1=\"740\" x2=\"360\" y2=\"800\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line5 << std::endl;
                     
    std::string line6("<line x1=\"360\" y1=\"800\" x2=\"160\" y2=\"800\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line6 << std::endl;
                     
    std::string line7("<line x1=\"160\" y1=\"800\" x2=\"160\" y2=\"460\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line7 << std::endl;
                     
    std::string line8("<line x1=\"160\" y1=\"460\" x2=\"360\" y2=\"460\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line8 << std::endl;
                     
    std::string line9("<line x1=\"460\" y1=\"540\" x2=\"540\" y2=\"540\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line9 << std::endl;
                    
    std::string line10("<line x1=\"540\" y1=\"540\" x2=\"540\" y2=\"860\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line10 << std::endl;
    
    std::string line11("<line x1=\"540\" y1=\"860\" x2=\"360\" y2=\"860\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line11 << std::endl;
                     
    std::string line12("<line x1=\"360\" y1=\"860\" x2=\"360\" y2=\"920\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line12 << std::endl;
    
    std::string output("<polygon points=\"320,920 460,920 400,1000 260,1000 \"\n fill=\"none\"\n stroke=\"black\"/>");
    fs << output << std::endl;
                     
    std::string line13("<line x1=\"360\" y1=\"1000\" x2=\"360\" y2=\"1060\" stroke=\"black\"stroke-width=\"5\" />");
    fs << line13 << std::endl;
                     
    std::string eend("<ellipse rx=\"100\" ry=\"40%\" cx=\"360%\"cy=\"1100%\"/>");
    fs << eend << std::endl;
                     
                     
    std::string tail ("<svg/>\n<html/>");
    fs << tail << std::endl;
    fs.close();
    system("firefox figure.html");
    
    return 0;

}



                     
        
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
