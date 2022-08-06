#include <QCoreApplication>
#include <QFile>

int test1(int argc, char *argv[])
{
    if (argc != 2)
    {
        qWarning("请给出文件名称!!!");
        return 1;
    }
    QString filename = argv[1];
    qDebug() << filename;
    QFile f(filename);
    if (!f.exists())
        qWarning("没有找到文件!!!");

    f.fileName();
    return 0;
}
int test2()
{
    QFile f("words.txt");
    if (!f.open(QIODevice::ReadOnly))
    {
        qWarning("can not open for reading");
        return 1;
    }

    QTextStream in(&f);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        qDebug() << line;
    }
    return 0;
}



int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    // return a.exec();
    // test1(argc, argv);
    test2();

}
