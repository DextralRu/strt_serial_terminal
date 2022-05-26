#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"

#include <QLabel>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      m_status(new QLabel),
      m_settings(new SettingsDialog)
{
    ui->setupUi(this);
    initActionsConnections();
}

MainWindow::~MainWindow()
{
    delete m_settings;
    delete ui;

}

void MainWindow::initActionsConnections()
{
    connect(ui->actionSerial_port, &QAction::triggered, m_settings, &SettingsDialog::show);
}
