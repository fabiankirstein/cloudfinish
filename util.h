#ifndef UTIL_H
#define UTIL_H

#endif // UTIL_H

#include <string>
#include <iostream>
#include <fstream>
#include <list>

#include <windows.h>

#include <QStringList>
#include <QDir>

using namespace std;

class Util {

public:
    static void writeFile(string directory, string fileName, string content);
    static string readFile(string directory, string fileName);
    static list<string> readFileNames(string directory, string extension);
    static QStringList QReadFileNames(QString directory, QString extension);
};
