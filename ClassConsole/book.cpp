#include "book.h"

#include <iostream>

Book::Book()
{

}

Book::~Book()
{

}

void Book::Move(int page)
{
    std::cout << "���� �������� �Է��ϼ���";
    std::cin >> page;
    this->current_page_ = page; //this ��������
}

void Book::Show()
{
    std::cout << "������ �����ֱ�" << this->current_page_ << std::endl;
}
