#include "util.h"


void Util::writeFile(string directory, string fileName, string content)
{
    ofstream file(directory + "/" + fileName);
    if(file.is_open()){
        file << content;
        file.close();
    }
}

string Util::readFile(string directory, string fileName)
{
    string result = "";
    string line;
    ifstream file(directory + "/" + fileName);
    if(file.is_open()){
        while(getline (file,line)){
            result.append(line);
        }
        file.close();
    }
    return result;
}

list<string> Util::readFileNames(string directory, string extension)
{
    list<string> result;

    HANDLE hFind;
    WIN32_FIND_DATA data;

    directory += "/*.*";
    std::wstring stemp = std::wstring(directory.begin(), directory.end());
    hFind = FindFirstFile(stemp.c_str(), &data);

   printf(directory.c_str());
   if (hFind != INVALID_HANDLE_VALUE) {
       do {
               char ch[260];
               char DefChar = ' ';
               WideCharToMultiByte(CP_ACP,0,data.cFileName,-1, ch,260,&DefChar, NULL);
               string fileName(ch);
               if(fileName != "." && fileName != "..") {
                   if(!extension.empty()) {
                       string ext = fileName.substr(fileName.find_last_of(".") + 1);
                       if(ext == extension) {
                           result.push_back(fileName);
                       }
                   } else {
                       result.push_back(fileName);
                   }
               }
       } while (FindNextFile(hFind, &data));
       FindClose(hFind);
   }

    //result.push_back("hallo");
    //result.push_back("welt");
    //result.push_back("du");
    return result;

}

QStringList Util::QReadFileNames(QString directory, QString extension)
{
    QStringList extFilter("*.pcd");

    if(!extension.isEmpty()){
        //extFilter.append("*." + extension);
    }

    QDir dic(directory);
    return dic.entryList(extFilter);

}

int Util::randInt(int low, int high)
{
    return qrand() % ((high + 1) - low) + low;
}



