/*******************************************************************************
 * Copyright (C) 2013 Ragnar Thomsen <rthomsen6@gmail.com>                     *
 *                                                                             *
 * This program is free software: you can redistribute it and/or modify it     *
 * under the terms of the GNU General Public License as published by the Free  *
 * Software Foundation, either version 3 of the License, or (at your option)   *
 * any later version.                                                          *
 *                                                                             *
 * This program is distributed in the hope that it will be useful, but WITHOUT *
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for    *
 * more details.                                                               *
 *                                                                             *
 * You should have received a copy of the GNU General Public License along     *
 * with this program. If not, see <http://www.gnu.org/licenses/>.              *
 *******************************************************************************/

#ifndef RESLIMITS_H
#define RESLIMITS_H
 
#include "ui_reslimits.h"
 
class ResLimitsDialog : public KDialog
{
  Q_OBJECT

  public:
    explicit ResLimitsDialog(QWidget *parent=0, Qt::WFlags flags = 0);

  private slots:
    virtual void slotButtonClicked(int button);
    void slotChanged();
 
  private:
    Ui::ResLimitsDialog ui;
};
 
#endif