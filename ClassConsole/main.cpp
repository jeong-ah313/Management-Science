#include <QCoreApplication>

#include <QtDebug>
#include <iostream>

#include "book.h"
#include "university.h"

int main(int argc, char *argv[])
{
//    Book book;
//    book.Move(2);
//    book.Show();

//    Book book2;
//    book2 = book;

    // universuty
    University uni;
    uni.setFullName("�������б�", "��������", "������а�");
    uni.setName("������б�");

    std::cout << uni.getName().toStdString() << std::endl;

    qDebug() << uni.getName();

    return 0;
}
