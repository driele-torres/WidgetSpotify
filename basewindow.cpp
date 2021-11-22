#include "basewindow.h"
#include "ui_basewindow.h"
#include "lib_requests.h"

#include <QDebug>

BaseWindow::BaseWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BaseWindow)
{
    ui->setupUi(this);

    this->_lasterm ="";
    this->_limit  = 20;
    this->_offset = 0;

    ui->twPlaylists->clear();
    ui->lePesquisa->setFocus();

    connect(ui->lePesquisa, &QLineEdit::textEdited    , this, &BaseWindow::searchResultsBy );
//    connect(ui->lePesquisa, &QLineEdit::returnPressed , this, &BaseWindow::searchResultsBy );
}

BaseWindow::~BaseWindow()
{
    delete ui;
}

void BaseWindow::searchResultsBy(const QString &term)
{
    if (_lasterm.compare(term.toLower().simplified(), Qt::CaseInsensitive) !=0 ){
        _limit = 0;
        _lasterm = term.toLower().simplified();
    }

    auto dados = lib::Requests::instance().search(this->_lasterm, this->_limit, this->_offset);
    qDebug() << dados;
//    return QVariantMap();
}

void BaseWindow::mountTablePlaylist()
{
//this->_lasterm
//    lib::Requests::instance().search(term, _limit, _offset);



//    disconnect(ui->tWPlaylists->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(clicouNoHeaderDaTableCadastroMultiplo(int)));
//    disconnect(ui->twEmpresas, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChangeTablesCadastroMultiplo(QTableWidgetItem*)));

    //ui->twEmpresas->clear();
    //ui->twEmpresas->removeRows();

    //QStringList listaCabecalho;
    //listaCabecalho << " " << "Código" << "Descrição";

    //ui->twEmpresas->setColumnCount(QUANTIDADE_COLUNAS_TABELAS);
    //ui->twEmpresas->setHorizontalHeaderLabels(listaCabecalho);

    //DTableWidgetItem* item;

    //for (int row = 0; row < empresas.size(); row++)
    //{
    //    ui->twEmpresas->insertRow(row);

    //    item = new DTableWidgetItem;
    //    item->setCheckState(Qt::Unchecked);
    //    gm::itemutil::setObject<Empresa>(item, empresas.at(row));
    //    ui->twEmpresas->setItem(row, COLUNA_TABELA_CHECK, item);

    //    item = new DTableWidgetItem;
    //    item->setText(QString::number(empresas.at(row)->id()));
    //    ui->twEmpresas->setItem(row, COLUNA_TABELA_CODIGO, item);
    //    gm::itemutil::setObject<Empresa>(item, empresas.at(row));

    //    item = new DTableWidgetItem;
    //    item->setText(empresas.at(row)->descricao());
    //    ui->twEmpresas->setItem(row, COLUNA_TABELA_DESCRICAO, item);
    //    gm::itemutil::setObject<Empresa>(item, empresas.at(row));
    //}

    //ui->twEmpresas->blockEditingColumn(COLUNA_TABELA_CODIGO);
    //ui->twEmpresas->blockEditingColumn(COLUNA_TABELA_DESCRICAO);

    //ui->twEmpresas->resizeRowsToContents();
    //ui->twEmpresas->resizeColumnsToContents();

    //connect(ui->twEmpresas->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(clicouNoHeaderDaTableCadastroMultiplo(int)));
    //connect(ui->twEmpresas, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChangeTablesCadastroMultiplo(QTableWidgetItem*)));
}

