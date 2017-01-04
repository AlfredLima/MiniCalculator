#include "calculator.h"

Calculator::Calculator()
{
     operators.insert( '*' , new Multiplication() );
     operators.insert( '+' , new Sum() );
     operators.insert( '-' , new Subtraction() );
     operators.insert( '/' , new Division() );

     for( auto p : operators )
     {
          qDebug() << " " << p->execute(3,3) << "\n";
     }

}

QString Calculator::getResult( QString line )
{
    QVector<double> numbers;
    QVector<int> indexs;
    std::priority_queue< std::pair<int,int> > pq;
    QVector<QChar> symbols;
    QString number = "";
    bool valid = true;
    double value;

    while( line.size() && valid )
    {
        if( line.at(0).isSpace() )
        {
            value = number.toDouble(&valid);
            if( !valid ) continue;
            numbers.push_back(value);
            number = "";
            if( line.at(1) == '+' || line.at(1) == '-' )
            {
                pq.push( std::make_pair( 1 , - (int)symbols.size() ) );
            }
            else
            {
                pq.push( std::make_pair( 2 , - (int)symbols.size() ) );
            }
            symbols.append( line.at(1) );
            line.remove(0,3);
        }
        else
        {
            number.append( line.at(0) );
            line.remove(0,1);
        }
    }

    if( !valid )
    {
        line = "Erro!";
        return line;

    }
    else
    {
        value = number.toDouble(&valid);
        if( !valid )
        {
            line = "Erro!";
            return line;

        }
        numbers.push_back( value );
    }

    if( symbols.size() + 1 != numbers.size() )
    {
        if( !valid )
        {
            line = "Erro!";
            return line;

        }
    }

    for( int i = 0 ; i < numbers.size() ; ++i )
        indexs.push_back(i);

    while( numbers.size() > 1 && valid )
    {
        std::pair<int,int> operator_now = pq.top(); pq.pop();
        int idx = -operator_now.second;

        if( symbols.at( idx ) == '/' && numbers.at( indexs.at( idx+1 ) ) == 0 )
        {
            line = "Erro!";
            return line;
            valid = false;

        }
        else
        {
qDebug() << "Idx = " << idx << " " << indexs.at(idx) << " Values: " << numbers[ indexs.at(idx) ] << " " << numbers[ indexs.at(idx+1) ] << " " << symbols[idx] << "\n";
            numbers[ indexs.at(idx) ] = operators[symbols.at(idx)]->execute( numbers[ indexs.at(idx) ] , numbers[ indexs.at(idx+1) ] );
/*
 *          if( symbols.at(idx) == '+' )
            {
                numbers[ indexs.at(idx) ] = numbers[ indexs.at(idx) ] + numbers[ indexs.at(idx+1) ];
            }
            else if( symbols.at(idx) == '-' )
            {
                numbers[ indexs.at(idx) ] = numbers[ indexs.at(idx) ] - numbers[ indexs.at(idx+1) ];
            }
            else if( symbols.at(idx) == '*' )
            {
                numbers[ indexs.at(idx) ] = numbers[ indexs.at(idx) ] * numbers[ indexs.at(idx+1) ];
            }
            else
            {
                numbers[ indexs.at(idx) ] = numbers[ indexs.at(idx) ] / numbers[ indexs.at(idx+1) ];
            }
*/
            numbers.removeAt( indexs.at(idx+1) );
            for( int i = idx+1 ; i < indexs.size() ; ++i )
                --indexs[i];
        }
    }

    line = QString::number(numbers[0]);
    return line;
}
