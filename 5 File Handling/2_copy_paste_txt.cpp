#include <iostream>
#include <fstream>

using namespace std;

class CopyPaste
{
private:
    string src;
    string dst;

public:
    void getFilenames()
    {
        cout << "Enter source file name: ";
        cin >> src;
        cout << "Enter destination file name: ";
        cin >> dst;
    }

    void copyContents()
    {
        fstream srcFile(src, ios::in);
        fstream dstFile(dst, ios::out);

        if (!srcFile)
        {
            cerr << "Error opening source file." << endl;
            return;
        }

        if (!dstFile)
        {
            cerr << "Error opening destination file." << endl;
            return;
        }

        char ch;
        srcFile >> resetiosflags(ios::skipws);
        while (srcFile >> ch)
        {
            dstFile << ch;
        }

        srcFile.close();
        dstFile.close();
        cout << "File copied successfully." << endl;
    }
};

int main()
{
    CopyPaste cp;
    cp.getFilenames();
    cp.copyContents();
    return 0;
}