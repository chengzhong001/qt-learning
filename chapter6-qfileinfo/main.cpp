#include <QCoreApplication>
#include <QFileInfo>
#include <QDateTime>
#include <QDir>
#include <QDirIterator>

int test1(int argc, char *argv[])
{
    if (argc != 2)
    {
        qWarning("请给出文件名称");
        return 1;
    }
    QString filename = argv[1];
    QFileInfo fileinfo{filename};
    QDateTime last_rea = fileinfo.lastRead();
    QDateTime last_mod = fileinfo.lastModified();
    qDebug() << "last read:" << last_rea.toString();
    qDebug() << "last modified:" << last_mod.toString();
    return 0;
}

void test2(){
    QDir dir{QDir::current()};
    dir.setFilter(QDir::Files | QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);
    qDebug() << QString("Filename").leftJustified(30).append("Bytes");
    QDirIterator it(dir);
    while(it.hasNext()){
        QFileInfo fileInfo = it.nextFileInfo();
        QString str = fileInfo.fileName().leftJustified(30);
        str.append(QString("%1").arg(fileInfo.size()));
        qDebug() << str;
    }


}

int main(int argc, char *argv[])
{
    //    QCoreApplication a(argc, argv);
    //    return a.exec();
    // test1(argc, argv);
    test2();
}
