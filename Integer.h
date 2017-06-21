#ifndef INTEGER_H
#define INTEGER_H


class Integer {

 private:
    int entero;
 public:
    Integer(int);
    Integer();
    int getValue();
    void setValue(int);
    Integer* operator+(Integer* integer){
      int valor,total;
      valor=integer->getValue();
      total=entero+valor;
      Integer* nuevo=new Integer();
      nuevo->setValue(total);

      return nuevo;

    }
    Integer* operator-(Integer* integer){
      int valor,total;
      valor=integer->getValue();
      total=entero-valor;
      Integer* nuevo=new Integer();
      nuevo->setValue(total);

      return nuevo;
    }
    

};

#endif
