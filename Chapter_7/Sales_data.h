// #ifndef SALES_DATA_H
// #define SALES_DATA_H
class Sales_data
{
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
friend std::istream &read(std::istream  &is, Sales_data &item);
friend std::ostream &print(std::ostream &os, const Sales_data &item);
private:    //数据成员
    std::string bookNo;         //书籍编号
    unsigned units_sold = 0;    //卖出数量
    double sellingPrice = 0.0;  //标价
    double salePrice = 0.0;     //实际售价
    double discount = 0.0;      //折扣
public:     //构造函数
    Sales_data() = default;
    Sales_data(const std::string &book): bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep)
    {
        bookNo = book;
        units_sold = num;
        sellingPrice = sellp;
        salePrice = salep;
        if (sellingPrice != 0)
            discount = salePrice / sellingPrice;
    }
    Sales_data(std::string &is) { is >> *this; }
public:     //成员函数(接口)
    string isbn() const {return bookNp;}
    Sales_data& combine( const Sales_data& rhs )
    {
        units_sold += rhs.units_sold;
        salePrice = (rhs.units_sold * rhs.salePrice + units_sold *
    salePrice) / (rhs.units_sold + units_sold);
        if(sellingPrice != 0)
            discount = salePrice / sellingPrice;
        return *this;
    }
};
// #endif
