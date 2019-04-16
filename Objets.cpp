#include "Objets.h"
#include <QDebug>


void Objets::refresh() {
	qDebug() << "Called the C++ slot";
}




//constructor
Objets::Objets() {
}
//deestrucctor
Objets::~Objets(){
}





//getter
qint32  Objets::getTemp() const {		
	return m_temp;
}



//setter
void Objets::setTemp(qint32 newValue) {
    qDebug() << "toto " << newValue;
    m_temp = 50;//newValue;
    //emit tempChanged();
    qDebug() << getTemp();
    
    m_temp = newValue;
    //emit tempChanged();
}



void plusUn() {
    
}
