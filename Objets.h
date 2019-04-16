#pragma once
#include <QObject>

class Objets : public QObject
{
	Q_OBJECT
    Q_PROPERTY(qint32 temp READ getTemp WRITE setTemp NOTIFY tempChanged)
    
    


signals:
	void tempChanged();

public slots:
    void refresh();
    
    
    
    
//methodes de la classe    
public:
    
    //constructor
	Objets(); 
    
    //destructor
    ~Objets();      
    
    //getter
	qint32 getTemp() const;
    
    //setter
    void setTemp(qint32 newValue);
   
    
   // void plusUn();
  
    
    
    
//attributs de la classe
private:
	qint32 m_temp  = 20;

    
        
};
