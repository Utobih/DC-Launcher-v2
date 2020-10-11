#include <iostream>
#include "include/getFolder.h"
#include "include/removeFile.h"

using namespace std;

int main(){
    string folder = currentFolder();
    string file = (folder+"/UNREAL3/BINARIES/WIN32/LAUNCHMEFIRST.EXE");
    system("start LaunchPad.exe");
    int fileTwo = 0;

    removeFileFunc(file);
    cout << "Waiting files.." << endl;

    while (fileTwo == 0){
        if(removeFileFunc(file) == 1){
            cout << "File found. Finish. Play game now :D" << "\n" << endl;
            system("pause");
            fileTwo = 1;
        }
    }
}
