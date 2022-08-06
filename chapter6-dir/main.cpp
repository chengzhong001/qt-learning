#include <QCoreApplication>
#include <QDir>

void test1()
{
    QDir dir;
    dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    dir.setSorting(QDir::Size | QDir::Reversed);

    QFileInfoList list = dir.entryInfoList();
    qDebug() << " Bytes Filename";

    for (auto &fileinfo : list)
    {
        qDebug() << QString("%1 %2").arg(fileinfo.size(), 10).arg(fileinfo.fileName());
    }
}

void test2(){
    QDir dir;
    if(dir.mkdir("mydir"))
        qDebug() << "my dir successfully created";
    
    dir.mkdir("mydir2");
    if(dir.exists("mydir2"))
        dir.rename("mydir2", "newdir");
    dir.mkpath("tmp/newdir");
}

int main(int argc, char *argv[])
{
    //    QCoreApplication a(argc, argv);
    //    return a.exec();
    test2();
}
