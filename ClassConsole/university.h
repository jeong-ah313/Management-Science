#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <QString> //string

//friend class
class University
{
public:
    University();
    University(const QString& name, const QString& college, const QString& _class);

public:
    // 메소드(멤버함수)
    void setFullName(const QString& name, const QString& college, const QString& _class);

    // getter, setter
    const QString& getName(void) const;
    const QString& getCollege(void) const;
    const QString& getClass(void) const;

    void setName(const QString& name);
    void setCollege(const QString& college);
    void setClass(const QString& _class);

protected: //상속해줄거
    QString m_name;
    QString m_college;
    QString m_class;

//    QString name = "";

private:
    // 멤버변수




};

#endif // UNIVERSITY_H
