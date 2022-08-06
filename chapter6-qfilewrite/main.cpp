#include <QCoreApplication>
#include <QFile>

void test1()
{
    QTextStream out(stdout);                   //创建一个标准输出的对象
    out.setEncoding(QStringConverter::System); //设置系统相同的编码方式
    QString filename = "names.txt";
    QFile f(filename);
    if (f.open(QIODevice::WriteOnly))
    {
        QTextStream out(&f);
        out << "张三" << Qt::endl;
        out << "李四" << Qt::endl;
        out << "王五" << Qt::endl;
    }
    else
    {
        qWarning("Could not open file");
    }
}

int test2(int argc, char *argv[])
{
    QTextStream out{stdout};
    if(argc!=3){
        qWarning("Usage: copyfile source destionation");
        return 1;
    }
    QString src = argv[1];
    if(!QFile{src}.exists()){
        qWarning("The source");
        return 1;
    }
    QString dest(argv[2]);
    QFile::copy(src, dest);
    return 0;
}

int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);

    // return a.exec();
    test2(argc, argv);
}
