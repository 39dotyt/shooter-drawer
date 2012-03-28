/*
    mainwindow.h
    Copyright (C) 2012 Mikhalevich Yurij <count@ypsilon.me>
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QToolButton>

struct team
{
    QLabel *number;
    QLineEdit *name;
    QToolButton *button;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QList <team *> teams;
    int lli;

private slots:
    void addTeam();
    void drawCouples();
    void removeTeam();
    void ctrlEnterPressed();
    void tabPressed();
    void shiftTabPressed();
    void on_action_triggered();
    void saveCouplesToFile();
    void on_hotkeys_triggered();
};

#endif // MAINWINDOW_H