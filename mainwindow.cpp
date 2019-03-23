#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_num_1_clicked()
{
   this->ui->numberInput->moveCursor(QTextCursor::End);

   this->ui->numberInput->insertPlainText("1");
}

void MainWindow::on_num_2_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("2");
}

void MainWindow::on_num_3_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("3");
}

void MainWindow::on_num_4_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("4");
}

void MainWindow::on_num_5_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("5");
}

void MainWindow::on_num_6_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("6");
}

void MainWindow::on_num_7_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("7");
}

void MainWindow::on_num_8_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("8");
}

void MainWindow::on_num_9_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("9");
}

void MainWindow::on_num_10_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("0");
}

void MainWindow::on_equal_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("=");

    QString text;
    text=this->ui->numberInput->toPlainText();
    this->calculate(text.toStdString());
}

void MainWindow::on_add_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("+");
}

void MainWindow::on_mult_2_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("-");
}

void MainWindow::on_mult_clicked()
{
    this->ui->numberInput->moveCursor(QTextCursor::End);

    this->ui->numberInput->insertPlainText("*");
}

void MainWindow::calculate(string text){
    cout<<text<<endl;
    size_t pos = 0;
    size_t start = 0;
    string token;
    int count=0;
    while(pos <= text.length()){
        token = text.substr(pos,pos+1);
        switch(token[0]){

        case '+':
            this->lists_number[count]=stoi(text.substr(start,text.find("+")));
            this->operators[count]='+';
            count ++ ;
            start=text.substr(start,text.find("+")).length();
            cout<<start<<"     "<<this->lists_number[count-1]<<endl;
            break;

         case '-':
            this->lists_number[count]=stoi(text.substr(start,text.find("-")));
            this->operators[count]='-';
            count ++ ;
            start=text.substr(start,text.find("-")).length();
            cout<<start<<"     "<<this->lists_number[count-1]<<endl;
            break;
        case '=':
            this->lists_number[count]=stoi(text.substr(start,text.find("-")));
            this->operators[count]='=';
            count ++ ;
            start=text.substr(start,text.find("=")).length();
            cout<<start<<"     "<<this->lists_number[count-1]<<endl;
            break;
        }
        pos ++;

    }
    count =0;
    int result=0;
    while(count <= 9){
        switch (operators[count]) {
        case '+':
            lists_number[count+1]=lists_number[count]+lists_number[count+1];
            break;
        case '-':
            lists_number[count+1]=lists_number[count+1]+lists_number[count];
            break;
        case '=':
            cout<<"this one is : " <<lists_number[count]<<endl;
            break;
        }
        count ++;
    }
    count=0;
    /*
    while ((pos = text.find(delimiter)) != string::npos) {
        token = text.substr(0, pos);
        cout<< "pos is : "<<pos << endl;
        cout << token << endl;
        text.erase(0, pos + delimiter.length());
    }
    */

    cout << text << endl;
}
