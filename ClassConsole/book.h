#ifndef BOOK_H
#define BOOK_H


class Book
{
public:
    Book();
    ~Book();

public:
    //�޼ҵ�(����Լ�)
    void Move(int page);
    void Show(void); //void��������

protected:

private:
//    void setPercent();

    // �������
    int current_page_;

};

#endif // BOOK_H
